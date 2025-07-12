import Header from "./comp/Header";
import Nav from "./comp/Nav";
import Article from "./comp/Article";
import topics from "./comp/topics";
function App() {
  
  return (
    <div>
      <Header title="React"/>
      <Nav topics={topics}/>
      <Article title="Welcome" body="React"/>
    </div>
  );
}
export default App;
