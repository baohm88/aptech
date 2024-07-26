import Layout1 from "../layout/layout1";
import Contact from "./Contact";
import FormStudent from "./FormStudent";
import Home from "./Home";
import ListStudent from "./ListStudent";
import Login from "./Login";
import Logout from "./Logout";
import Student from "./Student";

const routes = [
  { path: "/", component: Home, layout: Layout1 },
  { path: "/contact", component: Contact, layout: Layout1 },
  { path: "/login", component: Login, layout: Layout1 },
  { path: "/logout", component: Logout, layout: Layout1 },
  { path: "/students", component: ListStudent, layout: Layout1 },
  { path: "/student/:id", component: Student, layout: Layout1 },
  { path: "/student/form/:id?", component: FormStudent, layout: Layout1 },
];

export { routes };
