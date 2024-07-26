import { useContext, useEffect, useState } from "react";
// import * as studentService from "../service/student";
import * as studentService from "../service/student";
import { Link } from "react-router-dom";
import { CurrentUserContext } from "../App";
import StudentCard from "./StudentCard";

function ListStudent() {
  const { isAdmin, isLoggedin } = useContext(CurrentUserContext);
  const [students, setStudents] = useState([]);

  useEffect(() => {
    const getAll = async () => {
      const result = await studentService.getAllStudent();
      setStudents(result);
    };
    getAll();
  }, []);

  const deleteStd = async (id) => {
    const stds = await studentService.deleteStudent(id);
    setStudents(stds);
  };

  return (
    <>
      {!isLoggedin && (
        <section>
          <p className="center">
            You must <Link to={"/login"}>Log In</Link> first to view students'
            info.
          </p>
        </section>
      )}
      {isLoggedin && (
        <section>
          {isAdmin && isLoggedin && (
            <Link to={"/student/form"}>
              <button>Add new Student</button>
            </Link>
          )}
          <div className="center">
            <h2>T2404 Students</h2>
            <div className="flex-container">
              {students.map((student) => (
                <Link to={"/student/" + student.id} key={student.id}>
                  {" "}
                  <StudentCard student={student} />{" "}
                </Link>
              ))}
            </div>
          </div>
        </section>
      )}
    </>
  );
}

export default ListStudent;
