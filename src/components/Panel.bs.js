// Generated by BUCKLESCRIPT VERSION 5.0.6, PLEASE EDIT WITH CARE
'use strict';

var React = require("react");
var Hooks$ProbabilityDashboard = require("../hooks/Hooks.bs.js");

function Panel(Props) {
  var match = Hooks$ProbabilityDashboard.useStateValue(/* () */0);
  if (match !== undefined) {
    return React.createElement("div", undefined, "Current State Value: ", String(match[0][/* value */0]));
  } else {
    return React.createElement("div", undefined);
  }
}

var make = Panel;

exports.make = make;
/* react Not a pure module */
