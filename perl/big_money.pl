#!/usr/bin/perl 
#===============================================================================
#
#         FILE:  big_money.pl
#
#        USAGE:  ./big_money.pl  
#
#  DESCRIPTION:  `
#
#      OPTIONS:  ---
# REQUIREMENTS:  ---
#         BUGS:  ---
#        NOTES:  ---
#       AUTHOR:  jiye (taobao), jiye@taobao.com
#      COMPANY:  www.taobao.com
#      VERSION:  1.0
#      CREATED:  2011��06��15�� 21ʱ14��24��
#     REVISION:  ---
#===============================================================================

#use strict;
#use warnings;

print &big_money(-123456789.234), "\n";
print &big_money(123456789.234), "\n";
sub big_money {
    my $number = sprintf "%.2f", shift @_;
    1 while $number =~ s/^(-?\d+)(\d{3})/$1,$2/;
    $number =~ s/^(-?)/$1\$/;
    $number;
}

