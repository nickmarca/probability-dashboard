[@react.component]
let make = () => {
  let (state, dispatch) = Hooks.useStateValue();
  let increaseValue = _ => dispatch(Add(1));

  <div>
    <button onClick=increaseValue> "Add more 1"->React.string </button>
  </div>;
};
