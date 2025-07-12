import React from "react";
const Regist = () => {
  return (
    <main>
      <h2 align="center">회 원 가 입</h2>
      <form>
        <table border="1" align="center" width="40%">
          <tr>
            <td>이름</td>
            <td>
              <input type="text" size="5" />
            </td>
          </tr>
          <tr>
            <td width="30%">아이디</td>
            <td width="70%">
              <input type="text" size="8" />
            </td>
          </tr>
          <tr>
            <td>비밀번호</td>
            <td>
              <input type="password" size="8" />
            </td>
          </tr>
          <tr>
            <td>전화번호</td>
            <td>
              <select>
                <option>010</option>
                <option>02</option>
                <option>031</option>
                <option>032</option>
              </select>
              -
              <input type="text" size="2" />
              -
              <input type="text" size="2" />
            </td>
          </tr>
          <tr>
            <td colspan="2">
              <input type="radio" checked /> 남자
              <input type="radio" /> 여자
            </td>
          </tr>
          <tr>
            <td colspan="2" align="center">
              <button onClick="check()">가입하기</button>
            </td>
          </tr>
        </table>
      </form>
    </main>
  );
};
export default Regist;

