<?php
$aliases['cabb'] = array (
    'uri' => 'vps.jmgpena.net',
    'root' => '/home/jmgpena/cabb.pt',
    'remote-host' => 'vps.jmgpena.net',
    'remote-user' => 'jmgpena',
    'path-aliases' => array (
        '%files' => 'sites/default/files',
        ),
    );
$options['shell-aliases']['push-files'] = '!drush rsync @self:%files @cabb:%files';
$options['shell-aliases']['pull-files'] = '!drush rsync @cabb:%files @self:%files';
?>