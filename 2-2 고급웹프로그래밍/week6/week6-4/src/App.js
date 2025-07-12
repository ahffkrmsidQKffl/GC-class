import React, { useState } from "react";
const App = () => {
  const [word, setWord] = useState("가천대");
  const [value, setValue] = useState("");
  const [result, setResult] = useState("");
  const onSubmitForm = (e) => {
    e.preventDefault();   // 기본 기능 ?
    // 문제의 마지막 단어 === 입력 단어의 첫번째 단어
    if (word[word.length - 1] === value[0]) {
      setResult("딩동댕");
      setWord(value);
      setValue("");
    } else {
      setResult("땡");
      setValue("");
    }
  };
  return (
        <>
          <div>{word}</div>
    
          <form onSubmit={onSubmitForm}>
            <input
              onChange={(e) => setValue(e.currentTarget.value)}
            />
            <button>입력!</button>
          </form>
          <div>{result}</div>
        </>
      );
    };
    export default App;
    