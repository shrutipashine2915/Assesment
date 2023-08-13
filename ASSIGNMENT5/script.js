const data = [
  {
    type: "div",
    children: [
      { type: "h1", children: [{ type: "p" }] },
      { type: "ul", children: [{ type: "li" }, { type: "li" }] },
    ],
  },
];

 
  console.log(data[0].type);
  console.log(data[0].children[0].type); 
  console.log(data[0].children[0].children[0].type); 
  console.log(data[0].children[1].type);
  console.log(data[0].children[1].children[0].type);
  console.log(data[0].children[1].children[1].type);
 
  
 

  
