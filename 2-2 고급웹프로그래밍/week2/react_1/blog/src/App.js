/* function App() {
   console.log("컴포넌트가 실행되면서 랜더링됩니다.");
   return (
    <div>
     <h2>안녕하세요</h2>
     김창복입니다...
    </div>
   );
  }
  export default App;
   */

/*   import React from "react";
  function App() {
   const name = "김창복";
   const Element1 = <div>안녕하세요 {name} 씨 ~~~</div>;
   const Element2 = <div>오늘도 좋은 하루되세요 </div>;
  
  // const Element1 = React.createElement("div", null, `안녕하세요 ${name} 씨`);
  // const Element2 = React.createElement("div", null, `오늘도 좋은 하루되세요`);
   return (
    <div>
     {Element1} {Element2}
    </div>
   );
  }
  export default App; */

  function App() {
     const Element = <div>안녕하세요 </div>;
     const name = "김창복";
     const addr = "인천시 남동구 논현동";
     const age = 40;
    
     return (
      <div>
       {Element}
       내이름은 {name} 입니다.
       <br />
       주소는 {addr} 이고 나이는 {age} 입니다.
      </div>
     );
    }
    
    export default App;
    
  
  