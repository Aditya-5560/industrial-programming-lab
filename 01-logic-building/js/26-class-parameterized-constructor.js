class Demo
{
    constructor(A,B)
    {
        this.no1 = A
        this.no2 = B
        console.log("Inside constructor") 
    }
}

function main()
{
    dobj = new Demo(51,101) 

    console.log(dobj.no1) 
    console.log(dobj.no2)  


}

main()