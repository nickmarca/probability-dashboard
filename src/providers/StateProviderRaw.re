type context = (Reducer.state, Reducer.action => unit);
let c: context = ({value: 1}, _ => ());
let stateContext = React.createContext(c);

let makeProps = (~value, ~children, ()) => {
  "value": value,
  "children": children,
};

let make = React.Context.provider(stateContext);
