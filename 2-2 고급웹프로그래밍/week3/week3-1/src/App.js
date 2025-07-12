import Header from "./components/Header";
import Nav from "./components/Nav";
import Index from "./components/Index";
import Html from "./components/Html";
import Css from "./components/Css";
import Javascript from "./components/Javascript";
import ReactJs from "./components/ReactJs";
import NodeJs from "./components/NodeJs";
import Regist from "./components/Regist";
import Login from "./components/Login";
import Article from "./components/Article";
import Footer from "./components/Footer"; //import 순서는 웹페이지에 표시되는 순서랑 상관X

function App() {
  return (
    <div>
      <Header /> {/*여기에서의 순서가 웹페이지에 표기되는 순서와 상관이 있다 */}
      <Nav />
      <Index />
      <Html />
      <Css />
      <Javascript />
      <ReactJs />
      <NodeJs />
      <Regist />
      <Login />
      <Article />
      <Footer />
    </div>
  );
}


export default App;
