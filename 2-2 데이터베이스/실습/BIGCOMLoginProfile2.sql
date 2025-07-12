-- 모든 사원의 급여의 합, 최고급여, ㅚ저급여, 평균급여를 구하라
-- research 부서에서 근무하는 사원의 급여의 합, 최고급여, 최저급여, 평균급여를 구하라
-- research 부서에서 근무하는 총 사원의 수를 구하라
-- 각 부서에 대해서 부서번호, 각 부서에 속한 사원들의 수와 평균급여를 검색하라

SELECT SUM(SALARY), MAX(SALARY), MIN(SALARY), ROUND(AVG(SALARY))
FROM EMPLOYEE;

SELECT SUM(SALARY), MAX(SALARY), MIN(SALARY), ROUND(AVG(SALARY))
FROM EMPLOYEE, DEPARTMENT
WHERE DNO = Dnumber and UPPER(Dname) = 'RESEARCH';

SELECT COUNT(*)
FROM EMPLOYEE, DEPARTMENT
WHERE DNO = Dnumber and UPPER(Dname) = 'RESEARCH';

SELECT DNO, COUNT(*), ROUND(AVG(SALARY))
FROM EMPLOYEE
GROUP BY DNO;

-- 각 부서에 대해서 부서번호, 부서이름, 각 부서에 속한 사원들의 수와 평균급여를 검색하라
SELECT DNO, Dname, COUNT(*), ROUND(AVG(SALARY))
FROM EMPLOYEE, DEPARTMENT
WHERE DNO = Dnumber
GROUP BY DNO Dname;

--각 프로젝트에 대해서 프로젝트 번호, 이름 그 프로젝트에서 근무하는 사원의 수를 검색하라
SELECT Pnumber, Pname, COUNT(*)
FROM PROJECT, WORKS_ON
WHERE Pnumber = Pno
GROUP BY Pnumber, Pname;

--세명 이상의 사원이 근무하는 각 프로젝트에 대해서 프로젝트 번호, 이름, 그 프로젝트에서 근무하는 사원의 수를 검색하라
SELECT Pnumber, Pname, COUNT(*)
FROM PROJECT, WORKS_ON
WHERE DNO = Dnumber
GROUP BY DNO Dname;