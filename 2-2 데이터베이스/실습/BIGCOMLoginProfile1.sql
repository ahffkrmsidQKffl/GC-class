--STAFFORD에 위치한 모든 프로젝트에 대해서, 프로젝트 번호, 담당 부서 번호, 부서 관리자의 성, 주소, 생년월일을 검색하시오
SELECT Pnumber, Dnumber, Lname, Address, Bdate 
FROM PROJECT, DEPARTMENT, EMPLOYEE
WHERE UPPER(Plocation)='STAFFORD' AND Dnumber = Dnum AND Ssn = Mgrssn;

--4번  부서가 담당하는 프로젝트를 수행하는 사원들의 이름을 검색하라(교수님이 이름이라 하시면 항상 Lname & Fname 둘다임)
SELECT Lname, Fname
FROM PROJECT, EMPLOYEE, WORKS_ON
WHERE Dnum=4 AND Pnumber=Pno AND Essn=Ssn;

--사원이 수행하는 프로젝트들을 검색하는데, 사원이 속한 부서 이름, Lname, Fname, 수행 Project 이름을  검색하라
SELECT Dname, Lname, Fname, Pname
FROM PROJECT, EMPLOYEE, WORKS_ON, DEPARTMENT
WHERE Dno = Dnumber AND Ssn = Essn AND Pno = Pnumber
ORDER BY Dname, Lname, Fname;

--WHERE 조건 절이 없는 경우
SELECT Ssn, Dname
FROM EMPLOYEE, DEPARTMENT;

--주소가 'HOUSTON, TX'인 모든 사원을 검색하라
SELECT Lname, Fname, Address
FROM EMPLOYEE
WHERE lower(Address) like '%houston, tx%';

--멘토가 없는 직원의 이름을 검색하라
SELECT Fname, Lname
FROM EMPLOYEE
WHERE Superssn is NULL;

 --직원의 이름과 수퍼바이저의 이름을 검색하라(셀프조인) my : 이거 왜 오류나 ㅡㅡ
SELECT E.Fname AS 'Employee_Fname', E.Lname AS 'Employee_Lname', S.Fname AS 'S_Fname', S.Lname AS 'S_Lname'
FROM EMPLOYEE E, EMPLOYEE S
WHERE S.Ssn=E.Superssn;

-- insert된 순서
SELECT * 
FROM EMPLOYEE;

-- order = ssn? primary key 어쩍우..
SELECT Ssn 
FROM EMPLOYEE;