import { BrowserRouter as Router, Routes, Route } from "react-router-dom";
import Header from "./comp/Header";
import Home from "./comp/Home";
import Recommend from "./comp/Recommend";
import Search from "./comp/Search";
import MyPage from "./comp/MyPage";
import Posts from "./comp/Posts";
import "./App.css";

const App = () => {
  return (
    <div className="App">
      <Router>
        <Header/>

        <Routes>
          <Route exact path="/" Component={Home} />
          <Route path="/mypage/:name" Component={MyPage} />
          <Route path="/recommend" Component={Recommend} />
          <Route path="/search" Component={Search} />
          <Route path="/posts/:study" Component={Posts} />     
        </Routes>
      </Router>
    </div>
  );
};
export default App;
