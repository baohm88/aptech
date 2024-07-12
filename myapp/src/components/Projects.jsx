export default function Projects() {
  const projects = [
    {
      id: 0,
      name: "CS50X - Introduction To Computer Science",
      ytLink: "https://youtu.be/CVp_b8-4hPU",
      ghLink: "https://github.com/baohm88/CS50X-Final-Project",
    },
    {
      id: 1,
      name: "CS50P - Programming with Python",
      ytLink: "https://youtu.be/5krUrXelcvo",
      ghLink: "https://github.com/baohm88/CS50-Python-Final-Project",
    },
    {
      id: 2,
      name: "CS50SQL - Introduction to Database with SQL",
      ytLink: "https://youtu.be/Hacqh8vgcqQ",
      ghLink: "https://github.com/baohm88/CS50-SQL-Final-Project",
    },
    {
      id: 3,
      name: "CS50W - Web Programming with Python and JavaScript",
      ytLink: "https://youtu.be/ifq3oF9ktKA",
      ghLink: "https://github.com/baohm88/todos",
    },
  ];

  const rows = projects.map((project) => (
    <tr key={project.id}>
      <td className="center">{project.id + 1}</td>
      <td>{project.name}</td>
      <td className="center">
        <a href={project.ytLink} target="__blank">
          <button>View video</button>
        </a>
      </td>
      <td className="center">
        <a href={project.ghLink} target="__blank">
          <button>View Source Code</button>
        </a>
      </td>
    </tr>
  ));

  return (
    <section>
      <h1>My Past Projects</h1>
      <table>
        <thead>
          <tr>
            <th>No</th>
            <th>Name</th>
            <th>Youtube Link</th>
            <th>Github Link</th>
          </tr>
        </thead>
        <tbody>{rows}</tbody>
      </table>
    </section>
  );
}
