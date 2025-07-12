function Article(props) {
     console.log(props);
   
    return (
     <article>
      <h2>{props.title}</h2>
      Hell. {props.body}
     </article>
    );
   }
   export default Article;
   