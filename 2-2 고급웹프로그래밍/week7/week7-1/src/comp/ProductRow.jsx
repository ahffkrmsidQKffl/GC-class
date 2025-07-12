const ProductRow = ({ data }) => {
       const name = data.stocked ? ( // 재고가 있으면 ..
        data.name                          // 상품명 출력
       ) : (                                     // 재고가 없으면
        <span style={{ color: "red" }}>{data.name}</span>
       );
       return (
        <tr>
         <td>{name}</td>
         <td>{data.price}</td>
        </tr>
       );
      };
      
      export default ProductRow;
    