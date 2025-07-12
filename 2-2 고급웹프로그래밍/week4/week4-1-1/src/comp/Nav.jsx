function Nav(props) {
      const {datas, onChangeMode} = props
      const lis = [];
      for (let i = 0; i < datas.length; i++) {
        let t = datas[i];
        lis.push(     // Element 배열에 저장 
          <li key={t.id}>
          <a href="/" id={t.body} 
            onClick={(event) => {
              event.preventDefault();
              onChangeMode(event.target.id);
            }} >
            {t.title}
          </a>
          </li>
        );  // 반복 종료
      }
      return (
        <nav>
          <ol>{lis}</ol>
        </nav>
      );
    }
      
    export default Nav ;
    