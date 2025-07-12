import { useState } from "react";

const Dropdown = (props) => {
    return <article>{props.visibility && props.children}</article>;
  };

const App = (props) => {
  const [Down, setDown] = useState(false);

  return (
    <div>
      <button onClick={(e) => setDown(!Down)}>
        {Down ? "Close" : "Open"}
      </button>

      <Dropdown visibility={Down}>
        <ul>
          <li>item 1</li>
          <li>item 2</li>
          <li>item 3</li>
          <li>item 4</li>
        </ul>
      </Dropdown>
    </div>
  );
};
export default App;

