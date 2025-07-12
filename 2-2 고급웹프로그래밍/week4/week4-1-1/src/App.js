import Header from "./comp/Header";
import Nav from "./comp/Nav";
import Article from "./comp/Article";
import datas from "./comp/datas";
function App() {
 return (
  <div>
   <Header title="React" onChangeMode={() => {
     alert("Header");
    }} />
   <Nav datas={datas} onChangeMode={(e) => {
     alert(e);
    }}
   />

   <Article title="React" body="Hello, React " />
  </div>
 );
}
export default App;
