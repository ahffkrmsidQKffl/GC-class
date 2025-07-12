function Header(props){
      const {title, onChangeMode} = props
      return (
      <header>
        <h1>
          <a href="/" 
          onClick={(event)=>{
          event.preventDefault();  // 기본 기능 방지
          onChangeMode(); } }
          > 
          {title}
        </a>
         </h1>
      </header>
      ) ;
    }
    export default Header ;
    