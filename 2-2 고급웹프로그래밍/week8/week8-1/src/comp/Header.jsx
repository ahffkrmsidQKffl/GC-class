import { NavLink } from "react-router-dom";

const Header = () => {
  return (
    <div className="header">
      <NavLink to="/" className="item"> Home </NavLink>
      <NavLink to="/MyPage/김창복" className="item"> MyPage </NavLink>
      <NavLink to="/Recommend" className="item"> Recommend  </NavLink>
      <NavLink to="/Search" className="item"> Search  </NavLink>
      <NavLink to="/posts/REACT" className="item"> Posts </NavLink>
    </div>
  );
};
export default Header;


