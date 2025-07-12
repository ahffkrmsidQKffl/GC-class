import { createWebHistory, createRouter } from "vue-router";
import IndexComp from "@/components/IndexComp.vue";
import HtmlComp from "@/components/HtmlComp.vue";
import CSSComp from "@/components/IndexComp.vue";
import JavascriptComp from "@/components/JavascriptComp.vue";
import VueJsComp from "@/components/VueJsComp.vue";
import NodeJsComp from "@/components/NodeJsComp.vue";

const routes = [
  {
    path: "/", // Home 컴포넌트 출력
    component: IndexComp,
  },
  {
    path: "/Html", // about 컴포넌트 출력
    component: HtmlComp,
  },
  {
    path: "/CSS", // about 컴포넌트 출력
    component: CSSComp,
  },
  {
    path: "/Javascript", // about 컴포넌트 출력
    component: JavascriptComp,
  },
  {
    path: "/VueJs", // about 컴포넌트 출력
    component: VueJsComp,
  },
  {
    path: "/NodeJs", // about 컴포넌트 출력
    component: NodeJsComp,
  },
];

const router = createRouter({
  // 라우트 생성
  history: createWebHistory(),
  routes,
});
export default router;
