import { useState } from "react";

import Header from "./comp/Header";
import Nav from "./comp/Nav";
import Article from "./comp/Article";
import datas from "./comp/datas";
function App() {
  const [mode, setMode] = useState("WELCOME");
  const [id, setId] = useState("");
  let content = null;
  if (mode === "WELCOME") {
    content = <Article title="Welcome" body="Hello, React"></Article>;
  } 
  
  else if (mode === "READ") {
      let title, body = null;

      for (let i = 0; i < datas.length; i++) {    // READ 일 경우 실행
        console.log(datas[i].id, id);
        if (datas[i].id ===(id)) {
          title = datas[i].title;
          body = datas[i].body;
        }
      }
      content = <Article title={title} body={body}></Article>;
  
  }
  return (
    <div>
      <Header   title="React"  onChangeMode={() => {
          setMode("WELCOME");   }}   />
      <Nav  datas={datas}  onChangeMode={(_id) => {
          setMode("READ");
          setId(_id);
}}      />
      {content}
    </div>
  );
}
export default App;
