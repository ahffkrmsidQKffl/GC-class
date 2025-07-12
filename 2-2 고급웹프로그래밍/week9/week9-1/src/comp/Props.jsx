import React from 'react';

const Props = () => {
  return (
    <div>
      <h2>Props</h2>
      <ul>
        <li>React Props(Property)  :  Component(Tag)가 가지는 속성을 설정</li>
        <li>부모 Component에서 자식 Component에 전달하는 Data</li>
        <li>Props는 Element 에서 수정 불가능</li>
        <li>같은 props에 대해서 같은 Element 생성</li>
        <li>문자열을 전달 : 큰따옴표(" ") </li>
        <li>문자열 외 :  중괄호({ })</li>
        </ul>
        <div>
          <p>Props 예시</p>
          동일한 Component에 Props를 달리해서 다른 Element를 생산
          <img src ="/image/props.gif" width="600px" height = "400px" alt="jsx 예시"></img>
        </div>
    </div>
  );
};

export default Props;