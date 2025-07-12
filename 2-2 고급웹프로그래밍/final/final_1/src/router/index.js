import { createRouter, createWebHistory } from 'vue-router';
import IndexCmt from '../components/IndexCmt.vue';
import IntroCmt from '../components/Introduction/IntroCmt.vue';
import ResumeCmt from '../components/Introduction/ResumeCmt.vue';
import CollegeLifeCmt from '../components/AcademicPerformance/CollegeLifeCmt.vue';
import GradeListCmt from '../components/AcademicPerformance/GradeListCmt.vue';
import DomesticCmt from '../components/Certificate/DomesticCmt.vue';
import InternationalCmt from '../components/Certificate/InternationalCmt.vue';
import OnCampusCmt from '../components/TeamProject/OnCampusCmt.vue';
import ExtraCurricularCmt from '../components/TeamProject/ExtraCurricularCmt.vue';
import OnCampusICmt from '../components/Internship/OnCampusICmt.vue';
import ExtraCurricularICmt from '../components/Internship/ExtraCurricularICmt.vue';

const routes = [
  { path: '/', component: IndexCmt },
  { path: '/intro', component: IntroCmt },
  { path: '/resume', component: ResumeCmt },
  { path: '/collegelife', component: CollegeLifeCmt },
  { path: '/grade', component: GradeListCmt },
  { path: '/domestic', component: DomesticCmt },
  { path: '/international', component: InternationalCmt },
  { path: '/oncampus', component: OnCampusCmt },
  { path: '/extracurricular', component: ExtraCurricularCmt },
  { path: '/oncampusi', component: OnCampusICmt },
  { path: '/extracurriculari', component: ExtraCurricularICmt },
];

const router = createRouter({
  history: createWebHistory(),
  routes,
});

export default router;