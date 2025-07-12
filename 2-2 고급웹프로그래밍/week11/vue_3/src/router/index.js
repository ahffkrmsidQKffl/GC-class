import { createWebHistory, createRouter } from "vue-router";
import HomeCmt from "@/components/HomeCmt.vue";
import AboutCmt from "@/components/AboutCmt.vue";

const routes = [    // 라우터 설정
  {
    path: "/",               // 라우터
    component: HomeCmt,
  },
  {
    path: "/about",       // touter
    component: AboutCmt,
  },
];

const router = createRouter({  // 라우트 생성
  history: createWebHistory(),
  routes,
});

export default router;
