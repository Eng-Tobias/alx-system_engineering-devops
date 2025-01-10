# This Puppet manifest installs Flask version 2.1.0 using pip3

package { 'python3-pip':
  ensure => 'installed',
}

exec { 'install_flask':
  command => '/usr/bin/pip3 install Flask==2.1.0',
  unless  => '/usr/bin/pip3 show Flask | grep "Version: 2.1.0"',
  path    => ['/usr/bin', '/usr/local/bin'],
}
