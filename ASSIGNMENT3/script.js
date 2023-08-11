

let rect=document.getElementById("Rectangle1")
let rect1=document.getElementById("Rectangle2")
let rect2=document.getElementById("Rectangle3")

    
    rect.addEventListener("click",function()
    {
        if(rect.style.backgroundColor= 'black'){
            rect1.style.backgroundColor= 'white';
            rect2.style.backgroundColor= 'white';
        }
    });
    rect1.addEventListener("click",function()
    {
        if(rect1.style.backgroundColor= 'black'){
            rect.style.backgroundColor= 'white';
            rect2.style.backgroundColor= 'white';
        }
    });
    rect2.addEventListener("click",function()
    {
        if(rect2.style.backgroundColor= 'black'){
            rect.style.backgroundColor= 'white';
            rect1.style.backgroundColor= 'white';
           
        }
    });



