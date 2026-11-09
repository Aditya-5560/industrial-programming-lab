#!/usr/bin/env python3
"""
Antigravity Daily Program Organizer & Validator
Repository: industrial-programming-lab (https://github.com/Aditya-5560/industrial-programming-lab)
"""

import os
import re
import sys
import json
import shutil
import hashlib
import subprocess

REPO_ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), '..'))
INBOX = os.path.join(REPO_ROOT, 'daily-inbox')
PROGRESS_FILE = os.path.join(REPO_ROOT, 'PROGRESS.md')

COMPARTMENTS = [
    '01-logic-building',
    '02-arrays-and-matrices',
    '03-strings',
    '04-bit-manipulation',
    '05-memory-management',
    '06-structures-and-generic-programming',
    '07-recursion',
    '08-data-structure-implementation',
    '09-searching-and-sorting',
    '10-core-java',
    '11-java-collections',
    '12-file-and-system-programming',
    '13-network-programming',
    '14-multithreading',
    '15-object-oriented-design',
    '16-design-patterns-and-lld'
]

ORGANIZATION_PLAN = [
    # C Programs (Module 01 - Logic Building)
    ('Assignment10-1.c', '01-logic-building/c/173-calculate-circle-area.c'),
    ('Assignment10-2.c', '01-logic-building/c/174-calculate-rectangle-area.c'),
    ('Assignment10-3.c', '01-logic-building/c/175-convert-kilometer-to-meter.c'),
    ('Assignment10-4.c', '01-logic-building/c/176-convert-fahrenheit-to-celsius.c'),
    ('Assignment10-5.c', '01-logic-building/c/177-convert-square-feet-to-square-meter.c'),

    # C++ Programs (Module 01 - Logic Building)
    ('Assignment7-1.cpp', '01-logic-building/cpp/15-pattern-alternating-dollar-asterisk.cpp'),
    ('Assignment7-2.cpp', '01-logic-building/cpp/16-display-linear-number-sequence.cpp'),
    ('Assignment7-3.cpp', '01-logic-building/cpp/17-display-symmetric-number-line.cpp'),
    ('Assignment7-4.cpp', '01-logic-building/cpp/18-display-odd-numbers-sequence.cpp'),
    ('Assignment7-5.cpp', '01-logic-building/cpp/19-display-multiples-sequence.cpp'),
    ('Assignment8-1.cpp', '01-logic-building/cpp/20-number-range-classification-small-medium-large.cpp'),
    ('Assignment8-2.cpp', '01-logic-building/cpp/21-single-digit-to-word-converter.cpp'),
    ('Assignment9-1.cpp', '01-logic-building/cpp/22-pattern-sequential-asterisk-hash.cpp'),
    ('Assignment9-2.cpp', '01-logic-building/cpp/23-currency-conversion-usd-to-inr.cpp'),
    ('Assignment9-3.cpp', '01-logic-building/cpp/24-calculate-even-factorial.cpp'),
    ('Assignment9-4.cpp', '01-logic-building/cpp/25-calculate-odd-factorial.cpp'),
    ('Assignment9-5.cpp', '01-logic-building/cpp/26-factorial-difference-even-and-odd.cpp'),

    # JavaScript Programs (Module 01 - Logic Building)
    ('Assignment8-3.js', '01-logic-building/js/28-calculate-factorial.js'),
    ('Assignment8-4.js', '01-logic-building/js/29-display-multiplication-table.js'),
    ('Assignment8-5.js', '01-logic-building/js/30-display-multiplication-table-reverse.js'),
]

def sha256_of(path):
    with open(path, 'rb') as f:
        return hashlib.sha256(f.read()).hexdigest()

