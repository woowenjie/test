#!/usr/bin/perl 
#===============================================================================
#
#         FILE:  number_sort.pl
#
#        USAGE:  ./number_sort.pl  
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
#      CREATED:  2011��06��15�� 21ʱ48��55��
#     REVISION:  ---
#===============================================================================

use strict;
use warnings;

while (<STDIN>) {
    my @array = sort {$a <=> $b } split(" ", $_);
    printf "sort by number:\n".("%010.2f\n" x @array), @array;
}

