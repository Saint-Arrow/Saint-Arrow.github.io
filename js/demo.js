
/* js的注释比C语言多一个*号，注释快捷键为alt+shift+A */

window.onload =function(){

// 获取所有的导航标签和内容段落
var tabs = document.querySelectorAll("div.left-column ul li a");
var contents = document.querySelectorAll('.right-column');

// 添加事件监听器
for (var i = 0; i < tabs.length; i++) {
  tabs[i].addEventListener('click', function(e) {
    //e:事件对象 this指向调用者的对象
    e.preventDefault(); // 阻止默认行为
    
    // 隐藏所有的内容段落
    for (var j = 0; j < tabs.length; j++) {
      tabs[j].classList.remove("highlight");
    }
    for (var j = 0; j < contents.length; j++) {
      contents[j].style.display = 'none';
    }

    // 显示当前导航标签对应的内容段落以及高亮标签
    this.classList.add("highlight");
    var targetId = this.getAttribute('id').replace('tab', '');
    var targetContent = document.getElementById(targetId);
    targetContent.style.display = 'block';
  });
};



};