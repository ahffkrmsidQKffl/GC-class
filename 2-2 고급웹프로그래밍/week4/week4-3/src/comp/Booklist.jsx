import Book from './Book' ; 
import books  from './books' ; // Props 

const BookList = () => {
  return (
    <section className="booklist">
      {books.map((book) => {
    // {...books}는 전체 books data  
        return <Book key={book.id} {...book} /> 
      })}
    </section>
  )
}

export default BookList;
