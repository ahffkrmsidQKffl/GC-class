import { BrowserRouter as Router, Route, Routes, Link } from 'react-router-dom';

import index from './components/index';

import Intro from './components/Introduction/Intro';
import Resume from './components/Introduction/Resume';

import CollegeLife from './components/AcademicPerformance/CollegeLife';
import GradeList from './components/AcademicPerformance/GradeList';

import Domestic from './components/Certificate/Domestic';
import International from './components/Certificate/International';

import OnCampus from './components/TeamProject/OnCampus';
import ExtraCurricular from './components/TeamProject/ExtraCurricular';

import OnCampusI from './components/Internship/OnCampusI';
import ExtraCurricularI from './components/Internship/ExtraCurricularI';

import "./App.css";

const App = () => {
  return (
<Router>
      <div>
      <nav>
        <ul className='menubar'>
          <li className='menubarbar'><h3>자기 소개</h3>
          <ul className="sub">
              <li><Link to="/intro">자기 소개</Link></li>
              <li><Link to="/resume">이력서</Link></li>
            </ul>
          </li>
          <li className='menubarbar'><h3>학업 성취도</h3>
          <ul className="sub">
              <li><Link to="/collegelife">대학 생활</Link></li>
              <li><Link to="/grade">학점</Link></li>
            </ul>
          </li>
          <li className='menubarbar'><h3>자격증</h3>
          <ul className="sub">
              <li><Link to="/domestic">국내 자격증</Link></li>
              <li><Link to="/international">국제 자격증</Link></li>
            </ul>
          </li>
          <li className='menubarbar'><h3>팀 프로젝트</h3>
          <ul className="sub">
              <li><Link to="/oncampus">교내 활동</Link></li>
              <li><Link to="/extracurricular">대외 활동</Link></li>
            </ul>
          </li>
          <li className='menubarbar'><h3>인턴십 및 실무</h3>
          <ul className="sub">
              <li><Link to="/oncampusi">교내 활동</Link></li>
              <li><Link to="/extracurriculari">대외 활동</Link></li>
            </ul>
          </li>
        </ul>
      </nav>

    <main>
      <Routes>
        <Route path="/" Component={index} />
        <Route path="/intro" Component={Intro} />
        <Route path="/resume" Component={Resume} />
        <Route path="/collegelife" Component={CollegeLife} />
        <Route path="/grade" Component={GradeList} />
        <Route path="/domestic" Component={Domestic} />
        <Route path="/international" Component={International} />
        <Route path="/oncampus" Component={OnCampus} />
        <Route path="/extracurricular" Component={ExtraCurricular} />
        <Route path="/oncampusi" Component={OnCampusI} />
        <Route path="/extracurriculari" Component={ExtraCurricularI} />
      </Routes>
    </main>
    </div>
    <footer>
        <i>
          Copyright 2023. 강민형 all rights reserved. 연락처 : 010-4609-9706
        </i>
      </footer>
  </Router>
  );
};

export default App;





