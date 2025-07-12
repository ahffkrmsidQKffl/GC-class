import { useParams, Routes, Route, Navigate } from "react-router-dom";
const MyPage = () => {
  const { name, developer } = useParams();
  const logged = false ;
  return (
    <div>
      <Routes>
        {!logged && (
          <Route path="/*" element={<Navigate to="/login" />}></Route>
        )}
      </Routes>

      <h3>
        {name}의 {developer} Page
      </h3>
      <p>로그인 해야 볼 수 있는 개인자료</p>
    </div>
  );
};

export default MyPage;
