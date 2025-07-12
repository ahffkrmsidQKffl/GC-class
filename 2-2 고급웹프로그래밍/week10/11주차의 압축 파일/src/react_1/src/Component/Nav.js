import { Link } from "react-router-dom";

function Nav() {
  return (
    <nav>
      <Link to={"/html"}>HTML</Link>
      <Link to={"/css"}>CSS</Link>
      <Link to={"/js"}>JavaScript</Link>
      <Link to={"/reactjs"}>ReactJs</Link>
      <Link to={"/nodejs"}>NodeJs</Link>
    </nav>
  );
}

export default Nav;
