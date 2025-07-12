--john smith가 수행하는 프로젝트 NO를 검색하라
SELECT Pno
FROM EMPLOYEE, WORKS_ON
WHERE UPPER(Fname) = 'JOHN' AND UPPER(Lname) = 'SMITH' AND   Essn = Ssn;

--john smith가 수행하는 프로젝트를 수행하는 직원의 fname, Lname을 검색하라(uncorrelated)
SELECT Fname, Lname
FROM EMPLOYEE, WORKS_ON
WHERE Essn = Ssn AND Pno in (
SELECT Pno
FROM EMPLOYEE, WORKS_ON
WHERE UPPER(Fname) = 'JOHN' AND UPPER(Lname) = 'SMITH' AND   Essn = Ssn
);

--john smith가 수행하는 프로젝트를 모두 수행하는 직원의 fname, lname을 검색하라
SELECT Fname, Lname
FROM EMPLOYEE E
WHERE NOT EXISTS (
(SELECT Pno
FROM EMPLOYEE, WORKS_ON
WHERE UPPER(Fname) = 'JOHN' AND UPPER(Lname) = 'SMITH' AND   Essn = Ssn) --JOHN SMITH가 수행하는 프로젝트
MINUS
(SELECT PNO
FROM WORKS_ON
WHERE E.SSN = ESSN) --EACH EMPLOYEE가 수행하는 프로젝트
);

--6번 부서가 담다하는 프로젝트를 수행하는 사원의 사원이름을 검색하라
SELECT Lname, Fname
FROM EMPLOYEE, WORKS_ON
WHERE UPPER(Fname) = 'JOHN' AND UPPER(Lname) = 'SMITH' AND   Essn = Ssn;

--6번 부서가 ㄷ마당하는 프로젝트를 모두 수ㅐㅎㅇ하는 사ㅜ=ㅇ=


--6번 부서ㅏ ㅅ행하ㅡㄴ ////                                                                                                                                                                                                               