import SearchBar from './SearchBar' ;
import Product from './Product' ;
import datas from './datas' ;
const Productable = () => {
  return (
    <div>
      <SearchBar />
      <Product datas={datas} />
    </div>
  );
};
export default Productable;
