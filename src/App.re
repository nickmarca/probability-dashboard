let handleClick = _event => Js.log("clicked!");

[@react.component]
let make = (~message) =>
  <div onClick=handleClick> "Hello world"->React.string </div>;