def audit_counts():
    counts = {}
    totals = {'c': 0, 'cpp': 0, 'java': 0, 'js': 0, 'total': 0}
    for comp in COMPARTMENTS:
        comp_dir = os.path.join(REPO_ROOT, comp)
        c_cnt = 0
        cpp_cnt = 0
        java_cnt = 0
        js_cnt = 0
        if os.path.exists(comp_dir):
            for root, _, files in os.walk(comp_dir):
                for f in files:
                    if f.startswith('.'):
                        continue
                    if f.endswith('.c'):
                        c_cnt += 1
                    elif f.endswith('.cpp'):
                        cpp_cnt += 1
                    elif f.endswith('.java'):
                        java_cnt += 1
                    elif f.endswith('.js'):
                        js_cnt += 1
        comp_total = c_cnt + cpp_cnt + java_cnt + js_cnt
        counts[comp] = {
            'c': c_cnt,
            'cpp': cpp_cnt,
            'java': java_cnt,
            'js': js_cnt,
            'total': comp_total
        }
        totals['c'] += c_cnt
        totals['cpp'] += cpp_cnt
        totals['java'] += java_cnt
        totals['js'] += js_cnt
        totals['total'] += comp_total
    return counts, totals

def check_syntax(path):
    if path.endswith('.c'):
        res = subprocess.run(['clang', '-fsyntax-only', path], capture_output=True, text=True)
        return res.returncode == 0, res.stderr.strip()
    elif path.endswith('.cpp'):
        res = subprocess.run(['clang++', '-fsyntax-only', path], capture_output=True, text=True)
        return res.returncode == 0, res.stderr.strip()
    elif path.endswith('.java'):
        res = subprocess.run(['javac', '-d', '/tmp', path], capture_output=True, text=True)
        return res.returncode == 0, res.stderr.strip()
    elif path.endswith('.js'):
        res = subprocess.run(['node', '--check', path], capture_output=True, text=True)
        return res.returncode == 0, res.stderr.strip()
    return True, ''

def update_progress_md(counts, totals):
    with open(PROGRESS_FILE, 'r') as f:
        content = f.read()

    # Update summary table
    content = re.sub(
        r'\*\*Total Programs Completed\*\* \| \*\*\d+\*\*',
        f"**Total Programs Completed** | **{totals['total']}**",
        content
    )
    content = re.sub(
        r'\| \*\*Language Breakdown\*\* \| C: \d+ \\\| C\+\+: \d+ \\\| Java: \d+ \\\| JavaScript: \d+ \|',
        f"| **Language Breakdown** | C: {totals['c']} \\| C++: {totals['cpp']} \\| Java: {totals['java']} \\| JavaScript: {totals['js']} |",
        content
    )

    # Count active modules
    active_count = sum(1 for comp in COMPARTMENTS if counts[comp]['total'] > 0)
    content = re.sub(
        r'\*\*Modules Started\*\* \| \*\*\d+ / 16\*\*',
        f"**Modules Started** | **{active_count} / 16**",
        content
    )

    # Update Module Breakdown table rows
    for comp in COMPARTMENTS:
        c = counts[comp]
        num = comp[:2]
        # Match pattern: | 01. Logic Building | 172 | 14 | 31 | 27 | 244 |
        # Use regex to find row starting with | {num}.
        pattern = rf'\| {num}\.\s+([^|]+)\s+\|\s+\d+\s+\|\s+\d+\s+\|\s+\d+\s+\|\s+\d+\s+\|\s+\d+\s+\|'
        m = re.search(pattern, content)
        if m:
            comp_name = m.group(1).strip()
            new_row = f"| {num}. {comp_name} | {c['c']} | {c['cpp']} | {c['java']} | {c['js']} | {c['total']} |"
            content = content[:m.start()] + new_row + content[m.end():]

    # Update Overall Total row
    content = re.sub(
        r'\| \*\*Overall Total\*\* \| \*\*\d+\*\* \| \*\*\d+\*\* \| \*\*\d+\*\* \| \*\*\d+\*\* \| \*\*\d+\*\* \|',
        f"| **Overall Total** | **{totals['c']}** | **{totals['cpp']}** | **{totals['java']}** | **{totals['js']}** | **{totals['total']}** |",
        content
    )

    with open(PROGRESS_FILE, 'w') as f:
        f.write(content)

