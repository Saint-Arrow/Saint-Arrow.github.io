/**  
*auto create by /home/cwj/tool.py,according to doxygen 
*/ 
function alert_commit()
{
  alert("提交完成 ")
}


function clear()
{
  document.write("clear finish")
}


function print_date()
{
  var time=new Date();
  var today=time.getFullYear() + "年" +(time.getMonth()+1) +"月"+time.getDate()+"日"
  alert(today);
}
function print_s()
{
  var time=new Date();
  var today=time.getHours() + "h:" +(time.getMinutes()+1) +"m:"+time.getSeconds()+"s"
  var node=document.getElementById("time_p");
  node.innerHTML="time:"+today
}
function timeout_print_date()
{
  setTimeout(print_date,1000)
}

setInterval(print_s, 1000);


var node_cnt=0;
function add_node()
{
  var father=document.getElementById("div1");
  var para=document.createElement("p");
  // 创建文本对象
  var node = document.createTextNode("这是一个新的段落。node_cnt:"+node_cnt);
  // 将文本对象加入p标签对象
  para.appendChild(node);
  
  father.appendChild(para);
  node_cnt++;
}

function delete_node()
{
  var father=document.getElementById("div1");
  var cnt=father.childElementCount;
  father.removeChild(father.childNodes[cnt-1]);
}

var x=5 
var y=3
var z="5"
function math_print()
{
  document.write("x=" + (x) +"</br>");
  document.write("y=" + (y) +"</br>");
  document.write("z=" + (z) +"</br>");

  document.write("</br>");
  document.write("x+y=" + (x+y) +"</br>");
  document.write("x-y=" + (x-y) +"</br>");
  document.write("x*y=" + (x*y) +"</br>");
  document.write("x/y=" + (x/y) +"</br>");

  document.write("</br>");
  document.write("x==z =" + (x==z) +"</br>");
  document.write("x===z =" + (x===z) +"</br>");
  document.write("x!=z =" + (x!=z) +"</br>");
  document.write("x!==z =" + (x!==z) +"</br>");
}