//Accept a number and display its table

function table(iNo)
{
    //Updater
    if(iNo<0)
    {
        iNO = -iNo
    }

    let iCnt = 0
    for(iCnt = 1; iCnt<=10; iCnt++)
    {
        console.log(iNo*iCnt)
    }
}


function main()
{
    let iValue = 0
    iValue = 2

    table(iValue)
}

main()