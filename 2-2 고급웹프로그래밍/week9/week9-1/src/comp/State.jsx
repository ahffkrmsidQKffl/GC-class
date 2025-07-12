import React from 'react';

const State = () => {
  return (
    <div>
      <h2>State</h2>
      <ul>
        <li>React의 핵심 Hook</li>
        <li>UI + Data </li>
        <li>Ui(User Interface) 와 Data(State)를 하나로 묶음 </li>
        <li>React는 Data 중심으로 Render</li>
        <li>State가 변경되면 화면이 자동으로 Render</li>
      </ul>
      <div>
          <p>State 예시</p>
          <img src ="/image/state.gif" width="700px" height = "400px" alt="jsx 예시"></img>
        </div>
    </div>
  );
};

export default State;