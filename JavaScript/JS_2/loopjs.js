// for loop
    // for(let i = 0 ; i < 5 ; i++)
    // {}
    
        let obj = {
                n1 : 1,
                n2 : 2,
                n3 : 3,
                n4 : 4,
                n5 : 5
            }
    // for(let a in obj)
    // {
    //     console.log(a+" : "+obj[a]);
    // }

    for(let i = 0 ; i < Object.keys(obj).length ; i++)
    {
        console.log(Object.keys(obj)[i] + " : " + obj[Object.keys(obj)[i]]);
    }

    // for (let b of 'ya'+"sh") {
    //     console.log(b);
    // }


// while loop
        // let i = 0;
        // while (i<5) {
        //     console.log(i);
        //     i++;
        // }  
    
        // let i = 0;
        // do{
        //     console.log(i);
        //     i++;
        // }while (false)   
