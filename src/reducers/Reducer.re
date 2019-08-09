type state = {value: int};
type action =
  | Add(int);

let initialState = {value: 1};

let rootReducer = (state, action) => {
  switch (action) {
  | Add(value) =>
    let newState = {value: state.value + value};
    newState;
  };
};
