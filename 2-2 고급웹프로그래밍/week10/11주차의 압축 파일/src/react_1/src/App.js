import { BrowserRouter, Route, Routes, Link } from "react-router-dom";

import Header from "./Component/Header";
import Web from "./Component/Web";
import Html from "./Component/Html";
import Css from "./Component/Css";
import Js from "./Component/Js";
import ReactJs from "./Component/ReactJs";
import NodeJs from "./Component/NodeJs";
import NotFound from "./Component/NotFound";
import Footer from "./Component/Footer";
import "./App.css";

function App() {
  return (
    <BrowserRouter>
      <div id="header">
        <Header />
      </div>

      <div id="container">
        <div id="nav">
          <Link to={"/html"}>HTML</Link>
          <Link to={"/css"}>CSS</Link>
          <Link to={"/js"}>JavaScript</Link>
          <Link to={"/reactjs"}>ReactJs</Link>
          <Link to={"/nodejs"}>NodeJs</Link>
        </div>

        <div id="main">
          <Routes>
            <Route path="/" Component={Web} />
            <Route path="/html" Component={Html} />
            <Route path="/css" Component={Css} />
            <Route path="/js" Component={Js} />
            <Route path="/reactjs" Component={ReactJs} />
            <Route path="/nodejs" Component={NodeJs} />
            <Route path="*" element={NotFound} />
          </Routes>
        </div>
      </div>
      <div id="footer">
        <Footer />
      </div>
    </BrowserRouter>
  );
}

export default App;
