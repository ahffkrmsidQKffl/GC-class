// function Welcome(props) { // 자식 Component
//    console.log(props);
  
//    return <h1> Hello, {props.name} </h1>;
//   }
  
//   ////////////////////////////////////////////
//   function App() {   // 부모 Component
//    return (
//     <div>
//      <Welcome name="김창복" />
//      <Welcome name="가가가" />
//      <Welcome name="나나나" />
//     </div>
//    );
//   }
//   export default App;

// function App() {
//   const numbers = ["1 번째", "2 번째", "3 번째", "4 번째", "5 번째"];

//   // key는 유일해야 한다
//   const listItems = numbers.map((number, index) => {
//     return <li key={index}> {number} </li> ;
//   });

//   return <ul>{listItems}</ul>;
// }

// export default App;

  

import Vegetables from "./comp/Vegetables";
import DATAS from "./comp/DATAS";


  const App = () => {
     return (
      <div>
       {/* Props명 = {Props값} */}
       <Vegetables datas={DATAS} />
      </div>
     );
    };

    export default App;
    