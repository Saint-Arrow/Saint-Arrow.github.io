function get_key_value(cookie,c_name)
      {
        if (cookie.length>0)
        {
          c_start=cookie.indexOf(c_name + "=")
          if (c_start!=-1)
          { 
            c_start=c_start + c_name.length+1 
            c_end=cookie.indexOf(";",c_start)
          if (c_end==-1) c_end=cookie.length
          return unescape(cookie.substring(c_start,c_end))
          } 
        }
      return ""
      }

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
    $("#keya").val(get_key_value(data,'keya'));
    $("#keyb").val(get_key_value(data,'keyb'));
  });
});

$("#formsubmit_SAVE").click(function(){
  console.log("add 1 and save");
  var inputValuea = $("#keya").val();
  var inputValueb = $("#keyb").val();
  if(inputValuea == " ")
  {
    alert("GET first!");
    return ;
  }
  if(inputValueb == " ")
  {
    alert("GET first!");
    return ;
  }
  inputValuea= Number(inputValuea) + 1;
  inputValueb= Number(inputValueb) + 1;
  $.get("cgi-bin/get_w.cgi",{"keya": inputValuea, "keyb": inputValueb},function(data,status){
    alert("Data: " + data + "\nStatus: " + status);
  });

});


});
