import { useState } from "react";
import oncampuses from "./oncampuses";
import './TeamProject.css';

function OnCampus() {
  const [index, setIndex] = useState(0);
  const contentChange = (event) => {
    setIndex(event.target.value);
  };
  return (
    <div className="TeamProjectBtn">
      {oncampuses.map((oncampus, index) => (
        <button onClick={contentChange} value={index}>
          {oncampus.tab}
        </button>
      ))}

      {oncampuses[index].content}
    </div>
  );
}

export default OnCampus;
