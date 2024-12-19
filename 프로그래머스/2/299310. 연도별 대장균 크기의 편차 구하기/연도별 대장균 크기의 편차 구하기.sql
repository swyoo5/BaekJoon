-- 코드를 작성해주세요
-- ID : 대장균 ID
-- PARENT_ID : 부모 개체 ID
-- SIZE_OF_COLONY : 개체의 크기
-- DIFFERENTIATION_DATE : 분화된 날짜
-- GENOTYPE : 개체의 형질

-- 문제 : 분화된 연도(YEAR), 
-- 분화된 연도별 대장균 크기의 편차(YEAR_DEV),
-- 연도별 가장 큰 대장균의 크기 - 각 대장균 크기
-- 대장균 개체의 ID(ID) 출력
-- 연도에 대해 오름차순 정렬, 같은 연도이면 대장균 편차에 오름차순으로 정렬

SELECT YEAR(DIFFERENTIATION_DATE) AS YEAR,
(
    SELECT MAX(SIZE_OF_COLONY)
    FROM ECOLI_DATA
    WHERE YEAR(DIFFERENTIATION_DATE) = YEAR
) - SIZE_OF_COLONY AS YEAR_DEV,
ID
FROM ECOLI_DATA
ORDER BY YEAR, YEAR_DEV