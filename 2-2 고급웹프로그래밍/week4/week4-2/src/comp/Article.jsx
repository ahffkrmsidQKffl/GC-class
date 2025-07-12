function Article(props) {
     console.log(props);
   
    return (
     <article>
      <h2>{props.title}</h2>
      Hello. {props.body}
     </article>
    );
   }
   export default Article;
   