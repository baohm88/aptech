import "./App.css";
import Header from "./components/Header.jsx";
import Footer from "./components/Footer.jsx";
import { Route, Routes } from "react-router-dom";
import Hero from "./components/Hero.jsx";
import About from "./components/About.jsx";
import Projects from "./components/Projects.jsx";
import Pricing from "./components/Pricing.jsx";
import Contact from "./components/Contact.jsx";

function App() {
  return (
    <>
      <Header />

      <Routes>
        <Route path={"/"} element={<Hero />} />
        <Route path={"/about"} element={<About />} />
        <Route path={"/projects"} element={<Projects />} />
        <Route path={"/pricing"} element={<Pricing />} />
        <Route path={"/contact"} element={<Contact />} />
      </Routes>
      <Footer />
    </>
  );
}

export default App;
