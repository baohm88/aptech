import { NavLink } from "react-router-dom";
import { CurrentUserContext } from "../App";

import Footer from "../component/Footer";
import { useContext } from "react";

function Layout1({ children }) {
  const { isLoggedin } = useContext(CurrentUserContext);

  return (
    <>
      <header>
        <span id="logo">
          <NavLink to={"/"}>
            <img
              src="https://aptech.fpt.edu.vn/wp-content/uploads/2023/03/Logo-fpt-aptech.png"
              alt="T2404E Class"
            />
          </NavLink>
        </span>
        <span id="nav">
          <ul>
            <li>
              <NavLink to={"/"}>Home</NavLink>
            </li>
            <li>
              <NavLink to={"/students"}>Students</NavLink>
            </li>
            <li>
              <NavLink to={"/contact"}>Contact</NavLink>
            </li>
            {!isLoggedin && (
              <li>
                <NavLink to={"/login"}>
                  <span className="my-btn">Login</span>
                </NavLink>
              </li>
            )}
            {isLoggedin && (
              <li>
                <NavLink to={"/logout"}>
                  <span className="my-btn">Logout</span>
                </NavLink>
              </li>
            )}
          </ul>
        </span>
      </header>

      {children}

      <Footer />
    </>
  );
}

export default Layout1;
