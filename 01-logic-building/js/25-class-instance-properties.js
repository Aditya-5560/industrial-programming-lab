class Demo
{
    constructor()
    {
        this.no1 = 11
        this.no2 = 21
        console.log("Inside constructor") 
    }
}

function main()
{
    dobj = new Demo() 

    console.log(dobj.no1) 
    console.log(dobj.no2)  


}

main()