import { combineReducers } from "redux";
import addsubReducer from "./addsub";
import countingReducer from "./counting";
const index = combineReducers({
  value: addsubReducer,
  count: countingReducer,
});

export default index;
