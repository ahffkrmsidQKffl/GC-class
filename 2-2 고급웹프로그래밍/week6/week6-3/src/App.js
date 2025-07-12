import React, { useState, useRef } from "react";
const App = () => {
  const [first, setFirst] = useState(Math.ceil(Math.random() * 9));
  const [second, setSecond] = useState(Math.ceil(Math.random() * 9));
  const [value, setValue] = useState("");
  const [result, setResult] = useState("");
  const inputEl = useRef(null);   // input box를 지칭
  const onSubmitForm = (e) => {
    e.preventDefault();
    if (parseInt(value) === first * second) {
      setResult("정답");
      setFirst(Math.ceil(Math.random() * 9));
      setSecond(Math.ceil(Math.random() * 9));
      setValue(" ");
      inputEl.current.focus();
    } else {
      setResult("땡");
      setValue(" ");
      inputEl.current.focus();
    }
  };
  return (
      <>
        <div>
          {first} 곱하기 {second}는?
        </div>
  
        <form onSubmit = {onSubmitForm}>
          <input ref={inputEl}  type="number"
             value={value}
            onChange={(e) => setValue(e.target.value)} />
          <button>입력!</button>
        </form>
                  
        <div id="result">{result}</div>
      </>
    );
  };

/*   import { Component } from "react";
  class App extends Component {
    state = {
      first : Math.ceil(Math.random() * 9),
      second : Math.ceil(Math.random() * 9),
      value : "",
      result : "",
    };
   onSubmit = (e) => {
        e.preventDefault(); // 기본 기능 방지
        if (parseInt(this.state.value) === this.state.first * this.state.second) {   
          this.setState({
            result: "정답: ",
            first: Math.ceil(Math.random() * 9),
            second: Math.ceil(Math.random() * 9),
            value: "",
          });
        } else {      // 거짓이면
          this.setState({
            result: "땡",
            value: "",
          });
        }
      };
     render() {
          return (
            <div>
              <div>
                {this.state.first} 곱하기 {this.state.second}는?
              </div>
      
              <form onSubmit={this.onSubmit}>
                <input type="number" onChange={this.onChange} />
                <button>입력!</button>
              </form>
      
              <div>{this.state.result}</div>
            </div>
          );
        }
      } */
      export default App;
      
