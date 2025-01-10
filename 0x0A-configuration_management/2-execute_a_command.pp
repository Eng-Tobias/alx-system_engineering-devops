# This manifest kills a process named 'killmenow' using pkill

exec { 'killmenow':
  command => '/usr/bin/pkill killmenow',
  unless  => '/usr/bin/pgrep killmenow',
}
