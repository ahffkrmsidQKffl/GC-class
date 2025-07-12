import React from 'react';

const Login = () => {
    return (
        <main>
      <h2 align="center">로그인</h2>
      <form action="join_ok.js" method="post">
        <table border="1" width="30%" align="center">
          <tr>
            <td width="30%">아이디</td>
            <td width="70%"><input type="text" name="id" size="3" /></td>
          </tr>
          <tr>
            <td>비밀번호</td>
            <td><input type="password" name="pw" size="3" /></td>
          </tr>
          <tr>
            <td colspan="2" align="center">
              <button onclick="check()">로그인</button>
            </td>
          </tr>
        </table>
      </form>
    </main>
    );
};

export default Login;