const Vegetables = ({ datas }) => {
  
      return (
        <div>
          <h1>채소 종류</h1>
          <ul>
            {datas.map((data) => { //요소 5개에 대해 각 요소에 대해서
              return <li key={data.id}>{data.name}</li>;
            })}
          </ul>
        </div>
      );
    };

    export default Vegetables;
  