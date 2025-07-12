import { useNavigate } from "react-router-dom";

const ThirdPage = () => {
  const navigate = useNavigate();
  // first 페이지로 이동
  const onclock = () => navigate("/first");
  return (
    <div>
      <h3>This is Third Page</h3>
      <button onClick={onclock}>move to First Page</button>
    </div>
  );
};

export default ThirdPage;
