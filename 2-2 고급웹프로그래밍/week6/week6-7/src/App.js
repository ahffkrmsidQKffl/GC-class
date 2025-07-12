import contents from "./comp/contents";
import { useState } from "react";
function App() {
  const [index, setIndex] = useState(0);
  const contentChange = (event) => {
    setIndex(event.target.value);
  };
  return (
    <div>
      {contents.map((content, index) => (
        <button onClick={contentChange} value={index}>
          {content.tab}
        </button>
      ))}
      <br /> <br />
      {contents[index].content}
    </div>
  );
}
export default App;
