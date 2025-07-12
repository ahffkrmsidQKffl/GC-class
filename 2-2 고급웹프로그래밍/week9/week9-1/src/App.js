import { BrowserRouter as Router, Routes, Route, Link } from "react-router-dom";
import Home from "./comp/Home";
import MyPage from "./comp/MyPage";
import Recommend from "./comp/Recommend";
import Search from "./comp/Search";
import Posts from "./comp/Posts";
import Login from "./comp/Login";
import "./App.css";

const App = () => {
  return (
    <div className="App">
      <Router>
        <div className="header">
          <Link to="/" className="item">
            Home
          </Link>
          <br />
          <Link to="/myPage/김창복/개발자" className="item">
            MyPage
          </Link>
          <br />
          <Link to="/recommend" className="item">
            Recommand
          </Link>
          <br />
          <Link to="/search" className="item">
            Search
          </Link>
          <br />
          <Link to="/posts" className="item">
            Posts
          </Link>
        </div>

        <Routes>
          <Route exact path="/" Component={Home} />
          <Route path="/mypage/:name/:developer" Component={MyPage} />
          <Route path="/recommend" Component={Recommend} />
          <Route path="/search" Component={Search} />
          <Route path="/posts/*" Component={Posts} />
          <Route path="/login" Component={Login} />
        </Routes>
      </Router>
    </div>
  );
};
export default App;
