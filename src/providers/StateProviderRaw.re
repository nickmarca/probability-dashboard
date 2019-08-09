type context = option((Reducer.state, Reducer.action => unit));
let c: context = None;
let stateContext = React.createContext(c);

let makeProps = (~value, ~children, ()) => {
  "value": value,
  "children": children,
};

let make = React.Context.provider(stateContext);
