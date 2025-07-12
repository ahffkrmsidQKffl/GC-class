import { useParams } from "react-router-dom";
const Posts = () => {
  //  const params = useParams();
  const { study } = useParams();
  return (
    <div>
      {/* <h1>{params.study}의 Post Page</h1> */}
      <h1>{study}의 Post Page</h1>
    </div>
  );
};
export default Posts;
