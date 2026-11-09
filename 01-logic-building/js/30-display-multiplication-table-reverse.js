//Accept a number and display its table in reverse order

function tableRev(iNo)
{
    //Updater
    if(iNo<0)
    {
        iNO = -iNo
    }

    let iCnt = 0
    for(iCnt = 10; iCnt>=1; iCnt--)
    {
        console.log(iNo*iCnt)
    }
}


function main()
{
    let iValue = 0
    iValue = 2

    tableRev(iValue)
}

main()