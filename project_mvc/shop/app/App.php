<?php 
/* 
    url : http://localhost/shop/home/index/1/2
    root : http://localhost/shop/
    path : /home/index/1/2 : quy đinh là user muốn đi đâu
    home : đại diện cho tên của controller -> HomeController
    index: đại điện cho function nằm trong controller: home
    /1/2 : các param nếu có của function index
    function index($p1, $p2)
*/
class App {
    private $__controller, $__action, $__params, $__instanceController;
    function __construct()
    {
        $this->__controller = "home";
        $this->__action = "index";
        $this->__params = [];
        $this->handleUrl();
    }


    function getPath() {
        if(!empty($_SERVER["PATH_INFO"])) {
            return $_SERVER["PATH_INFO"];
        } 
        return null;
    }

    public function handleUrl() {
        $path = $this->getPath();
        if (!empty($path)) {
            $info = array_values(array_filter(explode("/", $path)));
            //1. handle controller
            if (!empty($info[0])) {
                $this->__controller = ucfirst($info[0])."Controller";
            } else {
                $this->__controller = ucfirst($this->__controller)."Controller";
            }
            // check exists file controller
            $filePath = "app/controllers/".$this->__controller.".php";
            if (file_exists($filePath)) {
                //echo "filePath exists ".$filePath;
                require_once $filePath;
                if (class_exists($this->__controller)) {
                    //echo $this->__controller; // HomeController
                    $this->__instanceController = new $this->__controller(); // tuong duong new HomeController();
                    // loai bo thong tin controller -> chi con action va cac params
                    unset($info[0]);
                    $info = array_values($info);
                }
            }
            //2. handle action
            if (!empty($info[0])) {
                $this->__action = $info[0];
                // loai bo thong tin action -> chi con cac params
                unset($info[0]);
                $info = array_values($info);
            }
            //3. hanlde params
            if (!empty($info)) {
                $this->__params = $info;
            }

            //4. thuc thi function trong controller (vd: thuc thi function index trong HomeController)
            //4.1 check xem function co ton tai trong class hay khong
            if (method_exists($this->__instanceController, $this->__action )) {
                call_user_func_array([$this->__instanceController, $this->__action], $this->__params);
            } else {
                
            }

        } else {
            $this->__controller = ucfirst($this->__controller)."Controller";
        }

    }

}









?>



