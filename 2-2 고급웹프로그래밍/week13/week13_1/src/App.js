import { useSelector } from "react-redux";
function App() {
 const weight = useSelector((state) => state.value);
 return (
  <div>
   <p> 저장한 몸무게(App) : {weight} </p>
   <Comp1 />
   <Comp2 />
  </div>
 );
}
function Comp1() {
   const weight = useSelector((state) => state.value);
    return (
    <div>
     <p> 저장한 몸무게(Comp1) : {weight} </p>
    </div>
   );
  }
  function Comp2() {
   const weight = useSelector((state) => state.value);
    return (
    <div>
     <p> 저장한 몸무게(Comp2) : {weight} </p>
    </div>
   );
  }
  export default App;
  