def cmd_organize():
    print(f'Starting organization of {len(ORGANIZATION_PLAN)} programs...')
    all_ok = True
    results = []

    for src_name, dst_rel in ORGANIZATION_PLAN:
        src_path = os.path.join(INBOX, src_name)
        dst_path = os.path.join(REPO_ROOT, dst_rel)

        if not os.path.exists(src_path):
            print(f'FAIL: Source missing: {src_name}')
            all_ok = False
            continue

        src_hash = sha256_of(src_path)
        os.makedirs(os.path.dirname(dst_path), exist_ok=True)
        shutil.copy2(src_path, dst_path)
        dst_hash = sha256_of(dst_path)

        if src_hash != dst_hash:
            print(f'FAIL: Hash mismatch for {src_name}')
            all_ok = False
            continue

        ok, err = check_syntax(dst_path)
        status = 'COMPILES' if ok else 'FLAW/ERROR'
        results.append((src_name, dst_rel, status))
        os.remove(src_path)
        print(f'OK: {src_name} -> {dst_rel} [{status}]')

    if all_ok:
        counts, totals = audit_counts()
        update_progress_md(counts, totals)
        print('\nUpdated PROGRESS.md successfully.')
        print(f"Total Programs: {totals['total']} (C: {totals['c']}, C++: {totals['cpp']}, Java: {totals['java']}, JS: {totals['js']})")
    else:
        print('\nOrganization completed with errors!')

def cmd_audit():
    counts, totals = audit_counts()
    print('| Compartment | C | C++ | Java | JavaScript | Compartment Total |')
    print('|---|---:|---:|---:|---:|---:|')
    for comp in COMPARTMENTS:
        c = counts[comp]
        name = comp[3:].replace('-', ' ').title()
        print(f"| {comp[:2]}. {name} | {c['c']} | {c['cpp']} | {c['java']} | {c['js']} | {c['total']} |")
    print(f"| **Overall Total** | **{totals['c']}** | **{totals['cpp']}** | **{totals['java']}** | **{totals['js']}** | **{totals['total']}** |")
    print(f"\nSummary: C: {totals['c']} | C++: {totals['cpp']} | Java: {totals['java']} | JavaScript: {totals['js']} (Total: {totals['total']})")

def cmd_status():
    if not os.path.exists(INBOX):
        print('daily-inbox does not exist.')
        return
    files = sorted([f for f in os.listdir(INBOX) if not f.startswith('.') and os.path.isfile(os.path.join(INBOX, f))])
    print(f'Inbox files ({len(files)}):')
    for f in files:
        p = os.path.join(INBOX, f)
        print(f'  {f} ({os.path.getsize(p)} bytes)')

def cmd_inspect():
    if not os.path.exists(INBOX):
        print('daily-inbox does not exist.')
        return
    files = sorted([f for f in os.listdir(INBOX) if not f.startswith('.') and os.path.isfile(os.path.join(INBOX, f))])
    for f in files:
        p = os.path.join(INBOX, f)
        ok, err = check_syntax(p)
        err_msg = err.splitlines()[-1] if err else 'unknown'
        status = 'OK' if ok else f'ERROR: {err_msg}'
        print(f'=== {f} ({status}) ===')
        with open(p, 'r', errors='ignore') as fp:
            for line in fp:
                print('  ' + line.rstrip('\n'))
        print()

if __name__ == '__main__':
    cmd = sys.argv[1] if len(sys.argv) > 1 else 'status'
    if cmd == 'audit':
        cmd_audit()
    elif cmd == 'status':
        cmd_status()
    elif cmd == 'inspect':
        cmd_inspect()
    elif cmd == 'organize':
        cmd_organize()
    else:
        print(f'Unknown command: {cmd}')
