/* 搜索框 */
function bc(){                //搜索框取得焦点时触发的事件
    document.getElementById("serch").style.width='180px';
}
function lk(){               //搜索框失去焦点时触发的事件
    document.getElementById("serch").style.width='0px';
}


/* 轮播图 */
window.onload = function () {
    var uls = document.getElementById("slider-ul");
    //获取元素
    var lis = uls.getElementsByTagName("li");

    /*console.log(lis);  */
    var allA = document.getElementsByClassName("navA");
    var index = 0;
    /* console.log(allA[index]); */
    for (var i = 0; i < allA.length; i++) {
        allA[i].num = i;
        allA[i].οnclick = function () {       //点击切换
            clearInterval(timer);
            index = this.num;
            function move(obj, attr, target, speed, callback) {
            }
            move(imgList, "left", -1901 * index, 50, function () {
                Change();
            });
        };
    }
    

    var timer;
    function Change() {
        

        timer = setInterval(function () {
            index++;
            index %= lis.length;
            move(lis, "left", -1901 * index, 20, function () { });
        }, 2000)
    }
    Change()


    
//点击切换
    function show1() {
        document.getElementById('homepage-1').style.display = "block";
    }
    function hidden1() {
        document.getElementById("homepage-1").style.display = "none";
    }

    function show2() {
        document.getElementById('homepage-2').style.display = "block";
    }
    function hidden2() {
        document.getElementById("homepage-2").style.display = "none";
    }
    
    
    function show3() {
        document.getElementById('homepage-3').style.display = "block";
    }
    function hidden3() {
        document.getElementById("homepage-3").style.display = "none";
    }
    
    
    
    function show4() {
        document.getElementById('homepage-4').style.display = "block";
    }
    function hidden4() {
        document.getElementById("homepage-4").style.display = "none";
    }
    
    
    
    function show5() {
        document.getElementById('homepage-5').style.display = "block";
    }
    function hidden5() {
        document.getElementById("homepage-5").style.display = "none";
    }
    
    
    function show6() {
        document.getElementById('homepage-6').style.display = "block";
    }
    function hidden6() {
        document.getElementById("homepage-6").style.display = "none";
    }
    
    
    function show7() {
        document.getElementById('homepage-7').style.display = "block";
    }
    function hidden7() {
        document.getElementById("homepage-7").style.display = "none";
    }

    


    /* 点击下拉 */
    function hd() {
        document.getElementById("hidden-div").style.display = "none";
        document.getElementById("show-div").style.display = "block";
    }





}
