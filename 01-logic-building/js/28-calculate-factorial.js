/*
    Find Factorial of given number
*/

function factorial(iNo)
{
    let iCnt = 0
    if(iCnt < 0)
    {
        iNo = -iNo
    }
    let ifact = 1
    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        ifact = ifact*iCnt;
    }
    return ifact
}


function main()
{
    let iValue = 0
    let iRet = 0

    iValue = 5

    iRet = factorial(iValue)

    console.log("Factorial of",iValue,"is",iRet)
}

main()