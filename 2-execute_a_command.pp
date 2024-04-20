#Using Puppet, create a manifest that kills a process named killmenow.
exec { 'kill_killmenow_process':
  command     => '/usr/bin/pkill killmenow',
  refreshonly => true,
  onlyif      => '/usr/bin/pgrep killmenow',
}

