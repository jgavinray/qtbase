const char * templateFullscreen = R"STRING_DELIMITER( 

<!DOCTYPE html>

<!-- "fullscreen" template for Qt on NaCl -->

<html>

<head>
    <meta http-equiv="Pragma" content="no-cache">
    <meta http-equiv="Expires" content="-1">
    <title>%APPNAME%</title>
</head>

<style>
    body { margin:0; overflow:hidden;}
    embed { height:100vh; width:100vw; }
</style>

<script>
%LOADERSCRIPT%
</script>

<body>
</body>

</html>

)STRING_DELIMITER";
