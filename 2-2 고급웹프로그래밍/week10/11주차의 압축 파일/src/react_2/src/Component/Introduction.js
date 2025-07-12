import { useState } from "react";
import intros from "./Data/intros";

function Introduction() {
  const [index, setIndex] = useState(0);
  const contentChange = (event) => {
    setIndex(event.target.value);
  };
  return (
    <div>
      {intros.map((intro, index) => (
        <button onClick={contentChange} value={index}>
          {intro.tab}
        </button>
      ))}
      <br /> <br />
      {intros[index].content}
    </div>
  );
}

export default Introduction;
