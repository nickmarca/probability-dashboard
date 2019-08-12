[@react.component]
let make = (~children) => {
  <StateProviderRaw
    value={React.useReducer(Reducer.rootReducer, Reducer.initialState)}>
    children
  </StateProviderRaw>;
};
