[@react.component]
let make = () => {
  switch (Hooks.useStateValue()) {
  | None => <div />
  | Some((state, dispatch)) =>
    <div>
      "Current State Value: "->React.string
      {React.string(string_of_int(state.value))}
    </div>
  };
};
