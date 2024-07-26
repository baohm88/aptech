import { useContext } from "react";
import { Link } from "react-router-dom";
import { CurrentUserContext } from "../App";

function Home() {
  const { isLoggedin } = useContext(CurrentUserContext);

  return (
    <>
      <section className="center">
        <h1>Welcome to T2404E</h1>
        {!isLoggedin && (
          <p>
            <Link to="/login">Log In</Link> to view Students
          </p>
        )}
        <img
          className="responsive"
          src="https://scontent.fhan17-1.fna.fbcdn.net/v/t39.30808-6/439024841_823799846452423_3137090419408102927_n.jpg?_nc_cat=111&ccb=1-7&_nc_sid=127cfc&_nc_ohc=7EQWPjrdE2EQ7kNvgHhhrcE&_nc_ht=scontent.fhan17-1.fna&oh=00_AYC652waG_Is5eu5lLT1RwnjFUDskQKIUXAbQYGMXlJIDA&oe=66A7F5E7"
          alt="t2404e"
        />
      </section>
    </>
  );
}

export default Home;
