import { useNavigate } from "react-router-dom";
const SecondPage = () => {
  const navigate = useNavigate();

  // third 페이지로 이동
  const onclock = () => navigate("/third");
  return (
    <div>
      <h3>This is Second Page</h3>
      <button onClick={onclock}>move to Third Page
      </button>
    </div>
  );
};
export default SecondPage;
