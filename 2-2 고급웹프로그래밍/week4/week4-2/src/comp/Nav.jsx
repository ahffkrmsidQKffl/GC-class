function Nav(props) {
      const lis = [];    // 빈 배열
    
      // 배열 요소 반복(4)
      for (let i = 0; i < props.topics.length; i++) {
       let t = props.topics[i]; 
       lis.push(   
        <li key={t.id}> <a href={"/"}>{t.title}</a> </li>
       );
      }
      return ( 
       <nav>
        <ol>{lis}</ol>
        </nav>
       );
      }
    
    
    export default Nav;
    