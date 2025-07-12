import { useParams } from "react-router-dom";
const MyPage = () => {
  const { name } = useParams();
  return (
    <div>
      <h1>{name}의 Page</h1>;
    </div>
  );
};
export default MyPage;


    