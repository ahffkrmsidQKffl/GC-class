import ReactDOM from "react-dom/client";
import App from "./App";
import { Provider } from "react-redux";
import { legacy_createStore as createStore } from "redux";
const initialState = {  // State
 value: 100,
};
function reducer(state = initialState, action) {
 return { value: state.value };
}
let store = createStore(reducer);
const root = ReactDOM.createRoot(document.getElementById("root"));
root.render(
 <Provider store={store}>
  <App />
 </Provider>
);
