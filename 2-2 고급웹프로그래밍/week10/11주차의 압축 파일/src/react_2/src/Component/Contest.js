import { useState } from "react";
import contests from "./Data/contests";
import "./CSS/Contest.css";

function Contest() {
  const [index, setIndex] = useState(0);
  const contentChange = (event) => {
    setIndex(event.target.value);
  };
  return (
    <div id="contest">
      {contests.map((contest, index) => (
        <button onClick={contentChange} value={index}>
          {contest.tab}
        </button>
      ))}
      {contests[index].content}
    </div>
  );
}

export default Contest;
