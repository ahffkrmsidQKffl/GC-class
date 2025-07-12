-- RESEARCH 부서에서 일하는 사원의 FNAME, LNAME, SSN, DNAME을 검색하라,  UPPER 쓰고 뒤에거 전부 대문자로 쓰면 대소문자 신경 안 써도 됩니다. 원래는 작은따옴표 안에 대소문자 신경쓰여야해요
SELECT Fname, Lname, SSN, Dname 
FROM EMPLOYEE, DEPARTMENT
WHERE DNO=DNUMBER AND UPPER(Dname)='RESEARCH';