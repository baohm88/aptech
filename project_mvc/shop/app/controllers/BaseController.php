<?php 
class BaseController {
    const VIEW_PATH = "app/views/";
    public function view($pathView) {
        $path = self::VIEW_PATH.$pathView.".php";
        return require_once $path;
    }
}



?>