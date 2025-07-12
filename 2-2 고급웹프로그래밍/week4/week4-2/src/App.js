// const arr = {
//     name : '홍길동',
//     age : 33,
//     gender : 'male'
//     }
    
//     // 객체의 키를 적어줌
//     const {name, age, gender} = arr ;
    
//     console.log(name); // 홍길동
//     console.log(age); // 33
//     console.log(gender); // male



// function App() {
//      const name = "Daram";
//      return (
//       // Props가 3개임
//       <Child age={7} name={name}>
//        다람이 <br />
//        하늘이 <br />
//        하늘이 <br />
//        구름이
//       </Child>
//      );
//     }
//     function Child(props) {
//      const { age, name, children } = props;
//      // console.log(props);
//      console.log(age, name, children);
//      return <div> {children} </div>; // Render Element
//     }
//     export default App;



import Header from "./comp/Header";
import Nav from "./comp/Nav";
import Article from "./comp/Article";
import topics from "./comp/topics"; //5주차
function App() {
    
    //4주차
    // const topics = [
    //     { id: 1, title: "html", body: "html is ..." },
    //     { id: 2, title: "css", body: "css is ..." },
    //     { id: 3, title: "javascript", body: "javascript is ..." },
    //     { id: 4, title: "react", body: "react is ..." },
    //     { id: 5, title: "nodejs", body: "nodejs is ..." }
    //   ];

 return (
  <div>
   <Header title="React"/>
   <Nav topics={topics}/>
   <Article title="JavaScript" body="React"/>
  </div>
 );
}
export default App;
