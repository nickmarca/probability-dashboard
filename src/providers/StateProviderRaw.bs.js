// Generated by BUCKLESCRIPT VERSION 5.0.6, PLEASE EDIT WITH CARE
'use strict';

var React = require("react");

var c_000 = /* record */[/* value */1];

function c_001(param) {
  return /* () */0;
}

var c = /* tuple */[
  c_000,
  c_001
];

var stateContext = React.createContext(c);

function makeProps(value, children, param) {
  return {
          value: value,
          children: children
        };
}

var make = stateContext.Provider;

exports.c = c;
exports.stateContext = stateContext;
exports.makeProps = makeProps;
exports.make = make;
/* stateContext Not a pure module */
