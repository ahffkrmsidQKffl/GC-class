flowchart TB
    UserBrowser["사용자 브라우저"] --> Frontend["프론트엔드 (React)"]
    Frontend -->|REST API 호출| Backend["백엔드 (Spring Boot)"]

    Backend -->|Controller| ControllerLayer["Controller"]
    ControllerLayer --> AuthController["AuthController"]
    ControllerLayer --> SearchController["SearchController"]
    ControllerLayer --> BookmarkController["BookmarkController"]

    Backend -->|Service Layer| ServiceLayer["Service Layer"]
    ServiceLayer -->|AI 서버 호출| AIServer["AI 서버 (Python)"]
    AIServer --> Crawler["Crawler → 뉴스 데이터 수집"]
    AIServer --> AIModel["AI 모델 → 문체 변환/요약"]
    AIServer --> RESTAPI["REST API → 백엔드에 데이터 반환"]

    ServiceLayer --> Repository["Repository (JPA)"]
    Repository --> Database["데이터베이스 (MySQL)"]

    Backend --> GoogleCloud["Google Cloud\n(백엔드 및 AI 서버 배포)"]
    Frontend --> Firebase["Firebase\n(프론트엔드 배포)"]

    Backend --> Docker["Docker (컨테이너화)"]
    AIServer --> Docker
