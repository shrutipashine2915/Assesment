const data = [
  {
    type: "div",
    children: [
      { type: "h1", children: [{ type: "p" }] },
      { type: "ul", children: [{ type: "li" }, { type: "li" }] },
    ],
  },
];

for (let i = 0; i < data.length; i++) 
{
    const obj = data[i];
    for (let key in obj) 
    {
      if (key === "type") 
      {
        console.log(obj[key]);
      } 
      else if (key === "children") 
      {
        for (let j = 0; j < obj.children.length; j++) 
        {
          const childObj = obj.children[j];
          
          for (let childKey in childObj) 
          {
              if (childKey === "type") 
              console.log(childObj[childKey]);
              {
            }
         }
        }
      }
    }
  }