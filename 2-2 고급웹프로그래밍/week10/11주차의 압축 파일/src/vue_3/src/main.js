import { createApp } from "vue";
import App from "./App.vue";

// router/index.js 파일 추가
import router from "./router";
const app = createApp(App);
app.use(router); // router/index.js 파일 사용

app.mount("#app");
