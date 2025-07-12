import { useState } from "react";
import extracurriculars from "./extracurriculars";
import './TeamProject.css';

function ExtraCurricular() {
  const [index, setIndex] = useState(0);
  const contentChange = (event) => {
    setIndex(event.target.value);
  };
  return (
    <div className="TeamProjectBtn">
      {extracurriculars.map((extracurricular, index) => (
        <button onClick={contentChange} value={index}>
          {extracurricular.tab}
        </button>
      ))}

      {extracurriculars[index].content}
    </div>
  );
}

export default ExtraCurricular;
