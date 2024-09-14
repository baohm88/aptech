<?php 
class HomeController extends BaseController{
    function __construct()
    {
        
    }
    public function index ($p1, $p2) {
        // require "app/views/home.php";
        $this->view("home");
    }

    public function user () {
        $this->view("users/user");
    }
}

?>