[@react.component]
let make = (~children) => {
  <StateProviderRaw
    value={Some(React.useReducer(Reducer.rootReducer, Reducer.initialState))}>
    children
  </StateProviderRaw>;
};
