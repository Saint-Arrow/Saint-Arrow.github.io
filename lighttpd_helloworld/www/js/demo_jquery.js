$(document).ready(function(){




$("#b1").click(function(){
  console.log("b1 click");
  $("p").hide();
});
$("#b2").click(function(){
  console.log("b2 click");
  $("#p3").hide();
});
$("button").click(function(){
  console.log("button click");
});

$("#formsubmit").click(function(){
  console.log("formsubmit click");
  $.get("cgi-bin/get_r.cgi",function(data,status){
    alert("Data: " + data + "\nStatus: " + status);
  });
});



});
