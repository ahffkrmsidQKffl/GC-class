const Book = (props) => {
      const {title, author, description } = props ;
      console.log(title, author, description) ; 
      return (
        <article className="book">
          <h1>{props.title}</h1>
          <span>{props.author}</span>
          <p>{props.description}</p>
        </article>
      )
    }
    export default Book ;
    