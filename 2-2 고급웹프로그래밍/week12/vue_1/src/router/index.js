import { createWebHistory, createRouter } from "vue-router";
import HomeCmt from "@/components/HomeCmt.vue";
import AboutCmt from "@/components/AboutCmt.vue";
import VueSyntax1 from "@/components/VueSyntax1.vue";
import VueSyntax2 from "@/components/VueSyntax2.vue";
import VueSyntax3 from "@/components/VueSyntax3.vue";
import VueSyntax4 from "@/components/VueSyntax4.vue";
const routes = [
 {
  path: "/",
  component: HomeCmt,
 },
 {
  path: "/about",
  component: AboutCmt,
 },
 {
  path: "/exercise1",
  component: VueSyntax1,
 },
 {
      path: "/exercise2",
      component: VueSyntax2,
     },
     {
      path: "/exercise3",
      component: VueSyntax3,
     },
     {
      path: "/exercise4",
      component: VueSyntax4,
     },
    ];
    const router = createRouter({
     history: createWebHistory(),
     routes,
    });
    export default router;
    
    