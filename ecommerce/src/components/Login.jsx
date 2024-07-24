import React from "react";

export default function Login() {
  return (
    <>
      <div id="login-form">
        <h3 className="center">LOG IN AS:</h3>
        <form>
          <div className="flex-container">
            <p>
              <input type="radio" id="admin" name="category" value="admin" />
              <label htmlFor="admin">ADMIN</label>
            </p>
            <p>
              <input type="radio" id="client" name="category" value="client" />
              <label htmlFor="client">CLIENT</label>
            </p>
          </div>

          <p>
            <input type="text" className="full-width" placeholder="Username" />
          </p>
          <p>
            <input
              type="password"
              className="full-width"
              placeholder="Password"
            />
          </p>
          <p id="actions">
            <button>Login</button>
          </p>
        </form>
      </div>
    </>
  );
}
