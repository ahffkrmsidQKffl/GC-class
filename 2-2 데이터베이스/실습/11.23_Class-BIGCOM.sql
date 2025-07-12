-- 해당 직원이 속한 부서의 평균 월급보다 월급을 많이 받는 직원의 이름, 부서번호, 봉급을 검색하라

-- dnumber, dname, 평균 급여를 검색하라

INSERT INTO EMPLOYEE(Fname, Lname, Dno, SSN)
VALUES('Yechan', 'Kim', 4, '653298653');

DELETE FROM EMPLOYEE
WHERE UPPER(Lname) = 'SMITH';

UPDATE PROJECT
SET Plocation = 'Bellaire', Dnum = 5
WHERE Pnumber = 10;

-- RESEARCH DEPARTMENT 사원의 급여를 10% 인상하라, TIP: uncorelated, inner query, In operator
-- return 하는 게 스칼라인지 싱글 애트리뷰트인지 계산하기 싫으면 그냥 IN 써도돼요!
UPDATE EMPLOYEE
SET SALARY = SALARY * 1.1
WHERE Dno IN (SELECT Dnumber
    FROM DEPARTMENT
    WHERE UPPER(Dname) = 'RESEARCH'
);

-- RESEARCH DEPARTMENT 사원의 급여를 10% 인상하라, TIP: uncorelated, inner query, equal operator
UPDATE EMPLOYEE
SET SALARY = SALARY * 1.1
WHERE Dno = (SELECT Dnumber
    FROM DEPARTMENT
    WHERE UPPER(Dname) = 'RESEARCH'
);