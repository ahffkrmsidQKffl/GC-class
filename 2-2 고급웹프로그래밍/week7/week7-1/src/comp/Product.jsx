import CategoryRow from './CategoryRow' ;
import ProductRow from './ProductRow' ;
const Product = ({datas}) => {
  const rows = [];                      // 빈 배열
  let lastCategory = null;            // null 값 
  // 모둔 상퓸(datas)에 대해서…..
  datas.forEach((data) => {     
    if (data.category !== lastCategory) {  // category 가 다를 때
      rows.push(<CategoryRow category={data.category} />)
      }
    // product 보냄(상품명과 가격을 출력)
    rows.push(< ProductRow data ={data} />);
    lastCategory = data.category;
  });
  return (
    <table>
      <tr><th>Name</th> <th>Price</th></tr>
      {rows}
    </table>
  );
};
export default Product ;
