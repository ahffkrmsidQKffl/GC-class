import { useState, useRef } from "react";
function App() {
  const [names, setNames] = useState([]);
  const [value, setValue] = useState("");
  const inputEl = useRef(null);
  const inputChange = (e) => {
    setValue(e.target.value);
  };
  const handleUpload = () => {
    setNames((prev) => [...prev, value]);
    setValue("");
    inputEl.current.focus();
  };
  return (
      <div>
        <input ref={inputEl} type="text" value={value} 
           onChange={inputChange} />
  
        <button onClick={handleUpload}>Upload</button>
        <ul>
          {names.map((name, index) => {
            return <ol key={index}>{name}</ol>;
          })}
        </ul>
      </div>
    );
  }
  export default App;
  