import { useSelector, useDispatch } from "react-redux";
function App() {
 const dispatch = useDispatch();
  const { value } = useSelector((state) => state.value);
 const { count } = useSelector((state) => state.count);
  const addValue = () => {
  dispatch({ type: "increment" });
 };
 const subValue = () => {
  dispatch({ type: "decrement" });
 };
 const resetValue = () => {
  dispatch({ type: "reset" });
 };
 const pushButton = () => {
  dispatch({ type: "push" });
 };
 return (
     <fieldset>
      <legend>REDUX 예제 1</legend>
      <h3>증가 감소 리셋</h3>
      <div>value: {value}</div>
      <button onClick={addValue}> + </button>
      <button onClick={subValue}> - </button>
      <button onClick={resetValue}> reset </button>
      <h3>클릭 카운트</h3>
      <div>count: {count}</div>
      <button onClick={pushButton}> click </button>
     </fieldset>
    );
   }
   export default App;
   