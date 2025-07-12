import React, { Component } from "react";
import Vegetables from "./comp/Vegetables";
import DATAS from "./comp/DATAS";
class App extends Component {
  render() {
    return (
      <div>
        <Vegetables datas={DATAS} />
      </div>
    );
  }
}
export default App;
