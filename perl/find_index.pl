#!/usr/bin/perl 
#===============================================================================
#
#         FILE:  find_index.pl
#
#        USAGE:  ./find_index.pl  
#
#  DESCRIPTION:  
#
#      OPTIONS:  ---
# REQUIREMENTS:  ---
#         BUGS:  ---
#        NOTES:  ---
#       AUTHOR:  jiye (taobao), jiye@taobao.com
#      COMPANY:  www.taobao.com
#      VERSION:  1.0
#      CREATED:  2011��06��16�� 09ʱ36��31��
#     REVISION:  ---
#===============================================================================

use strict;
use warnings;

my $key = (<STDIN>);
chomp ($key);
my $found = -1;
printf "%d\n", $found while ($found = index("this is a test", $key, $found+1)) != -1;
