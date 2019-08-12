[@react.component]
let make = () => {
  let (state, _) = Hooks.useStateValue();
  <div>
    <h1> "Stats"->React.string </h1>
    <p> {string_of_int(state.value)->React.string} </p>
  </div>;
};
