import { Link } from "react-router-dom";

export default function Header() {
  return (
    <ul>
      <li>
        <Link to={"/"}>LOGO</Link>
      </li>
      <li>
        <Link to={"/about"}>About</Link>
      </li>
      <li>
        <Link to={"/projects"}>Projects</Link>
      </li>
      <li>
        <Link to={"/pricing"}>Pricing</Link>
      </li>
      <li>
        <Link to={"/contact"}>Contact</Link>
      </li>
    </ul>
  );
}
