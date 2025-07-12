import { useNavigate } from "react-router-dom";
const FirstPage = () => {
  const navigate = useNavigate(); // 네비게이트 Hook

  // second 페이지로 이동
  const onclock = () => navigate("/second");
  return (
    <div>
      <h3>This is First Page</h3>
      <button onClick={onclock}>move to second Page
      </button>
    </div>
  );
};
export default FirstPage;
