import { useState } from "react";
function App() {
 const [student, setStudent] = useState("name");
 const [school, setSchool] = useState("school");
 const handleChange1 = (event) => {
  setStudent(event.target.value);
 };
 const handleChange2 = (event) => {
  setSchool(event.target.value);
 };
 return (
  <div>
   <input onChange={handleChange1} />
   <br />
   <input onChange={handleChange2} />
   <p>
    {student}님은 {school}에 재학중입니다.
   </p>
  </div>
 );
}
export default App;
