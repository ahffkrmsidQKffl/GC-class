import React from 'react';
import './Grade.css';

const Grade = ({ semester, subjects }) => {
    return (
        <div className='GradeDiv'>
        <h3>{semester}학기</h3>
        <table>
          <thead>
            <tr>
              <th>과목</th>
              <th>학점</th>
              <th>평점</th>
            </tr>
          </thead>
          <tbody>
            {subjects.map((subject, index) => (
              <tr key={index}>
                <td>{subject.name}</td>
                <td>{subject.credit}</td>
                <td>{subject.grade}</td>
              </tr>
            ))}
          </tbody>
        </table>
      </div>
    );
};

export default Grade;