import { createStore } from "vuex";
import message from "./message";
import counter from "./counter";
export default createStore({
 modules: {  // message 모듈을 msg로 등록
  counter: counter,
  msg: message,
 },
});
