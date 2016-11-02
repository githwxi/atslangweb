######
#
# Time of Generation:
# Fri Oct  7 14:35:54 EDT 2016
#
######

######
#
# HX-2014-11:
# for Perl code translated from ATS
#
######

######
#beg of [basics_cats.pl]
######

############################################

sub
ATSCKiseqz($) { return ($_[0] == 0); }
sub
ATSCKisneqz($) { return ($_[0] != 0); }

############################################

sub
ATSCKptrisnull($) { return ($_[0] == 0); }
sub
ATSCKptriscons($) { return ($_[0] != 0); }

############################################

sub
ATSCKpat_int($$) { return ($_[0] == $_[1]); }
sub
ATSCKpat_bool($$) { return ($_[0] == $_[1]); }
sub
ATSCKpat_char($$) { return ($_[0] == $_[1]); }
sub
ATSCKpat_float($$) { return ($_[0] == $_[1]); }

############################################
#
sub
ATSCKpat_con0($$)
  { return ($_[0] == $_[1]); }
sub
ATSCKpat_con1($$)
  { my $con = $_[0]; return ($con->[0] == $_[1]); }
#
############################################
#
sub
ATSINScaseof_fail($)
{
STDERR->printflush("ATSINScaseof_fail:$_[0]"); exit(1); return;
}
#
sub
ATSINSdeadcode_fail()
  { STDERR->printflush("ATSINSdeadcode_fail"); exit(1); return; }
#
############################################
#
sub
ATSPMVempty(){ return; }
#
############################################

sub
ATSPMVlazyval($){ return [0, $_[0]]; }

############################################

sub
ATSPMVlazyval_eval($)
{
#
  my($lazyval) = @_;
  my($flag);
  my($mythunk);
#
  $flag = $lazyval->[0];
#
  if($flag==0)
  {
    $lazyval->[0] = 1;
    $mythunk = $lazyval->[1];
    $lazyval->[1] = &{$mythunk->[0]}($mythunk);
  } else {
    $lazyval->[0] = $flag + 1;
  } #end-of-[if]
  return ($lazyval->[1]);
#
} #end-of-[ATSPMVlazyval_eval]

############################################

sub
ATSPMVllazyval($){ return $_[0]; }

############################################
#
sub
ATSPMVllazyval_eval($)
{
  my($lazyval) = @_;
  return &{$lazyval->[0]}($lazyval, 1);
}
#
sub
atspre_lazy_vt_free($)
{
  my($lazyval) = @_;
  return &{$lazyval->[0]}($lazyval, 0);
}
#
############################################

sub
ats2plpre_lazy2cloref($) { return $_[0]->[1]; }

############################################
#
sub
ats2plpre_assert_bool0($)
{
  my($tfv) = @_;
  if (!$tfv) { exit(1); }
  return;
}
sub
ats2plpre_assert_bool1($$)
{
  ats2plpre_assert_bool0($_[0]); return;
}
#
sub
ats2plpre_assert_errmsg_bool0($$)
{
  my($tfv, $errmsg) = @_;
  if (!$tfv) { STDERR->printflush($errmsg); exit(1); }
  return;
}
sub
ats2plpre_assert_errmsg_bool1($$)
{
  ats2plpre_assert_errmsg_bool0($_[0], $_[1]); return;
}
#
############################################

######
1; #note that it is needed by 'use' or 'require'
######

######
#end of [basics_cats.js]
######
######
#
# HX-2014-11:
# for Perl code translated from ATS
#
######

######
#beg of [integer_cats.pl]
######

############################################

sub
ats2plpre_abs_int0($) { return abs($_[0]); }
sub
ats2plpre_neg_int0($) { return ( -($_[0]) ); }

############################################

sub
ats2plpre_succ_int0($) { return ($_[0] + 1); }
sub
ats2plpre_pred_int0($) { return ($_[0] - 1); }

############################################

sub
ats2plpre_add_int0_int0($$) { return ($_[0] + $_[1]); }
sub
ats2plpre_sub_int0_int0($$) { return ($_[0] - $_[1]); }
sub
ats2plpre_mul_int0_int0($$) { return ($_[0] * $_[1]); }
sub
ats2plpre_div_int0_int0($$) { return int($_[0] / $_[1]); }
sub
ats2plpre_mod_int0_int0($$) { return ($_[0] % $_[1]); }

############################################
#
sub
ats2plpre_add_int1_int1($$) { return ($_[0] + $_[1]); }
sub
ats2plpre_sub_int1_int1($$) { return ($_[0] - $_[1]); }
sub
ats2plpre_mul_int1_int1($$) { return ($_[0] * $_[1]); }
sub
ats2plpre_div_int1_int1($$) { return int($_[0] / $_[1]); }
#
sub
ats2plpre_mod_int1_int1($$) { return ($_[0] % $_[1]); }
sub
ats2plpre_nmod_int1_int1($$) { return ($_[0] % $_[1]); }
#
############################################

sub
ats2plpre_lt_int0_int0($$) { return ($_[0] < $_[1]); }
sub
ats2plpre_lte_int0_int0($$) { return ($_[0] <= $_[1]); }
sub
ats2plpre_gt_int0_int0($$) { return ($_[0] > $_[1]); }
sub
ats2plpre_gte_int0_int0($$) { return ($_[0] >= $_[1]); }
sub
ats2plpre_eq_int0_int0($$) { return ($_[0] == $_[1]); }
sub
ats2plpre_neq_int0_int0($$) { return ($_[0] != $_[1]); }

############################################

sub
ats2plpre_lt_int1_int1($$) { return ($_[0] < $_[1]); }
sub
ats2plpre_lte_int1_int1($$) { return ($_[0] <= $_[1]); }
sub
ats2plpre_gt_int1_int1($$) { return ($_[0] > $_[1]); }
sub
ats2plpre_gte_int1_int1($$) { return ($_[0] >= $_[1]); }
sub
ats2plpre_eq_int1_int1($$) { return ($_[0] == $_[1]); }
sub
ats2plpre_neq_int1_int1($$) { return ($_[0] != $_[1]); }

############################################

######
1; #note that it is needed by 'use' or 'require'
######

######
#end of [integer_cats.pl]
######

######
#
# HX-2014-11:
# for Perl code translated from ATS
#
######

######
#beg of [bool_cats.pl]
######

############################################

######
1; #note that it is needed by 'use' or 'require'
######

######
#end of [bool_cats.pl]
######

######
#
# HX-2014-11:
# for Perl code translated from ATS
#
######

######
#beg of [float_cats.pl]
######

############################################
#
sub
ats2plpre_double2int($) { return int($_[0]); }
sub
ats2plpre_int_of_double($) { return int($_[0]); }
#
sub
ats2plpre_int2double($) { return ($_[0]) ; }
sub
ats2plpre_double_of_int($) { return ($_[0]) ; }
#
############################################
#
sub
ats2plpre_abs_double($) { return abs($_[0]); }
sub
ats2plpre_neg_double($) { return ( -$_[0] ); }
#
sub
ats2plpre_succ_double($) { return ($_[0] + 1); }
sub
ats2plpre_pred_double($) { return ($_[0] + 1); }
#
############################################
#
sub
ats2plpre_add_double_double($$) { return ($_[0] + $_[1]); }
sub
ats2plpre_sub_double_double($$) { return ($_[0] - $_[1]); }
sub
ats2plpre_mul_double_double($$) { return ($_[0] * $_[1]); }
sub
ats2plpre_div_double_double($$) { return ($_[0] / $_[1]); }
#
############################################
#
sub
ats2plpre_lt_double_double($$) { return ($_[0] < $_[1]); }
sub
ats2plpre_lte_double_double($$) { return ($_[0] <= $_[1]); }
sub
ats2plpre_gt_double_double($$) { return ($_[0] > $_[1]); }
sub
ats2plpre_gte_double_double($$) { return ($_[0] >= $_[1]); }
#
sub
ats2plpre_eq_double_double($$) { return ($_[0] == $_[1]); }
sub
ats2plpre_neq_double_double($$) { return ($_[0] != $_[1]); }
#
############################################

######
1; #note that it is needed by 'use' or 'require'
######

######
#end of [float_cats.pl]
######
######
#
# HX-2014-11:
# for Perl code translated from ATS
#
######

######
#beg of [string_cats.pl]
######

############################################

sub
ats2plpre_lt_string_string($$) { return ($_[0] < $_[1]); }
sub
ats2plpre_lte_string_string($$) { return ($_[0] <= $_[1]); }
sub
ats2plpre_gt_string_string($$) { return ($_[0] > $_[1]); }
sub
ats2plpre_gte_string_string($$) { return ($_[0] >= $_[1]); }
sub
ats2plpre_eq_string_string($$) { return ($_[0] == $_[1]); }
sub
ats2plpre_neq_string_string($$) { return ($_[0] != $_[1]); }

############################################

######
1; #note that it is needed by 'use' or 'require'
######

###### end of [string_cats.pl] ######
######
#
# HX-2014-11:
# for Perl code translated from ATS
#
######

######
#beg of [print_cats.pl]
######

############################################
#
sub
ats2plpre_print_int($)
{
  ats2plpre_fprint_int(STDOUT, $_[0]); return;
}
sub
ats2plpre_prerr_int($)
{
  ats2plpre_fprint_int(STDERR, $_[0]); return;
}
#
sub
ats2plpre_fprint_int($$) { print {$_[0]} $_[1]; return; }
#
############################################
#
sub
ats2plpre_print_bool($)
{
  ats2plpre_fprint_bool(STDOUT, $_[0]); return;
}
sub
ats2plpre_prerr_bool($)
{
  ats2plpre_fprint_bool(STDERR, $_[0]); return;
}
#
sub
ats2plpre_fprint_bool($$)
{
  if($_[1]) { print {$_[0]} "true"; } else { print {$_[0]} "false"; }; return;
}
#
############################################
#
sub
ats2plpre_print_double($)
{
  ats2plpre_fprint_double(STDOUT, $_[0]); return;
}
sub
ats2plpre_prerr_double($)
{
  ats2plpre_fprint_double(STDERR, $_[0]); return;
}
#
sub
ats2plpre_fprint_double($$) { print {$_[0]} $_[1]; return; }
#
############################################
#
sub
ats2plpre_print_string($)
{
  ats2plpre_fprint_string(STDOUT, $_[0]); return;
}
sub
ats2plpre_prerr_string($)
{
  ats2plpre_fprint_string(STDERR, $_[0]); return;
}
#
sub
ats2plpre_fprint_string($$) { print {$_[0]} "$_[1]"; return; }
#
############################################
#
sub
ats2plpre_print_obj($)
{
  ats2plpre_fprint_obj(STDOUT, $_[0]); return;
}
sub
ats2plpre_prerr_obj($)
{
  ats2plpre_fprint_obj(STDERR, $_[0]); return;
}
#
sub
ats2plpre_fprint_obj($$) { print {$_[0]} $_[1]; return;  }
#
############################################
#
sub
ats2plpre_print_newline()
{
  STDOUT->printflush("\n"); return;
}
sub
ats2plpre_prerr_newline()
{
  STDERR->printflush("\n"); return;
}
sub
ats2plpre_fprint_newline($)
{
  $_[0]->printflush("\n"); return;
}
#
############################################

######
1; #note that it is needed by 'use' or 'require'
######

######
#end of [print_cats.pl]
######
######
#
# HX-2014-11:
# for Perl code translated from ATS
#
######

######
#beg of [PLarray_cats.pl]
######

sub
ats2plpre_PLarray_nil() { return []; }
sub
ats2plpre_PLarray_sing($) { return [$_[0]]; }
sub
ats2plpre_PLarray_pair($$) { return [$_[0], $_[1]]; }

######

sub
ats2plpre_PLarray_get_at($$)
{
  my($A, $i) = @_; return $A->[$i];
}
sub
ats2plpre_PLarray_set_at($$$)
{
  my($A, $i, $x) = @_; $A->[$i] = $x; return;
}

######

sub
ats2plpre_PLarray_length($)
{
  return scalar(@{$_[0]});
}

######

sub
ats2plpre_PLarray_pop_0($) { return pop(@{$_[0]}); }
sub
ats2plpre_PLarray_pop_1($$) { return splice(@{$_[0]}, $_[1], 1); }

######

sub
ats2plpre_PLarray_push($$) { return push(@{$_[0]}, $_[1]); }

######

sub
ats2plpre_PLarray_extend($$) { push(@{$_[0]}, $_[1]); return; }

######
#
sub
ats2plpre_PLarray_reverse($)
{
  my $A = @_;
  my $i = 0 ;
  my $j = scalar(@{$A}) - 1;
  while ($i < $j)
  {
    my $tmp = $A->[i]; $A->[i] = $A->[j]; $A->[j] = $tmp; $i++; $j--;
  }
  return;
} #ats2plpre_PLarray_reverse
#
######

sub
ats2plpre_PLarray_copy($)
{
  my @A2 = @{$_[0]}; return \@A2;
}
sub
ats2plpre_PLarray_revcopy($)
{
  my @A2 = reverse(@{$_[0]}); return \@A2;
}

######

sub
ats2plpre_PLarray_append_2($$)
{
  my @res = (@{$_[0]}, @{$_[1]}); return \@res;
}
sub
ats2plpre_PLarray_append_3($$$)
{
  my @res = (@{$_[0]}, @{$_[1]}, @{$_[2]}); return \@res;
}

######

######
1; #note that it is needed by 'use' or 'require'
######

######
#end of [PLarray_cats.pl]
######
######
##
## The Perl code is generated by atscc2pl
## The starting compilation time is: 2016-10-7: 14h:33m
##
######
sub
_ats2plpre_list_patsfun_29__closurerize($)
{
  my($env0) = @_;
  return [sub{ my($cenv, $arg0) = @_; return _ats2plpre_list_patsfun_29($cenv->[1], $arg0); }, $env0];
}

sub
_ats2plpre_list_patsfun_33__closurerize($)
{
  my($env0) = @_;
  return [sub{ my($cenv, $arg0) = @_; return _ats2plpre_list_patsfun_33($cenv->[1], $arg0); }, $env0];
}

sub
_ats2plpre_list_patsfun_36__closurerize($)
{
  my($env0) = @_;
  return [sub{ my($cenv, $arg0) = @_; return _ats2plpre_list_patsfun_36($cenv->[1], $arg0); }, $env0];
}

sub
_ats2plpre_list_patsfun_40__closurerize($)
{
  my($env0) = @_;
  return [sub{ my($cenv, $arg0) = @_; return _ats2plpre_list_patsfun_40($cenv->[1], $arg0); }, $env0];
}

sub
_ats2plpre_list_patsfun_44__closurerize($)
{
  my($env0) = @_;
  return [sub{ my($cenv, $arg0) = @_; return _ats2plpre_list_patsfun_44($cenv->[1], $arg0); }, $env0];
}

sub
_ats2plpre_list_patsfun_48__closurerize($)
{
  my($env0) = @_;
  return [sub{ my($cenv, $arg0) = @_; return _ats2plpre_list_patsfun_48($cenv->[1], $arg0); }, $env0];
}

sub
_ats2plpre_list_patsfun_51__closurerize($)
{
  my($env0) = @_;
  return [sub{ my($cenv, $arg0) = @_; return _ats2plpre_list_patsfun_51($cenv->[1], $arg0); }, $env0];
}

sub
_ats2plpre_list_patsfun_55__closurerize($)
{
  my($env0) = @_;
  return [sub{ my($cenv, $arg0) = @_; return _ats2plpre_list_patsfun_55($cenv->[1], $arg0); }, $env0];
}

sub
_ats2plpre_list_patsfun_59__closurerize($)
{
  my($env0) = @_;
  return [sub{ my($cenv, $arg0) = @_; return _ats2plpre_list_patsfun_59($cenv->[1], $arg0); }, $env0];
}

sub
_ats2plpre_list_patsfun_63__closurerize($$)
{
  my($env0, $env1) = @_;
  return [sub{ my($cenv, $arg0) = @_; return _ats2plpre_list_patsfun_63($cenv->[1], $cenv->[2], $arg0); }, $env0, $env1];
}

sub
_ats2plpre_list_patsfun_67__closurerize($$)
{
  my($env0, $env1) = @_;
  return [sub{ my($cenv, $arg0) = @_; return _ats2plpre_list_patsfun_67($cenv->[1], $cenv->[2], $arg0); }, $env0, $env1];
}

sub
_ats2plpre_list_patsfun_71__closurerize($$)
{
  my($env0, $env1) = @_;
  return [sub{ my($cenv, $arg0) = @_; return _ats2plpre_list_patsfun_71($cenv->[1], $cenv->[2], $arg0); }, $env0, $env1];
}

sub
_ats2plpre_list_patsfun_75__closurerize($$)
{
  my($env0, $env1) = @_;
  return [sub{ my($cenv, $arg0) = @_; return _ats2plpre_list_patsfun_75($cenv->[1], $cenv->[2], $arg0); }, $env0, $env1];
}


sub
ats2plpre_list_make_intrange_2($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret2;
##
  __patsflab_list_make_intrange_2:
  $tmpret2 = ats2plpre_list_make_intrange_3($arg0, $arg1, 1);
  return $tmpret2;
} #end-of-function


sub
ats2plpre_list_make_intrange_3($$$)
{
##
  my($arg0, $arg1, $arg2) = @_;
##
  my $tmpret3;
  my $tmp14;
  my $tmp15;
  my $tmp16;
  my $tmp17;
  my $tmp18;
  my $tmp19;
  my $tmp20;
  my $tmp21;
  my $tmp22;
  my $tmp23;
  my $tmp24;
  my $tmp25;
  my $tmp26;
  my $tmp27;
  my $tmp28;
  my $tmp29;
  my $tmp30;
  my $tmp31;
  my $tmp32;
  my $tmp33;
  my $tmp34;
##
  __patsflab_list_make_intrange_3:
  #ATScaseofseq_beg
  while(1)
  {
    #ATSbranchseq_beg
    __atstmplab6:
    $tmp14 = ats2plpre_gt_int0_int0($arg2, 0);
    if(!ATSCKpat_bool($tmp14, 1)) { goto __atstmplab7; }
    $tmp15 = ats2plpre_lt_int0_int0($arg0, $arg1);
    if($tmp15) {
      $tmp19 = ats2plpre_sub_int0_int0($arg1, $arg0);
      $tmp18 = ats2plpre_add_int0_int0($tmp19, $arg2);
      $tmp17 = ats2plpre_sub_int0_int0($tmp18, 1);
      $tmp16 = ats2plpre_div_int0_int0($tmp17, $arg2);
      $tmp22 = ats2plpre_sub_int0_int0($tmp16, 1);
      $tmp21 = ats2plpre_mul_int0_int0($tmp22, $arg2);
      $tmp20 = ats2plpre_add_int0_int0($arg0, $tmp21);
      $tmp23 = 0;
      $tmpret3 = _ats2plpre_list_loop1_4($tmp16, $tmp20, $arg2, $tmp23);
    } else {
      $tmpret3 = 0;
    } #endif
    last;
    #ATSbranchseq_end
    #ATSbranchseq_beg
    __atstmplab7:
    $tmp24 = ats2plpre_lt_int0_int0($arg2, 0);
    if(!ATSCKpat_bool($tmp24, 1)) { goto __atstmplab8; }
    $tmp25 = ats2plpre_gt_int0_int0($arg0, $arg1);
    if($tmp25) {
      $tmp26 = ats2plpre_neg_int0($arg2);
      $tmp30 = ats2plpre_sub_int0_int0($arg0, $arg1);
      $tmp29 = ats2plpre_add_int0_int0($tmp30, $tmp26);
      $tmp28 = ats2plpre_sub_int0_int0($tmp29, 1);
      $tmp27 = ats2plpre_div_int0_int0($tmp28, $tmp26);
      $tmp33 = ats2plpre_sub_int0_int0($tmp27, 1);
      $tmp32 = ats2plpre_mul_int0_int0($tmp33, $tmp26);
      $tmp31 = ats2plpre_sub_int0_int0($arg0, $tmp32);
      $tmp34 = 0;
      $tmpret3 = _ats2plpre_list_loop2_5($tmp27, $tmp31, $tmp26, $tmp34);
    } else {
      $tmpret3 = 0;
    } #endif
    last;
    #ATSbranchseq_end
    #ATSbranchseq_beg
    __atstmplab8:
    $tmpret3 = 0;
    last;
    #ATSbranchseq_end
  } #end-of-while-loop;
  #ATScaseofseq_end
  return $tmpret3;
} #end-of-function


sub
_ats2plpre_list_loop1_4($$$$)
{
##
  my($arg0, $arg1, $arg2, $arg3) = @_;
##
  my $apy0;
  my $apy1;
  my $apy2;
  my $apy3;
  my $tmpret4;
  my $tmp5;
  my $tmp6;
  my $tmp7;
  my $tmp8;
##
  __patsflab__ats2plpre_list_loop1_4:
  $tmp5 = ats2plpre_gt_int0_int0($arg0, 0);
  if($tmp5) {
    $tmp6 = ats2plpre_sub_int0_int0($arg0, 1);
    $tmp7 = ats2plpre_sub_int0_int0($arg1, $arg2);
    $tmp8 = [$arg1, $arg3];
    #ATStailcalseq_beg
    $apy0 = $tmp6;
    $apy1 = $tmp7;
    $apy2 = $arg2;
    $apy3 = $tmp8;
    $arg0 = $apy0;
    $arg1 = $apy1;
    $arg2 = $apy2;
    $arg3 = $apy3;
    goto __patsflab__ats2plpre_list_loop1_4;
    #ATStailcalseq_end
  } else {
    $tmpret4 = $arg3;
  } #endif
  return $tmpret4;
} #end-of-function


sub
_ats2plpre_list_loop2_5($$$$)
{
##
  my($arg0, $arg1, $arg2, $arg3) = @_;
##
  my $apy0;
  my $apy1;
  my $apy2;
  my $apy3;
  my $tmpret9;
  my $tmp10;
  my $tmp11;
  my $tmp12;
  my $tmp13;
##
  __patsflab__ats2plpre_list_loop2_5:
  $tmp10 = ats2plpre_gt_int0_int0($arg0, 0);
  if($tmp10) {
    $tmp11 = ats2plpre_sub_int0_int0($arg0, 1);
    $tmp12 = ats2plpre_add_int0_int0($arg1, $arg2);
    $tmp13 = [$arg1, $arg3];
    #ATStailcalseq_beg
    $apy0 = $tmp11;
    $apy1 = $tmp12;
    $apy2 = $arg2;
    $apy3 = $tmp13;
    $arg0 = $apy0;
    $arg1 = $apy1;
    $arg2 = $apy2;
    $arg3 = $apy3;
    goto __patsflab__ats2plpre_list_loop2_5;
    #ATStailcalseq_end
  } else {
    $tmpret9 = $arg3;
  } #endif
  return $tmpret9;
} #end-of-function


sub
ats2plpre_list_length($)
{
##
  my($arg0) = @_;
##
  my $tmpret46;
##
  __patsflab_list_length:
  $tmpret46 = _ats2plpre_list_loop_12($arg0, 0);
  return $tmpret46;
} #end-of-function


sub
_ats2plpre_list_loop_12($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $apy0;
  my $apy1;
  my $tmpret47;
  my $tmp49;
  my $tmp50;
##
  __patsflab__ats2plpre_list_loop_12:
  #ATScaseofseq_beg
  while(1)
  {
    #ATSbranchseq_beg
    __atstmplab13:
    if(ATSCKptriscons($arg0)) { goto __atstmplab16; }
    __atstmplab14:
    $tmpret47 = $arg1;
    last;
    #ATSbranchseq_end
    #ATSbranchseq_beg
    __atstmplab15:
    __atstmplab16:
    $tmp49 = $arg0->[1];
    $tmp50 = ats2plpre_add_int1_int1($arg1, 1);
    #ATStailcalseq_beg
    $apy0 = $tmp49;
    $apy1 = $tmp50;
    $arg0 = $apy0;
    $arg1 = $apy1;
    goto __patsflab__ats2plpre_list_loop_12;
    #ATStailcalseq_end
    last;
    #ATSbranchseq_end
  } #end-of-while-loop;
  #ATScaseofseq_end
  return $tmpret47;
} #end-of-function


sub
ats2plpre_list_last($)
{
##
  my($arg0) = @_;
##
  my $apy0;
  my $tmpret51;
  my $tmp52;
  my $tmp53;
##
  __patsflab_list_last:
  $tmp52 = $arg0->[0];
  $tmp53 = $arg0->[1];
  #ATScaseofseq_beg
  while(1)
  {
    #ATSbranchseq_beg
    __atstmplab17:
    if(ATSCKptriscons($tmp53)) { goto __atstmplab20; }
    __atstmplab18:
    $tmpret51 = $tmp52;
    last;
    #ATSbranchseq_end
    #ATSbranchseq_beg
    __atstmplab19:
    __atstmplab20:
    #ATStailcalseq_beg
    $apy0 = $tmp53;
    $arg0 = $apy0;
    goto __patsflab_list_last;
    #ATStailcalseq_end
    last;
    #ATSbranchseq_end
  } #end-of-while-loop;
  #ATScaseofseq_end
  return $tmpret51;
} #end-of-function


sub
ats2plpre_list_get_at($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $apy0;
  my $apy1;
  my $tmpret54;
  my $tmp55;
  my $tmp56;
  my $tmp57;
  my $tmp58;
##
  __patsflab_list_get_at:
  $tmp55 = ats2plpre_eq_int1_int1($arg1, 0);
  if($tmp55) {
    $tmp56 = $arg0->[0];
    $tmpret54 = $tmp56;
  } else {
    $tmp57 = $arg0->[1];
    $tmp58 = ats2plpre_sub_int1_int1($arg1, 1);
    #ATStailcalseq_beg
    $apy0 = $tmp57;
    $apy1 = $tmp58;
    $arg0 = $apy0;
    $arg1 = $apy1;
    goto __patsflab_list_get_at;
    #ATStailcalseq_end
  } #endif
  return $tmpret54;
} #end-of-function


sub
ats2plpre_list_snoc($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret59;
  my $tmp60;
  my $tmp61;
##
  __patsflab_list_snoc:
  $tmp61 = 0;
  $tmp60 = [$arg1, $tmp61];
  $tmpret59 = ats2plpre_list_append($arg0, $tmp60);
  return $tmpret59;
} #end-of-function


sub
ats2plpre_list_extend($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret62;
  my $tmp63;
  my $tmp64;
##
  __patsflab_list_extend:
  $tmp64 = 0;
  $tmp63 = [$arg1, $tmp64];
  $tmpret62 = ats2plpre_list_append($arg0, $tmp63);
  return $tmpret62;
} #end-of-function


sub
ats2plpre_list_append($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret65;
  my $tmp66;
  my $tmp67;
  my $tmp68;
##
  __patsflab_list_append:
  #ATScaseofseq_beg
  while(1)
  {
    #ATSbranchseq_beg
    __atstmplab21:
    if(ATSCKptriscons($arg0)) { goto __atstmplab24; }
    __atstmplab22:
    $tmpret65 = $arg1;
    last;
    #ATSbranchseq_end
    #ATSbranchseq_beg
    __atstmplab23:
    __atstmplab24:
    $tmp66 = $arg0->[0];
    $tmp67 = $arg0->[1];
    $tmp68 = ats2plpre_list_append($tmp67, $arg1);
    $tmpret65 = [$tmp66, $tmp68];
    last;
    #ATSbranchseq_end
  } #end-of-while-loop;
  #ATScaseofseq_end
  return $tmpret65;
} #end-of-function


sub
ats2plpre_list_reverse($)
{
##
  my($arg0) = @_;
##
  my $tmpret69;
  my $tmp70;
##
  __patsflab_list_reverse:
  $tmp70 = 0;
  $tmpret69 = ats2plpre_list_reverse_append($arg0, $tmp70);
  return $tmpret69;
} #end-of-function


sub
ats2plpre_list_reverse_append($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret71;
##
  __patsflab_list_reverse_append:
  $tmpret71 = _ats2plpre_list_loop_20($arg0, $arg1);
  return $tmpret71;
} #end-of-function


sub
_ats2plpre_list_loop_20($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $apy0;
  my $apy1;
  my $tmpret72;
  my $tmp73;
  my $tmp74;
  my $tmp75;
##
  __patsflab__ats2plpre_list_loop_20:
  #ATScaseofseq_beg
  while(1)
  {
    #ATSbranchseq_beg
    __atstmplab25:
    if(ATSCKptriscons($arg0)) { goto __atstmplab28; }
    __atstmplab26:
    $tmpret72 = $arg1;
    last;
    #ATSbranchseq_end
    #ATSbranchseq_beg
    __atstmplab27:
    __atstmplab28:
    $tmp73 = $arg0->[0];
    $tmp74 = $arg0->[1];
    $tmp75 = [$tmp73, $arg1];
    #ATStailcalseq_beg
    $apy0 = $tmp74;
    $apy1 = $tmp75;
    $arg0 = $apy0;
    $arg1 = $apy1;
    goto __patsflab__ats2plpre_list_loop_20;
    #ATStailcalseq_end
    last;
    #ATSbranchseq_end
  } #end-of-while-loop;
  #ATScaseofseq_end
  return $tmpret72;
} #end-of-function


sub
ats2plpre_list_take($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret76;
  my $tmp77;
  my $tmp78;
  my $tmp79;
  my $tmp80;
  my $tmp81;
##
  __patsflab_list_take:
  $tmp77 = ats2plpre_gt_int1_int1($arg1, 0);
  if($tmp77) {
    $tmp78 = $arg0->[0];
    $tmp79 = $arg0->[1];
    $tmp81 = ats2plpre_sub_int1_int1($arg1, 1);
    $tmp80 = ats2plpre_list_take($tmp79, $tmp81);
    $tmpret76 = [$tmp78, $tmp80];
  } else {
    $tmpret76 = 0;
  } #endif
  return $tmpret76;
} #end-of-function


sub
ats2plpre_list_drop($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $apy0;
  my $apy1;
  my $tmpret82;
  my $tmp83;
  my $tmp84;
  my $tmp85;
##
  __patsflab_list_drop:
  $tmp83 = ats2plpre_gt_int1_int1($arg1, 0);
  if($tmp83) {
    $tmp84 = $arg0->[1];
    $tmp85 = ats2plpre_sub_int1_int1($arg1, 1);
    #ATStailcalseq_beg
    $apy0 = $tmp84;
    $apy1 = $tmp85;
    $arg0 = $apy0;
    $arg1 = $apy1;
    goto __patsflab_list_drop;
    #ATStailcalseq_end
  } else {
    $tmpret82 = $arg0;
  } #endif
  return $tmpret82;
} #end-of-function


sub
ats2plpre_list_split_at($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret86;
  my $tmp87;
  my $tmp88;
##
  __patsflab_list_split_at:
  $tmp87 = ats2plpre_list_take($arg0, $arg1);
  $tmp88 = ats2plpre_list_drop($arg0, $arg1);
  $tmpret86 = [$tmp87, $tmp88];
  return $tmpret86;
} #end-of-function


sub
ats2plpre_list_insert_at($$$)
{
##
  my($arg0, $arg1, $arg2) = @_;
##
  my $tmpret89;
  my $tmp90;
  my $tmp91;
  my $tmp92;
  my $tmp93;
  my $tmp94;
##
  __patsflab_list_insert_at:
  $tmp90 = ats2plpre_gt_int1_int1($arg1, 0);
  if($tmp90) {
    $tmp91 = $arg0->[0];
    $tmp92 = $arg0->[1];
    $tmp94 = ats2plpre_sub_int1_int1($arg1, 1);
    $tmp93 = ats2plpre_list_insert_at($tmp92, $tmp94, $arg2);
    $tmpret89 = [$tmp91, $tmp93];
  } else {
    $tmpret89 = [$arg2, $arg0];
  } #endif
  return $tmpret89;
} #end-of-function


sub
ats2plpre_list_remove_at($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret95;
  my $tmp96;
  my $tmp97;
  my $tmp98;
  my $tmp99;
  my $tmp100;
##
  __patsflab_list_remove_at:
  $tmp96 = $arg0->[0];
  $tmp97 = $arg0->[1];
  $tmp98 = ats2plpre_gt_int1_int1($arg1, 0);
  if($tmp98) {
    $tmp100 = ats2plpre_sub_int1_int1($arg1, 1);
    $tmp99 = ats2plpre_list_remove_at($tmp97, $tmp100);
    $tmpret95 = [$tmp96, $tmp99];
  } else {
    $tmpret95 = $tmp97;
  } #endif
  return $tmpret95;
} #end-of-function


sub
ats2plpre_list_takeout_at($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret101;
  my $tmp102;
  my $tmp103;
  my $tmp104;
  my $tmp105;
  my $tmp106;
  my $tmp107;
  my $tmp108;
  my $tmp109;
##
  __patsflab_list_takeout_at:
  $tmp102 = $arg0->[0];
  $tmp103 = $arg0->[1];
  $tmp104 = ats2plpre_gt_int1_int1($arg1, 0);
  if($tmp104) {
    $tmp106 = ats2plpre_sub_int1_int1($arg1, 1);
    $tmp105 = ats2plpre_list_takeout_at($tmp103, $tmp106);
    $tmp107 = $tmp105->[0];
    $tmp108 = $tmp105->[1];
    $tmp109 = [$tmp102, $tmp108];
    $tmpret101 = [$tmp107, $tmp109];
  } else {
    $tmpret101 = [$tmp102, $tmp103];
  } #endif
  return $tmpret101;
} #end-of-function


sub
ats2plpre_list_exists($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $apy0;
  my $apy1;
  my $tmpret110;
  my $tmp111;
  my $tmp112;
  my $tmp113;
##
  __patsflab_list_exists:
  #ATScaseofseq_beg
  while(1)
  {
    #ATSbranchseq_beg
    __atstmplab29:
    if(ATSCKptriscons($arg0)) { goto __atstmplab32; }
    __atstmplab30:
    $tmpret110 = 0;
    last;
    #ATSbranchseq_end
    #ATSbranchseq_beg
    __atstmplab31:
    __atstmplab32:
    $tmp111 = $arg0->[0];
    $tmp112 = $arg0->[1];
    $tmp113 = &{$arg1->[0]}($arg1, $tmp111);
    if($tmp113) {
      $tmpret110 = 1;
    } else {
      #ATStailcalseq_beg
      $apy0 = $tmp112;
      $apy1 = $arg1;
      $arg0 = $apy0;
      $arg1 = $apy1;
      goto __patsflab_list_exists;
      #ATStailcalseq_end
    } #endif
    last;
    #ATSbranchseq_end
  } #end-of-while-loop;
  #ATScaseofseq_end
  return $tmpret110;
} #end-of-function


sub
ats2plpre_list_exists_method($)
{
##
  my($arg0) = @_;
##
  my $tmpret114;
##
  __patsflab_list_exists_method:
  $tmpret114 = _ats2plpre_list_patsfun_29__closurerize($arg0);
  return $tmpret114;
} #end-of-function


sub
_ats2plpre_list_patsfun_29($$)
{
##
  my($env0, $arg0) = @_;
##
  my $tmpret115;
##
  __patsflab__ats2plpre_list_patsfun_29:
  $tmpret115 = ats2plpre_list_exists($env0, $arg0);
  return $tmpret115;
} #end-of-function


sub
ats2plpre_list_iexists($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret116;
##
  __patsflab_list_iexists:
  $tmpret116 = _ats2plpre_list_loop_31($arg1, 0, $arg0);
  return $tmpret116;
} #end-of-function


sub
_ats2plpre_list_loop_31($$$)
{
##
  my($env0, $arg0, $arg1) = @_;
##
  my $apy0;
  my $apy1;
  my $tmpret117;
  my $tmp118;
  my $tmp119;
  my $tmp120;
  my $tmp121;
##
  __patsflab__ats2plpre_list_loop_31:
  #ATScaseofseq_beg
  while(1)
  {
    #ATSbranchseq_beg
    __atstmplab33:
    if(ATSCKptriscons($arg1)) { goto __atstmplab36; }
    __atstmplab34:
    $tmpret117 = 0;
    last;
    #ATSbranchseq_end
    #ATSbranchseq_beg
    __atstmplab35:
    __atstmplab36:
    $tmp118 = $arg1->[0];
    $tmp119 = $arg1->[1];
    $tmp120 = &{$env0->[0]}($env0, $arg0, $tmp118);
    if($tmp120) {
      $tmpret117 = 1;
    } else {
      $tmp121 = ats2plpre_add_int1_int1($arg0, 1);
      #ATStailcalseq_beg
      $apy0 = $tmp121;
      $apy1 = $tmp119;
      $arg0 = $apy0;
      $arg1 = $apy1;
      goto __patsflab__ats2plpre_list_loop_31;
      #ATStailcalseq_end
    } #endif
    last;
    #ATSbranchseq_end
  } #end-of-while-loop;
  #ATScaseofseq_end
  return $tmpret117;
} #end-of-function


sub
ats2plpre_list_iexists_method($)
{
##
  my($arg0) = @_;
##
  my $tmpret122;
##
  __patsflab_list_iexists_method:
  $tmpret122 = _ats2plpre_list_patsfun_33__closurerize($arg0);
  return $tmpret122;
} #end-of-function


sub
_ats2plpre_list_patsfun_33($$)
{
##
  my($env0, $arg0) = @_;
##
  my $tmpret123;
##
  __patsflab__ats2plpre_list_patsfun_33:
  $tmpret123 = ats2plpre_list_iexists($env0, $arg0);
  return $tmpret123;
} #end-of-function


sub
ats2plpre_list_forall($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $apy0;
  my $apy1;
  my $tmpret124;
  my $tmp125;
  my $tmp126;
  my $tmp127;
##
  __patsflab_list_forall:
  #ATScaseofseq_beg
  while(1)
  {
    #ATSbranchseq_beg
    __atstmplab37:
    if(ATSCKptriscons($arg0)) { goto __atstmplab40; }
    __atstmplab38:
    $tmpret124 = 1;
    last;
    #ATSbranchseq_end
    #ATSbranchseq_beg
    __atstmplab39:
    __atstmplab40:
    $tmp125 = $arg0->[0];
    $tmp126 = $arg0->[1];
    $tmp127 = &{$arg1->[0]}($arg1, $tmp125);
    if($tmp127) {
      #ATStailcalseq_beg
      $apy0 = $tmp126;
      $apy1 = $arg1;
      $arg0 = $apy0;
      $arg1 = $apy1;
      goto __patsflab_list_forall;
      #ATStailcalseq_end
    } else {
      $tmpret124 = 0;
    } #endif
    last;
    #ATSbranchseq_end
  } #end-of-while-loop;
  #ATScaseofseq_end
  return $tmpret124;
} #end-of-function


sub
ats2plpre_list_forall_method($)
{
##
  my($arg0) = @_;
##
  my $tmpret128;
##
  __patsflab_list_forall_method:
  $tmpret128 = _ats2plpre_list_patsfun_36__closurerize($arg0);
  return $tmpret128;
} #end-of-function


sub
_ats2plpre_list_patsfun_36($$)
{
##
  my($env0, $arg0) = @_;
##
  my $tmpret129;
##
  __patsflab__ats2plpre_list_patsfun_36:
  $tmpret129 = ats2plpre_list_forall($env0, $arg0);
  return $tmpret129;
} #end-of-function


sub
ats2plpre_list_iforall($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret130;
##
  __patsflab_list_iforall:
  $tmpret130 = _ats2plpre_list_loop_38($arg1, 0, $arg0);
  return $tmpret130;
} #end-of-function


sub
_ats2plpre_list_loop_38($$$)
{
##
  my($env0, $arg0, $arg1) = @_;
##
  my $apy0;
  my $apy1;
  my $tmpret131;
  my $tmp132;
  my $tmp133;
  my $tmp134;
  my $tmp135;
##
  __patsflab__ats2plpre_list_loop_38:
  #ATScaseofseq_beg
  while(1)
  {
    #ATSbranchseq_beg
    __atstmplab41:
    if(ATSCKptriscons($arg1)) { goto __atstmplab44; }
    __atstmplab42:
    $tmpret131 = 1;
    last;
    #ATSbranchseq_end
    #ATSbranchseq_beg
    __atstmplab43:
    __atstmplab44:
    $tmp132 = $arg1->[0];
    $tmp133 = $arg1->[1];
    $tmp134 = &{$env0->[0]}($env0, $arg0, $tmp132);
    if($tmp134) {
      $tmp135 = ats2plpre_add_int1_int1($arg0, 1);
      #ATStailcalseq_beg
      $apy0 = $tmp135;
      $apy1 = $tmp133;
      $arg0 = $apy0;
      $arg1 = $apy1;
      goto __patsflab__ats2plpre_list_loop_38;
      #ATStailcalseq_end
    } else {
      $tmpret131 = 0;
    } #endif
    last;
    #ATSbranchseq_end
  } #end-of-while-loop;
  #ATScaseofseq_end
  return $tmpret131;
} #end-of-function


sub
ats2plpre_list_iforall_method($)
{
##
  my($arg0) = @_;
##
  my $tmpret136;
##
  __patsflab_list_iforall_method:
  $tmpret136 = _ats2plpre_list_patsfun_40__closurerize($arg0);
  return $tmpret136;
} #end-of-function


sub
_ats2plpre_list_patsfun_40($$)
{
##
  my($env0, $arg0) = @_;
##
  my $tmpret137;
##
  __patsflab__ats2plpre_list_patsfun_40:
  $tmpret137 = ats2plpre_list_iforall($env0, $arg0);
  return $tmpret137;
} #end-of-function


sub
ats2plpre_list_app($$)
{
##
  my($arg0, $arg1) = @_;
##
##
  __patsflab_list_app:
  ats2plpre_list_foreach($arg0, $arg1);
  return;#_void
} #end-of-function


sub
ats2plpre_list_foreach($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $apy0;
  my $apy1;
  my $tmp140;
  my $tmp141;
##
  __patsflab_list_foreach:
  #ATScaseofseq_beg
  while(1)
  {
    #ATSbranchseq_beg
    __atstmplab45:
    if(ATSCKptriscons($arg0)) { goto __atstmplab48; }
    __atstmplab46:
    #ATSINSmove_void;
    last;
    #ATSbranchseq_end
    #ATSbranchseq_beg
    __atstmplab47:
    __atstmplab48:
    $tmp140 = $arg0->[0];
    $tmp141 = $arg0->[1];
    &{$arg1->[0]}($arg1, $tmp140);
    #ATStailcalseq_beg
    $apy0 = $tmp141;
    $apy1 = $arg1;
    $arg0 = $apy0;
    $arg1 = $apy1;
    goto __patsflab_list_foreach;
    #ATStailcalseq_end
    last;
    #ATSbranchseq_end
  } #end-of-while-loop;
  #ATScaseofseq_end
  return;#_void
} #end-of-function


sub
ats2plpre_list_foreach_method($)
{
##
  my($arg0) = @_;
##
  my $tmpret143;
##
  __patsflab_list_foreach_method:
  $tmpret143 = _ats2plpre_list_patsfun_44__closurerize($arg0);
  return $tmpret143;
} #end-of-function


sub
_ats2plpre_list_patsfun_44($$)
{
##
  my($env0, $arg0) = @_;
##
##
  __patsflab__ats2plpre_list_patsfun_44:
  ats2plpre_list_foreach($env0, $arg0);
  return;#_void
} #end-of-function


sub
ats2plpre_list_iforeach($$)
{
##
  my($arg0, $arg1) = @_;
##
##
  __patsflab_list_iforeach:
  _ats2plpre_list_aux_46($arg1, 0, $arg0);
  return;#_void
} #end-of-function


sub
_ats2plpre_list_aux_46($$$)
{
##
  my($env0, $arg0, $arg1) = @_;
##
  my $apy0;
  my $apy1;
  my $tmp147;
  my $tmp148;
  my $tmp150;
##
  __patsflab__ats2plpre_list_aux_46:
  #ATScaseofseq_beg
  while(1)
  {
    #ATSbranchseq_beg
    __atstmplab49:
    if(ATSCKptriscons($arg1)) { goto __atstmplab52; }
    __atstmplab50:
    #ATSINSmove_void;
    last;
    #ATSbranchseq_end
    #ATSbranchseq_beg
    __atstmplab51:
    __atstmplab52:
    $tmp147 = $arg1->[0];
    $tmp148 = $arg1->[1];
    &{$env0->[0]}($env0, $arg0, $tmp147);
    $tmp150 = ats2plpre_add_int0_int0($arg0, 1);
    #ATStailcalseq_beg
    $apy0 = $tmp150;
    $apy1 = $tmp148;
    $arg0 = $apy0;
    $arg1 = $apy1;
    goto __patsflab__ats2plpre_list_aux_46;
    #ATStailcalseq_end
    last;
    #ATSbranchseq_end
  } #end-of-while-loop;
  #ATScaseofseq_end
  return;#_void
} #end-of-function


sub
ats2plpre_list_iforeach_method($)
{
##
  my($arg0) = @_;
##
  my $tmpret151;
##
  __patsflab_list_iforeach_method:
  $tmpret151 = _ats2plpre_list_patsfun_48__closurerize($arg0);
  return $tmpret151;
} #end-of-function


sub
_ats2plpre_list_patsfun_48($$)
{
##
  my($env0, $arg0) = @_;
##
##
  __patsflab__ats2plpre_list_patsfun_48:
  ats2plpre_list_iforeach($env0, $arg0);
  return;#_void
} #end-of-function


sub
ats2plpre_list_rforeach($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmp154;
  my $tmp155;
##
  __patsflab_list_rforeach:
  #ATScaseofseq_beg
  while(1)
  {
    #ATSbranchseq_beg
    __atstmplab53:
    if(ATSCKptriscons($arg0)) { goto __atstmplab56; }
    __atstmplab54:
    #ATSINSmove_void;
    last;
    #ATSbranchseq_end
    #ATSbranchseq_beg
    __atstmplab55:
    __atstmplab56:
    $tmp154 = $arg0->[0];
    $tmp155 = $arg0->[1];
    ats2plpre_list_rforeach($tmp155, $arg1);
    &{$arg1->[0]}($arg1, $tmp154);
    last;
    #ATSbranchseq_end
  } #end-of-while-loop;
  #ATScaseofseq_end
  return;#_void
} #end-of-function


sub
ats2plpre_list_rforeach_method($)
{
##
  my($arg0) = @_;
##
  my $tmpret157;
##
  __patsflab_list_rforeach_method:
  $tmpret157 = _ats2plpre_list_patsfun_51__closurerize($arg0);
  return $tmpret157;
} #end-of-function


sub
_ats2plpre_list_patsfun_51($$)
{
##
  my($env0, $arg0) = @_;
##
##
  __patsflab__ats2plpre_list_patsfun_51:
  ats2plpre_list_rforeach($env0, $arg0);
  return;#_void
} #end-of-function


sub
ats2plpre_list_filter($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret159;
##
  __patsflab_list_filter:
  $tmpret159 = _ats2plpre_list_aux_53($arg1, $arg0);
  return $tmpret159;
} #end-of-function


sub
_ats2plpre_list_aux_53($$)
{
##
  my($env0, $arg0) = @_;
##
  my $apy0;
  my $tmpret160;
  my $tmp161;
  my $tmp162;
  my $tmp163;
  my $tmp164;
##
  __patsflab__ats2plpre_list_aux_53:
  #ATScaseofseq_beg
  while(1)
  {
    #ATSbranchseq_beg
    __atstmplab57:
    if(ATSCKptriscons($arg0)) { goto __atstmplab60; }
    __atstmplab58:
    $tmpret160 = 0;
    last;
    #ATSbranchseq_end
    #ATSbranchseq_beg
    __atstmplab59:
    __atstmplab60:
    $tmp161 = $arg0->[0];
    $tmp162 = $arg0->[1];
    $tmp163 = &{$env0->[0]}($env0, $tmp161);
    if($tmp163) {
      $tmp164 = _ats2plpre_list_aux_53($env0, $tmp162);
      $tmpret160 = [$tmp161, $tmp164];
    } else {
      #ATStailcalseq_beg
      $apy0 = $tmp162;
      $arg0 = $apy0;
      goto __patsflab__ats2plpre_list_aux_53;
      #ATStailcalseq_end
    } #endif
    last;
    #ATSbranchseq_end
  } #end-of-while-loop;
  #ATScaseofseq_end
  return $tmpret160;
} #end-of-function


sub
ats2plpre_list_filter_method($)
{
##
  my($arg0) = @_;
##
  my $tmpret165;
##
  __patsflab_list_filter_method:
  $tmpret165 = _ats2plpre_list_patsfun_55__closurerize($arg0);
  return $tmpret165;
} #end-of-function


sub
_ats2plpre_list_patsfun_55($$)
{
##
  my($env0, $arg0) = @_;
##
  my $tmpret166;
##
  __patsflab__ats2plpre_list_patsfun_55:
  $tmpret166 = ats2plpre_list_filter($env0, $arg0);
  return $tmpret166;
} #end-of-function


sub
ats2plpre_list_map($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret167;
##
  __patsflab_list_map:
  $tmpret167 = _ats2plpre_list_aux_57($arg1, $arg0);
  return $tmpret167;
} #end-of-function


sub
_ats2plpre_list_aux_57($$)
{
##
  my($env0, $arg0) = @_;
##
  my $tmpret168;
  my $tmp169;
  my $tmp170;
  my $tmp171;
  my $tmp172;
##
  __patsflab__ats2plpre_list_aux_57:
  #ATScaseofseq_beg
  while(1)
  {
    #ATSbranchseq_beg
    __atstmplab61:
    if(ATSCKptriscons($arg0)) { goto __atstmplab64; }
    __atstmplab62:
    $tmpret168 = 0;
    last;
    #ATSbranchseq_end
    #ATSbranchseq_beg
    __atstmplab63:
    __atstmplab64:
    $tmp169 = $arg0->[0];
    $tmp170 = $arg0->[1];
    $tmp171 = &{$env0->[0]}($env0, $tmp169);
    $tmp172 = _ats2plpre_list_aux_57($env0, $tmp170);
    $tmpret168 = [$tmp171, $tmp172];
    last;
    #ATSbranchseq_end
  } #end-of-while-loop;
  #ATScaseofseq_end
  return $tmpret168;
} #end-of-function


sub
ats2plpre_list_map_method($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret173;
##
  __patsflab_list_map_method:
  $tmpret173 = _ats2plpre_list_patsfun_59__closurerize($arg0);
  return $tmpret173;
} #end-of-function


sub
_ats2plpre_list_patsfun_59($$)
{
##
  my($env0, $arg0) = @_;
##
  my $tmpret174;
##
  __patsflab__ats2plpre_list_patsfun_59:
  $tmpret174 = ats2plpre_list_map($env0, $arg0);
  return $tmpret174;
} #end-of-function


sub
ats2plpre_list_foldleft($$$)
{
##
  my($arg0, $arg1, $arg2) = @_;
##
  my $tmpret175;
##
  __patsflab_list_foldleft:
  $tmpret175 = _ats2plpre_list_loop_61($arg2, $arg1, $arg0);
  return $tmpret175;
} #end-of-function


sub
_ats2plpre_list_loop_61($$$)
{
##
  my($env0, $arg0, $arg1) = @_;
##
  my $apy0;
  my $apy1;
  my $tmpret176;
  my $tmp177;
  my $tmp178;
  my $tmp179;
##
  __patsflab__ats2plpre_list_loop_61:
  #ATScaseofseq_beg
  while(1)
  {
    #ATSbranchseq_beg
    __atstmplab65:
    if(ATSCKptriscons($arg1)) { goto __atstmplab68; }
    __atstmplab66:
    $tmpret176 = $arg0;
    last;
    #ATSbranchseq_end
    #ATSbranchseq_beg
    __atstmplab67:
    __atstmplab68:
    $tmp177 = $arg1->[0];
    $tmp178 = $arg1->[1];
    $tmp179 = &{$env0->[0]}($env0, $arg0, $tmp177);
    #ATStailcalseq_beg
    $apy0 = $tmp179;
    $apy1 = $tmp178;
    $arg0 = $apy0;
    $arg1 = $apy1;
    goto __patsflab__ats2plpre_list_loop_61;
    #ATStailcalseq_end
    last;
    #ATSbranchseq_end
  } #end-of-while-loop;
  #ATScaseofseq_end
  return $tmpret176;
} #end-of-function


sub
ats2plpre_list_foldleft_method($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret180;
##
  __patsflab_list_foldleft_method:
  $tmpret180 = _ats2plpre_list_patsfun_63__closurerize($arg0, $arg1);
  return $tmpret180;
} #end-of-function


sub
_ats2plpre_list_patsfun_63($$$)
{
##
  my($env0, $env1, $arg0) = @_;
##
  my $tmpret181;
##
  __patsflab__ats2plpre_list_patsfun_63:
  $tmpret181 = ats2plpre_list_foldleft($env0, $env1, $arg0);
  return $tmpret181;
} #end-of-function


sub
ats2plpre_list_ifoldleft($$$)
{
##
  my($arg0, $arg1, $arg2) = @_;
##
  my $tmpret182;
##
  __patsflab_list_ifoldleft:
  $tmpret182 = _ats2plpre_list_loop_65($arg2, 0, $arg1, $arg0);
  return $tmpret182;
} #end-of-function


sub
_ats2plpre_list_loop_65($$$$)
{
##
  my($env0, $arg0, $arg1, $arg2) = @_;
##
  my $apy0;
  my $apy1;
  my $apy2;
  my $tmpret183;
  my $tmp184;
  my $tmp185;
  my $tmp186;
  my $tmp187;
##
  __patsflab__ats2plpre_list_loop_65:
  #ATScaseofseq_beg
  while(1)
  {
    #ATSbranchseq_beg
    __atstmplab69:
    if(ATSCKptriscons($arg2)) { goto __atstmplab72; }
    __atstmplab70:
    $tmpret183 = $arg1;
    last;
    #ATSbranchseq_end
    #ATSbranchseq_beg
    __atstmplab71:
    __atstmplab72:
    $tmp184 = $arg2->[0];
    $tmp185 = $arg2->[1];
    $tmp186 = ats2plpre_add_int1_int1($arg0, 1);
    $tmp187 = &{$env0->[0]}($env0, $arg0, $arg1, $tmp184);
    #ATStailcalseq_beg
    $apy0 = $tmp186;
    $apy1 = $tmp187;
    $apy2 = $tmp185;
    $arg0 = $apy0;
    $arg1 = $apy1;
    $arg2 = $apy2;
    goto __patsflab__ats2plpre_list_loop_65;
    #ATStailcalseq_end
    last;
    #ATSbranchseq_end
  } #end-of-while-loop;
  #ATScaseofseq_end
  return $tmpret183;
} #end-of-function


sub
ats2plpre_list_ifoldleft_method($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret188;
##
  __patsflab_list_ifoldleft_method:
  $tmpret188 = _ats2plpre_list_patsfun_67__closurerize($arg0, $arg1);
  return $tmpret188;
} #end-of-function


sub
_ats2plpre_list_patsfun_67($$$)
{
##
  my($env0, $env1, $arg0) = @_;
##
  my $tmpret189;
##
  __patsflab__ats2plpre_list_patsfun_67:
  $tmpret189 = ats2plpre_list_ifoldleft($env0, $env1, $arg0);
  return $tmpret189;
} #end-of-function


sub
ats2plpre_list_foldright($$$)
{
##
  my($arg0, $arg1, $arg2) = @_;
##
  my $tmpret190;
##
  __patsflab_list_foldright:
  $tmpret190 = _ats2plpre_list_aux_69($arg1, $arg0, $arg2);
  return $tmpret190;
} #end-of-function


sub
_ats2plpre_list_aux_69($$$)
{
##
  my($env0, $arg0, $arg1) = @_;
##
  my $tmpret191;
  my $tmp192;
  my $tmp193;
  my $tmp194;
##
  __patsflab__ats2plpre_list_aux_69:
  #ATScaseofseq_beg
  while(1)
  {
    #ATSbranchseq_beg
    __atstmplab73:
    if(ATSCKptriscons($arg0)) { goto __atstmplab76; }
    __atstmplab74:
    $tmpret191 = $arg1;
    last;
    #ATSbranchseq_end
    #ATSbranchseq_beg
    __atstmplab75:
    __atstmplab76:
    $tmp192 = $arg0->[0];
    $tmp193 = $arg0->[1];
    $tmp194 = _ats2plpre_list_aux_69($env0, $tmp193, $arg1);
    $tmpret191 = &{$env0->[0]}($env0, $tmp192, $tmp194);
    last;
    #ATSbranchseq_end
  } #end-of-while-loop;
  #ATScaseofseq_end
  return $tmpret191;
} #end-of-function


sub
ats2plpre_list_foldright_method($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret195;
##
  __patsflab_list_foldright_method:
  $tmpret195 = _ats2plpre_list_patsfun_71__closurerize($arg0, $arg1);
  return $tmpret195;
} #end-of-function


sub
_ats2plpre_list_patsfun_71($$$)
{
##
  my($env0, $env1, $arg0) = @_;
##
  my $tmpret196;
##
  __patsflab__ats2plpre_list_patsfun_71:
  $tmpret196 = ats2plpre_list_foldright($env0, $arg0, $env1);
  return $tmpret196;
} #end-of-function


sub
ats2plpre_list_ifoldright($$$)
{
##
  my($arg0, $arg1, $arg2) = @_;
##
  my $tmpret197;
##
  __patsflab_list_ifoldright:
  $tmpret197 = _ats2plpre_list_aux_73($arg1, 0, $arg0, $arg2);
  return $tmpret197;
} #end-of-function


sub
_ats2plpre_list_aux_73($$$$)
{
##
  my($env0, $arg0, $arg1, $arg2) = @_;
##
  my $tmpret198;
  my $tmp199;
  my $tmp200;
  my $tmp201;
  my $tmp202;
##
  __patsflab__ats2plpre_list_aux_73:
  #ATScaseofseq_beg
  while(1)
  {
    #ATSbranchseq_beg
    __atstmplab77:
    if(ATSCKptriscons($arg1)) { goto __atstmplab80; }
    __atstmplab78:
    $tmpret198 = $arg2;
    last;
    #ATSbranchseq_end
    #ATSbranchseq_beg
    __atstmplab79:
    __atstmplab80:
    $tmp199 = $arg1->[0];
    $tmp200 = $arg1->[1];
    $tmp202 = ats2plpre_add_int1_int1($arg0, 1);
    $tmp201 = _ats2plpre_list_aux_73($env0, $tmp202, $tmp200, $arg2);
    $tmpret198 = &{$env0->[0]}($env0, $arg0, $tmp199, $tmp201);
    last;
    #ATSbranchseq_end
  } #end-of-while-loop;
  #ATScaseofseq_end
  return $tmpret198;
} #end-of-function


sub
ats2plpre_list_ifoldright_method($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret203;
##
  __patsflab_list_ifoldright_method:
  $tmpret203 = _ats2plpre_list_patsfun_75__closurerize($arg0, $arg1);
  return $tmpret203;
} #end-of-function


sub
_ats2plpre_list_patsfun_75($$$)
{
##
  my($env0, $env1, $arg0) = @_;
##
  my $tmpret204;
##
  __patsflab__ats2plpre_list_patsfun_75:
  $tmpret204 = ats2plpre_list_ifoldright($env0, $arg0, $env1);
  return $tmpret204;
} #end-of-function


######
#ATSextcode_beg()
######
######
1; ##note that it is needed by 'use' or 'require'
######
######
#ATSextcode_end()
######
######
##
## end-of-compilation-unit
##
######
######
##
## The Perl code is generated by atscc2pl
## The starting compilation time is: 2016-10-7: 14h:33m
##
######

sub
ats2plpre_option_some($)
{
##
  my($arg0) = @_;
##
  my $tmpret0;
##
  __patsflab_option_some:
  $tmpret0 = [$arg0];
  return $tmpret0;
} #end-of-function


sub
ats2plpre_option_none()
{
##
  #argless
##
  my $tmpret1;
##
  __patsflab_option_none:
  $tmpret1 = 0;
  return $tmpret1;
} #end-of-function


sub
ats2plpre_option_is_some($)
{
##
  my($arg0) = @_;
##
  my $tmpret2;
##
  __patsflab_option_is_some:
  #ATScaseofseq_beg
  while(1)
  {
    #ATSbranchseq_beg
    __atstmplab0:
    if(ATSCKptrisnull($arg0)) { goto __atstmplab3; }
    __atstmplab1:
    $tmpret2 = 1;
    last;
    #ATSbranchseq_end
    #ATSbranchseq_beg
    __atstmplab2:
    __atstmplab3:
    $tmpret2 = 0;
    last;
    #ATSbranchseq_end
  } #end-of-while-loop;
  #ATScaseofseq_end
  return $tmpret2;
} #end-of-function


sub
ats2plpre_option_is_none($)
{
##
  my($arg0) = @_;
##
  my $tmpret3;
##
  __patsflab_option_is_none:
  #ATScaseofseq_beg
  while(1)
  {
    #ATSbranchseq_beg
    __atstmplab4:
    if(ATSCKptriscons($arg0)) { goto __atstmplab7; }
    __atstmplab5:
    $tmpret3 = 1;
    last;
    #ATSbranchseq_end
    #ATSbranchseq_beg
    __atstmplab6:
    __atstmplab7:
    $tmpret3 = 0;
    last;
    #ATSbranchseq_end
  } #end-of-while-loop;
  #ATScaseofseq_end
  return $tmpret3;
} #end-of-function

######
##
## end-of-compilation-unit
##
######
######
##
## The Perl code is generated by atscc2pl
## The starting compilation time is: 2016-10-7: 14h:33m
##
######
sub
_ats2plpre_stream_patsfun_5__closurerize($)
{
  my($env0) = @_;
  return [sub{ my($cenv) = @_; return _ats2plpre_stream_patsfun_5($cenv->[1]); }, $env0];
}

sub
_ats2plpre_stream_patsfun_12__closurerize($$)
{
  my($env0, $env1) = @_;
  return [sub{ my($cenv) = @_; return _ats2plpre_stream_patsfun_12($cenv->[1], $cenv->[2]); }, $env0, $env1];
}

sub
_ats2plpre_stream_patsfun_14__closurerize($$)
{
  my($env0, $env1) = @_;
  return [sub{ my($cenv) = @_; return _ats2plpre_stream_patsfun_14($cenv->[1], $cenv->[2]); }, $env0, $env1];
}

sub
_ats2plpre_stream_patsfun_20__closurerize($$)
{
  my($env0, $env1) = @_;
  return [sub{ my($cenv) = @_; return _ats2plpre_stream_patsfun_20($cenv->[1], $cenv->[2]); }, $env0, $env1];
}

sub
_ats2plpre_stream_patsfun_22__closurerize($)
{
  my($env0) = @_;
  return [sub{ my($cenv) = @_; return _ats2plpre_stream_patsfun_22($cenv->[1]); }, $env0];
}

sub
_ats2plpre_stream_patsfun_24__closurerize($$)
{
  my($env0, $env1) = @_;
  return [sub{ my($cenv) = @_; return _ats2plpre_stream_patsfun_24($cenv->[1], $cenv->[2]); }, $env0, $env1];
}

sub
_ats2plpre_stream_patsfun_26__closurerize($)
{
  my($env0) = @_;
  return [sub{ my($cenv, $arg0) = @_; return _ats2plpre_stream_patsfun_26($cenv->[1], $arg0); }, $env0];
}

sub
_ats2plpre_stream_patsfun_28__closurerize($$)
{
  my($env0, $env1) = @_;
  return [sub{ my($cenv) = @_; return _ats2plpre_stream_patsfun_28($cenv->[1], $cenv->[2]); }, $env0, $env1];
}

sub
_ats2plpre_stream_patsfun_30__closurerize($)
{
  my($env0) = @_;
  return [sub{ my($cenv, $arg0) = @_; return _ats2plpre_stream_patsfun_30($cenv->[1], $arg0); }, $env0];
}

sub
_ats2plpre_stream_patsfun_33__closurerize($)
{
  my($env0) = @_;
  return [sub{ my($cenv, $arg0) = @_; return _ats2plpre_stream_patsfun_33($cenv->[1], $arg0); }, $env0];
}

sub
_ats2plpre_stream_patsfun_36__closurerize($)
{
  my($env0) = @_;
  return [sub{ my($cenv, $arg0) = @_; return _ats2plpre_stream_patsfun_36($cenv->[1], $arg0); }, $env0];
}

sub
_ats2plpre_stream_patsfun_39__closurerize($)
{
  my($env0) = @_;
  return [sub{ my($cenv, $arg0) = @_; return _ats2plpre_stream_patsfun_39($cenv->[1], $arg0); }, $env0];
}

sub
_ats2plpre_stream_patsfun_43__closurerize($)
{
  my($env0) = @_;
  return [sub{ my($cenv, $arg0) = @_; return _ats2plpre_stream_patsfun_43($cenv->[1], $arg0); }, $env0];
}

sub
_ats2plpre_stream_patsfun_46__closurerize($$)
{
  my($env0, $env1) = @_;
  return [sub{ my($cenv) = @_; return _ats2plpre_stream_patsfun_46($cenv->[1], $cenv->[2]); }, $env0, $env1];
}

sub
_ats2plpre_stream_patsfun_49__closurerize($$$$)
{
  my($env0, $env1, $env2, $env3) = @_;
  return [sub{ my($cenv) = @_; return _ats2plpre_stream_patsfun_49($cenv->[1], $cenv->[2], $cenv->[3], $cenv->[4]); }, $env0, $env1, $env2, $env3];
}

sub
_ats2plpre_stream_patsfun_50__closurerize($$)
{
  my($env0, $env1) = @_;
  return [sub{ my($cenv) = @_; return _ats2plpre_stream_patsfun_50($cenv->[1], $cenv->[2]); }, $env0, $env1];
}

sub
_ats2plpre_stream_patsfun_53__closurerize($)
{
  my($env0) = @_;
  return [sub{ my($cenv) = @_; return _ats2plpre_stream_patsfun_53($cenv->[1]); }, $env0];
}

sub
_ats2plpre_stream_patsfun_55__closurerize($)
{
  my($env0) = @_;
  return [sub{ my($cenv) = @_; return _ats2plpre_stream_patsfun_55($cenv->[1]); }, $env0];
}

sub
_ats2plpre_stream_patsfun_57__closurerize($$)
{
  my($env0, $env1) = @_;
  return [sub{ my($cenv) = @_; return _ats2plpre_stream_patsfun_57($cenv->[1], $cenv->[2]); }, $env0, $env1];
}

sub
_ats2plpre_stream_patsfun_62__closurerize($)
{
  my($env0) = @_;
  return [sub{ my($cenv, $arg0, $arg1) = @_; return _ats2plpre_stream_patsfun_62($cenv->[1], $arg0, $arg1); }, $env0];
}

sub
_ats2plpre_stream_patsfun_64__closurerize($)
{
  my($env0) = @_;
  return [sub{ my($cenv, $arg0, $arg1) = @_; return _ats2plpre_stream_patsfun_64($cenv->[1], $arg0, $arg1); }, $env0];
}

sub
_ats2plpre_stream_patsfun_67__closurerize($$)
{
  my($env0, $env1) = @_;
  return [sub{ my($cenv) = @_; return _ats2plpre_stream_patsfun_67($cenv->[1], $cenv->[2]); }, $env0, $env1];
}

sub
_ats2plpre_stream_patsfun_69__closurerize($$)
{
  my($env0, $env1) = @_;
  return [sub{ my($cenv) = @_; return _ats2plpre_stream_patsfun_69($cenv->[1], $cenv->[2]); }, $env0, $env1];
}


sub
ats2plpre_stream_make_list($)
{
##
  my($arg0) = @_;
##
  my $tmpret5;
##
  __patsflab_stream_make_list:
  $tmpret5 = ATSPMVlazyval(_ats2plpre_stream_patsfun_5__closurerize($arg0));
  return $tmpret5;
} #end-of-function


sub
_ats2plpre_stream_patsfun_5($)
{
##
  my($env0) = @_;
##
  my $tmpret6;
  my $tmp7;
  my $tmp8;
  my $tmp9;
##
  __patsflab__ats2plpre_stream_patsfun_5:
  #ATScaseofseq_beg
  while(1)
  {
    #ATSbranchseq_beg
    __atstmplab0:
    if(ATSCKptriscons($env0)) { goto __atstmplab3; }
    __atstmplab1:
    $tmpret6 = 0;
    last;
    #ATSbranchseq_end
    #ATSbranchseq_beg
    __atstmplab2:
    __atstmplab3:
    $tmp7 = $env0->[0];
    $tmp8 = $env0->[1];
    $tmp9 = ats2plpre_stream_make_list($tmp8);
    $tmpret6 = [$tmp7, $tmp9];
    last;
    #ATSbranchseq_end
  } #end-of-while-loop;
  #ATScaseofseq_end
  return $tmpret6;
} #end-of-function


sub
ats2plpre_stream_make_list0($)
{
##
  my($arg0) = @_;
##
  my $tmpret10;
##
  __patsflab_stream_make_list0:
  $tmpret10 = ats2plpre_stream_make_list($arg0);
  return $tmpret10;
} #end-of-function


sub
ats2plpre_stream_nth_opt($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret11;
##
  __patsflab_stream_nth_opt:
  $tmpret11 = _ats2plpre_stream_loop_8($arg0, $arg1);
  return $tmpret11;
} #end-of-function


sub
_ats2plpre_stream_loop_8($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $apy0;
  my $apy1;
  my $tmpret12;
  my $tmp13;
  my $tmp14;
  my $tmp15;
  my $tmp16;
  my $tmp17;
##
  __patsflab__ats2plpre_stream_loop_8:
  $tmp13 = ATSPMVlazyval_eval($arg0); 
  #ATScaseofseq_beg
  while(1)
  {
    #ATSbranchseq_beg
    __atstmplab4:
    if(ATSCKptriscons($tmp13)) { goto __atstmplab7; }
    __atstmplab5:
    $tmpret12 = 0;
    last;
    #ATSbranchseq_end
    #ATSbranchseq_beg
    __atstmplab6:
    __atstmplab7:
    $tmp14 = $tmp13->[0];
    $tmp15 = $tmp13->[1];
    $tmp16 = ats2plpre_gt_int1_int1($arg1, 0);
    if($tmp16) {
      $tmp17 = ats2plpre_pred_int1($arg1);
      #ATStailcalseq_beg
      $apy0 = $tmp15;
      $apy1 = $tmp17;
      $arg0 = $apy0;
      $arg1 = $apy1;
      goto __patsflab__ats2plpre_stream_loop_8;
      #ATStailcalseq_end
    } else {
      $tmpret12 = [$tmp14];
    } #endif
    last;
    #ATSbranchseq_end
  } #end-of-while-loop;
  #ATScaseofseq_end
  return $tmpret12;
} #end-of-function


sub
ats2plpre_stream_length($)
{
##
  my($arg0) = @_;
##
  my $tmpret18;
##
  __patsflab_stream_length:
  $tmpret18 = _ats2plpre_stream_loop_10($arg0, 0);
  return $tmpret18;
} #end-of-function


sub
_ats2plpre_stream_loop_10($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $apy0;
  my $apy1;
  my $tmpret19;
  my $tmp20;
  my $tmp22;
  my $tmp23;
##
  __patsflab__ats2plpre_stream_loop_10:
  $tmp20 = ATSPMVlazyval_eval($arg0); 
  #ATScaseofseq_beg
  while(1)
  {
    #ATSbranchseq_beg
    __atstmplab8:
    if(ATSCKptriscons($tmp20)) { goto __atstmplab11; }
    __atstmplab9:
    $tmpret19 = $arg1;
    last;
    #ATSbranchseq_end
    #ATSbranchseq_beg
    __atstmplab10:
    __atstmplab11:
    $tmp22 = $tmp20->[1];
    $tmp23 = ats2plpre_add_int1_int1($arg1, 1);
    #ATStailcalseq_beg
    $apy0 = $tmp22;
    $apy1 = $tmp23;
    $arg0 = $apy0;
    $arg1 = $apy1;
    goto __patsflab__ats2plpre_stream_loop_10;
    #ATStailcalseq_end
    last;
    #ATSbranchseq_end
  } #end-of-while-loop;
  #ATScaseofseq_end
  return $tmpret19;
} #end-of-function


sub
ats2plpre_stream_takeLte($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret24;
##
  __patsflab_stream_takeLte:
  $tmpret24 = ATSPMVlazyval(_ats2plpre_stream_patsfun_12__closurerize($arg0, $arg1));
  return $tmpret24;
} #end-of-function


sub
_ats2plpre_stream_patsfun_12($$)
{
##
  my($env0, $env1) = @_;
##
  my $tmpret25;
  my $tmp26;
  my $tmp27;
  my $tmp28;
  my $tmp29;
  my $tmp30;
  my $tmp31;
##
  __patsflab__ats2plpre_stream_patsfun_12:
  $tmp26 = ats2plpre_gt_int1_int1($env1, 0);
  if($tmp26) {
    $tmp27 = ATSPMVlazyval_eval($env0); 
    #ATScaseofseq_beg
    while(1)
    {
      #ATSbranchseq_beg
      __atstmplab12:
      if(ATSCKptriscons($tmp27)) { goto __atstmplab15; }
      __atstmplab13:
      $tmpret25 = 0;
      last;
      #ATSbranchseq_end
      #ATSbranchseq_beg
      __atstmplab14:
      __atstmplab15:
      $tmp28 = $tmp27->[0];
      $tmp29 = $tmp27->[1];
      $tmp31 = ats2plpre_sub_int1_int1($env1, 1);
      $tmp30 = ats2plpre_stream_takeLte($tmp29, $tmp31);
      $tmpret25 = [$tmp28, $tmp30];
      last;
      #ATSbranchseq_end
    } #end-of-while-loop;
    #ATScaseofseq_end
  } else {
    $tmpret25 = 0;
  } #endif
  return $tmpret25;
} #end-of-function


sub
ats2plpre_stream_dropLte($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret32;
##
  __patsflab_stream_dropLte:
  $tmpret32 = ATSPMVlazyval(_ats2plpre_stream_patsfun_14__closurerize($arg0, $arg1));
  return $tmpret32;
} #end-of-function


sub
_ats2plpre_stream_patsfun_14($$)
{
##
  my($env0, $env1) = @_;
##
  my $tmpret33;
  my $tmp34;
  my $tmp35;
  my $tmp37;
  my $tmp38;
  my $tmp39;
##
  __patsflab__ats2plpre_stream_patsfun_14:
  $tmp34 = ats2plpre_gt_int1_int1($env1, 0);
  if($tmp34) {
    $tmp35 = ATSPMVlazyval_eval($env0); 
    #ATScaseofseq_beg
    while(1)
    {
      #ATSbranchseq_beg
      __atstmplab16:
      if(ATSCKptriscons($tmp35)) { goto __atstmplab19; }
      __atstmplab17:
      $tmpret33 = 0;
      last;
      #ATSbranchseq_end
      #ATSbranchseq_beg
      __atstmplab18:
      __atstmplab19:
      $tmp37 = $tmp35->[1];
      $tmp39 = ats2plpre_sub_int1_int1($env1, 1);
      $tmp38 = ats2plpre_stream_dropLte($tmp37, $tmp39);
      $tmpret33 = ATSPMVlazyval_eval($tmp38); 
      last;
      #ATSbranchseq_end
    } #end-of-while-loop;
    #ATScaseofseq_end
  } else {
    $tmpret33 = ATSPMVlazyval_eval($env0); 
  } #endif
  return $tmpret33;
} #end-of-function


sub
ats2plpre_stream_take_opt($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret40;
  my $tmp49;
##
  __patsflab_stream_take_opt:
  $tmp49 = 0;
  $tmpret40 = _ats2plpre_stream_auxmain_16($arg1, $arg0, 0, $tmp49);
  return $tmpret40;
} #end-of-function


sub
_ats2plpre_stream_auxmain_16($$$$)
{
##
  my($env0, $arg0, $arg1, $arg2) = @_;
##
  my $apy0;
  my $apy1;
  my $apy2;
  my $tmpret41;
  my $tmp42;
  my $tmp43;
  my $tmp44;
  my $tmp45;
  my $tmp46;
  my $tmp47;
  my $tmp48;
##
  __patsflab__ats2plpre_stream_auxmain_16:
  $tmp42 = ats2plpre_lt_int1_int1($arg1, $env0);
  if($tmp42) {
    $tmp43 = ATSPMVlazyval_eval($arg0); 
    #ATScaseofseq_beg
    while(1)
    {
      #ATSbranchseq_beg
      __atstmplab20:
      if(ATSCKptriscons($tmp43)) { goto __atstmplab23; }
      __atstmplab21:
      $tmpret41 = 0;
      last;
      #ATSbranchseq_end
      #ATSbranchseq_beg
      __atstmplab22:
      __atstmplab23:
      $tmp44 = $tmp43->[0];
      $tmp45 = $tmp43->[1];
      $tmp46 = ats2plpre_add_int1_int1($arg1, 1);
      $tmp47 = [$tmp44, $arg2];
      #ATStailcalseq_beg
      $apy0 = $tmp45;
      $apy1 = $tmp46;
      $apy2 = $tmp47;
      $arg0 = $apy0;
      $arg1 = $apy1;
      $arg2 = $apy2;
      goto __patsflab__ats2plpre_stream_auxmain_16;
      #ATStailcalseq_end
      last;
      #ATSbranchseq_end
    } #end-of-while-loop;
    #ATScaseofseq_end
  } else {
    $tmp48 = ats2plpre_list_reverse($arg2);
    $tmpret41 = [$tmp48];
  } #endif
  return $tmpret41;
} #end-of-function


sub
ats2plpre_stream_drop_opt($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret50;
##
  __patsflab_stream_drop_opt:
  $tmpret50 = _ats2plpre_stream_auxmain_18($arg1, $arg0, 0);
  return $tmpret50;
} #end-of-function


sub
_ats2plpre_stream_auxmain_18($$$)
{
##
  my($env0, $arg0, $arg1) = @_;
##
  my $apy0;
  my $apy1;
  my $tmpret51;
  my $tmp52;
  my $tmp53;
  my $tmp55;
  my $tmp56;
##
  __patsflab__ats2plpre_stream_auxmain_18:
  $tmp52 = ats2plpre_lt_int1_int1($arg1, $env0);
  if($tmp52) {
    $tmp53 = ATSPMVlazyval_eval($arg0); 
    #ATScaseofseq_beg
    while(1)
    {
      #ATSbranchseq_beg
      __atstmplab24:
      if(ATSCKptriscons($tmp53)) { goto __atstmplab27; }
      __atstmplab25:
      $tmpret51 = 0;
      last;
      #ATSbranchseq_end
      #ATSbranchseq_beg
      __atstmplab26:
      __atstmplab27:
      $tmp55 = $tmp53->[1];
      $tmp56 = ats2plpre_add_int1_int1($arg1, 1);
      #ATStailcalseq_beg
      $apy0 = $tmp55;
      $apy1 = $tmp56;
      $arg0 = $apy0;
      $arg1 = $apy1;
      goto __patsflab__ats2plpre_stream_auxmain_18;
      #ATStailcalseq_end
      last;
      #ATSbranchseq_end
    } #end-of-while-loop;
    #ATScaseofseq_end
  } else {
    $tmpret51 = [$arg0];
  } #endif
  return $tmpret51;
} #end-of-function


sub
ats2plpre_stream_append($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret57;
##
  __patsflab_stream_append:
  $tmpret57 = ATSPMVlazyval(_ats2plpre_stream_patsfun_20__closurerize($arg0, $arg1));
  return $tmpret57;
} #end-of-function


sub
_ats2plpre_stream_patsfun_20($$)
{
##
  my($env0, $env1) = @_;
##
  my $tmpret58;
  my $tmp59;
  my $tmp60;
  my $tmp61;
  my $tmp62;
##
  __patsflab__ats2plpre_stream_patsfun_20:
  $tmp59 = ATSPMVlazyval_eval($env0); 
  #ATScaseofseq_beg
  while(1)
  {
    #ATSbranchseq_beg
    __atstmplab28:
    if(ATSCKptriscons($tmp59)) { goto __atstmplab31; }
    __atstmplab29:
    $tmpret58 = ATSPMVlazyval_eval($env1); 
    last;
    #ATSbranchseq_end
    #ATSbranchseq_beg
    __atstmplab30:
    __atstmplab31:
    $tmp60 = $tmp59->[0];
    $tmp61 = $tmp59->[1];
    $tmp62 = ats2plpre_stream_append($tmp61, $env1);
    $tmpret58 = [$tmp60, $tmp62];
    last;
    #ATSbranchseq_end
  } #end-of-while-loop;
  #ATScaseofseq_end
  return $tmpret58;
} #end-of-function


sub
ats2plpre_stream_concat($)
{
##
  my($arg0) = @_;
##
  my $tmpret63;
##
  __patsflab_stream_concat:
  $tmpret63 = ATSPMVlazyval(_ats2plpre_stream_patsfun_22__closurerize($arg0));
  return $tmpret63;
} #end-of-function


sub
_ats2plpre_stream_patsfun_22($)
{
##
  my($env0) = @_;
##
  my $tmpret64;
  my $tmp65;
  my $tmp66;
  my $tmp67;
  my $tmp68;
  my $tmp69;
##
  __patsflab__ats2plpre_stream_patsfun_22:
  $tmp65 = ATSPMVlazyval_eval($env0); 
  #ATScaseofseq_beg
  while(1)
  {
    #ATSbranchseq_beg
    __atstmplab32:
    if(ATSCKptriscons($tmp65)) { goto __atstmplab35; }
    __atstmplab33:
    $tmpret64 = 0;
    last;
    #ATSbranchseq_end
    #ATSbranchseq_beg
    __atstmplab34:
    __atstmplab35:
    $tmp66 = $tmp65->[0];
    $tmp67 = $tmp65->[1];
    $tmp69 = ats2plpre_stream_concat($tmp67);
    $tmp68 = ats2plpre_stream_append($tmp66, $tmp69);
    $tmpret64 = ATSPMVlazyval_eval($tmp68); 
    last;
    #ATSbranchseq_end
  } #end-of-while-loop;
  #ATScaseofseq_end
  return $tmpret64;
} #end-of-function


sub
ats2plpre_stream_map_cloref($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret70;
##
  __patsflab_stream_map_cloref:
  $tmpret70 = ATSPMVlazyval(_ats2plpre_stream_patsfun_24__closurerize($arg0, $arg1));
  return $tmpret70;
} #end-of-function


sub
_ats2plpre_stream_patsfun_24($$)
{
##
  my($env0, $env1) = @_;
##
  my $tmpret71;
  my $tmp72;
  my $tmp73;
  my $tmp74;
  my $tmp75;
  my $tmp76;
##
  __patsflab__ats2plpre_stream_patsfun_24:
  $tmp72 = ATSPMVlazyval_eval($env0); 
  #ATScaseofseq_beg
  while(1)
  {
    #ATSbranchseq_beg
    __atstmplab36:
    if(ATSCKptriscons($tmp72)) { goto __atstmplab39; }
    __atstmplab37:
    $tmpret71 = 0;
    last;
    #ATSbranchseq_end
    #ATSbranchseq_beg
    __atstmplab38:
    __atstmplab39:
    $tmp73 = $tmp72->[0];
    $tmp74 = $tmp72->[1];
    $tmp75 = &{$env1->[0]}($env1, $tmp73);
    $tmp76 = ats2plpre_stream_map_cloref($tmp74, $env1);
    $tmpret71 = [$tmp75, $tmp76];
    last;
    #ATSbranchseq_end
  } #end-of-while-loop;
  #ATScaseofseq_end
  return $tmpret71;
} #end-of-function


sub
ats2plpre_stream_map_method($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret77;
##
  __patsflab_stream_map_method:
  $tmpret77 = _ats2plpre_stream_patsfun_26__closurerize($arg0);
  return $tmpret77;
} #end-of-function


sub
_ats2plpre_stream_patsfun_26($$)
{
##
  my($env0, $arg0) = @_;
##
  my $tmpret78;
##
  __patsflab__ats2plpre_stream_patsfun_26:
  $tmpret78 = ats2plpre_stream_map_cloref($env0, $arg0);
  return $tmpret78;
} #end-of-function


sub
ats2plpre_stream_filter_cloref($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret79;
##
  __patsflab_stream_filter_cloref:
  $tmpret79 = ATSPMVlazyval(_ats2plpre_stream_patsfun_28__closurerize($arg0, $arg1));
  return $tmpret79;
} #end-of-function


sub
_ats2plpre_stream_patsfun_28($$)
{
##
  my($env0, $env1) = @_;
##
  my $tmpret80;
  my $tmp81;
  my $tmp82;
  my $tmp83;
  my $tmp84;
  my $tmp85;
  my $tmp86;
##
  __patsflab__ats2plpre_stream_patsfun_28:
  $tmp81 = ATSPMVlazyval_eval($env0); 
  #ATScaseofseq_beg
  while(1)
  {
    #ATSbranchseq_beg
    __atstmplab40:
    if(ATSCKptriscons($tmp81)) { goto __atstmplab43; }
    __atstmplab41:
    $tmpret80 = 0;
    last;
    #ATSbranchseq_end
    #ATSbranchseq_beg
    __atstmplab42:
    __atstmplab43:
    $tmp82 = $tmp81->[0];
    $tmp83 = $tmp81->[1];
    $tmp84 = &{$env1->[0]}($env1, $tmp82);
    if($tmp84) {
      $tmp85 = ats2plpre_stream_filter_cloref($tmp83, $env1);
      $tmpret80 = [$tmp82, $tmp85];
    } else {
      $tmp86 = ats2plpre_stream_filter_cloref($tmp83, $env1);
      $tmpret80 = ATSPMVlazyval_eval($tmp86); 
    } #endif
    last;
    #ATSbranchseq_end
  } #end-of-while-loop;
  #ATScaseofseq_end
  return $tmpret80;
} #end-of-function


sub
ats2plpre_stream_filter_method($)
{
##
  my($arg0) = @_;
##
  my $tmpret87;
##
  __patsflab_stream_filter_method:
  $tmpret87 = _ats2plpre_stream_patsfun_30__closurerize($arg0);
  return $tmpret87;
} #end-of-function


sub
_ats2plpre_stream_patsfun_30($$)
{
##
  my($env0, $arg0) = @_;
##
  my $tmpret88;
##
  __patsflab__ats2plpre_stream_patsfun_30:
  $tmpret88 = ats2plpre_stream_filter_cloref($env0, $arg0);
  return $tmpret88;
} #end-of-function


sub
ats2plpre_stream_forall_cloref($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $apy0;
  my $apy1;
  my $tmpret89;
  my $tmp90;
  my $tmp91;
  my $tmp92;
  my $tmp93;
##
  __patsflab_stream_forall_cloref:
  $tmp90 = ATSPMVlazyval_eval($arg0); 
  #ATScaseofseq_beg
  while(1)
  {
    #ATSbranchseq_beg
    __atstmplab44:
    if(ATSCKptriscons($tmp90)) { goto __atstmplab47; }
    __atstmplab45:
    $tmpret89 = 1;
    last;
    #ATSbranchseq_end
    #ATSbranchseq_beg
    __atstmplab46:
    __atstmplab47:
    $tmp91 = $tmp90->[0];
    $tmp92 = $tmp90->[1];
    $tmp93 = &{$arg1->[0]}($arg1, $tmp91);
    if($tmp93) {
      #ATStailcalseq_beg
      $apy0 = $tmp92;
      $apy1 = $arg1;
      $arg0 = $apy0;
      $arg1 = $apy1;
      goto __patsflab_stream_forall_cloref;
      #ATStailcalseq_end
    } else {
      $tmpret89 = 0;
    } #endif
    last;
    #ATSbranchseq_end
  } #end-of-while-loop;
  #ATScaseofseq_end
  return $tmpret89;
} #end-of-function


sub
ats2plpre_stream_forall_method($)
{
##
  my($arg0) = @_;
##
  my $tmpret94;
##
  __patsflab_stream_forall_method:
  $tmpret94 = _ats2plpre_stream_patsfun_33__closurerize($arg0);
  return $tmpret94;
} #end-of-function


sub
_ats2plpre_stream_patsfun_33($$)
{
##
  my($env0, $arg0) = @_;
##
  my $tmpret95;
##
  __patsflab__ats2plpre_stream_patsfun_33:
  $tmpret95 = ats2plpre_stream_forall_cloref($env0, $arg0);
  return $tmpret95;
} #end-of-function


sub
ats2plpre_stream_exists_cloref($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $apy0;
  my $apy1;
  my $tmpret96;
  my $tmp97;
  my $tmp98;
  my $tmp99;
  my $tmp100;
##
  __patsflab_stream_exists_cloref:
  $tmp97 = ATSPMVlazyval_eval($arg0); 
  #ATScaseofseq_beg
  while(1)
  {
    #ATSbranchseq_beg
    __atstmplab48:
    if(ATSCKptriscons($tmp97)) { goto __atstmplab51; }
    __atstmplab49:
    $tmpret96 = 0;
    last;
    #ATSbranchseq_end
    #ATSbranchseq_beg
    __atstmplab50:
    __atstmplab51:
    $tmp98 = $tmp97->[0];
    $tmp99 = $tmp97->[1];
    $tmp100 = &{$arg1->[0]}($arg1, $tmp98);
    if($tmp100) {
      $tmpret96 = 1;
    } else {
      #ATStailcalseq_beg
      $apy0 = $tmp99;
      $apy1 = $arg1;
      $arg0 = $apy0;
      $arg1 = $apy1;
      goto __patsflab_stream_exists_cloref;
      #ATStailcalseq_end
    } #endif
    last;
    #ATSbranchseq_end
  } #end-of-while-loop;
  #ATScaseofseq_end
  return $tmpret96;
} #end-of-function


sub
ats2plpre_stream_exists_method($)
{
##
  my($arg0) = @_;
##
  my $tmpret101;
##
  __patsflab_stream_exists_method:
  $tmpret101 = _ats2plpre_stream_patsfun_36__closurerize($arg0);
  return $tmpret101;
} #end-of-function


sub
_ats2plpre_stream_patsfun_36($$)
{
##
  my($env0, $arg0) = @_;
##
  my $tmpret102;
##
  __patsflab__ats2plpre_stream_patsfun_36:
  $tmpret102 = ats2plpre_stream_exists_cloref($env0, $arg0);
  return $tmpret102;
} #end-of-function


sub
ats2plpre_stream_foreach_cloref($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $apy0;
  my $apy1;
  my $tmp104;
  my $tmp105;
  my $tmp106;
##
  __patsflab_stream_foreach_cloref:
  $tmp104 = ATSPMVlazyval_eval($arg0); 
  #ATScaseofseq_beg
  while(1)
  {
    #ATSbranchseq_beg
    __atstmplab52:
    if(ATSCKptriscons($tmp104)) { goto __atstmplab55; }
    __atstmplab53:
    #ATSINSmove_void;
    last;
    #ATSbranchseq_end
    #ATSbranchseq_beg
    __atstmplab54:
    __atstmplab55:
    $tmp105 = $tmp104->[0];
    $tmp106 = $tmp104->[1];
    &{$arg1->[0]}($arg1, $tmp105);
    #ATStailcalseq_beg
    $apy0 = $tmp106;
    $apy1 = $arg1;
    $arg0 = $apy0;
    $arg1 = $apy1;
    goto __patsflab_stream_foreach_cloref;
    #ATStailcalseq_end
    last;
    #ATSbranchseq_end
  } #end-of-while-loop;
  #ATScaseofseq_end
  return;#_void
} #end-of-function


sub
ats2plpre_stream_foreach_method($)
{
##
  my($arg0) = @_;
##
  my $tmpret108;
##
  __patsflab_stream_foreach_method:
  $tmpret108 = _ats2plpre_stream_patsfun_39__closurerize($arg0);
  return $tmpret108;
} #end-of-function


sub
_ats2plpre_stream_patsfun_39($$)
{
##
  my($env0, $arg0) = @_;
##
##
  __patsflab__ats2plpre_stream_patsfun_39:
  ats2plpre_stream_foreach_cloref($env0, $arg0);
  return;#_void
} #end-of-function


sub
ats2plpre_stream_iforeach_cloref($$)
{
##
  my($arg0, $arg1) = @_;
##
##
  __patsflab_stream_iforeach_cloref:
  _ats2plpre_stream_loop_41($arg1, 0, $arg0);
  return;#_void
} #end-of-function


sub
_ats2plpre_stream_loop_41($$$)
{
##
  my($env0, $arg0, $arg1) = @_;
##
  my $apy0;
  my $apy1;
  my $tmp112;
  my $tmp113;
  my $tmp114;
  my $tmp116;
##
  __patsflab__ats2plpre_stream_loop_41:
  $tmp112 = ATSPMVlazyval_eval($arg1); 
  #ATScaseofseq_beg
  while(1)
  {
    #ATSbranchseq_beg
    __atstmplab56:
    if(ATSCKptriscons($tmp112)) { goto __atstmplab59; }
    __atstmplab57:
    #ATSINSmove_void;
    last;
    #ATSbranchseq_end
    #ATSbranchseq_beg
    __atstmplab58:
    __atstmplab59:
    $tmp113 = $tmp112->[0];
    $tmp114 = $tmp112->[1];
    &{$env0->[0]}($env0, $arg0, $tmp113);
    $tmp116 = ats2plpre_add_int1_int1($arg0, 1);
    #ATStailcalseq_beg
    $apy0 = $tmp116;
    $apy1 = $tmp114;
    $arg0 = $apy0;
    $arg1 = $apy1;
    goto __patsflab__ats2plpre_stream_loop_41;
    #ATStailcalseq_end
    last;
    #ATSbranchseq_end
  } #end-of-while-loop;
  #ATScaseofseq_end
  return;#_void
} #end-of-function


sub
ats2plpre_stream_iforeach_method($)
{
##
  my($arg0) = @_;
##
  my $tmpret117;
##
  __patsflab_stream_iforeach_method:
  $tmpret117 = _ats2plpre_stream_patsfun_43__closurerize($arg0);
  return $tmpret117;
} #end-of-function


sub
_ats2plpre_stream_patsfun_43($$)
{
##
  my($env0, $arg0) = @_;
##
##
  __patsflab__ats2plpre_stream_patsfun_43:
  ats2plpre_stream_iforeach_cloref($env0, $arg0);
  return;#_void
} #end-of-function


sub
ats2plpre_stream_tabulate_cloref($)
{
##
  my($arg0) = @_;
##
  my $tmpret119;
##
  __patsflab_stream_tabulate_cloref:
  $tmpret119 = _ats2plpre_stream_auxmain_45($arg0, 0);
  return $tmpret119;
} #end-of-function


sub
_ats2plpre_stream_auxmain_45($$)
{
##
  my($env0, $arg0) = @_;
##
  my $tmpret120;
##
  __patsflab__ats2plpre_stream_auxmain_45:
  $tmpret120 = ATSPMVlazyval(_ats2plpre_stream_patsfun_46__closurerize($env0, $arg0));
  return $tmpret120;
} #end-of-function


sub
_ats2plpre_stream_patsfun_46($$)
{
##
  my($env0, $env1) = @_;
##
  my $tmpret121;
  my $tmp122;
  my $tmp123;
  my $tmp124;
##
  __patsflab__ats2plpre_stream_patsfun_46:
  $tmp122 = &{$env0->[0]}($env0, $env1);
  $tmp124 = ats2plpre_add_int1_int1($env1, 1);
  $tmp123 = _ats2plpre_stream_auxmain_45($env0, $tmp124);
  $tmpret121 = [$tmp122, $tmp123];
  return $tmpret121;
} #end-of-function


sub
ats2plpre_cross_stream_list($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret125;
##
  __patsflab_cross_stream_list:
  $tmpret125 = ATSPMVlazyval(_ats2plpre_stream_patsfun_50__closurerize($arg0, $arg1));
  return $tmpret125;
} #end-of-function


sub
_ats2plpre_stream_auxmain_48($$$$)
{
##
  my($arg0, $arg1, $arg2, $arg3) = @_;
##
  my $tmpret126;
##
  __patsflab__ats2plpre_stream_auxmain_48:
  $tmpret126 = ATSPMVlazyval(_ats2plpre_stream_patsfun_49__closurerize($arg0, $arg1, $arg2, $arg3));
  return $tmpret126;
} #end-of-function


sub
_ats2plpre_stream_patsfun_49($$$$)
{
##
  my($env0, $env1, $env2, $env3) = @_;
##
  my $tmpret127;
  my $tmp128;
  my $tmp129;
  my $tmp130;
  my $tmp131;
  my $tmp132;
##
  __patsflab__ats2plpre_stream_patsfun_49:
  #ATScaseofseq_beg
  while(1)
  {
    #ATSbranchseq_beg
    __atstmplab60:
    if(ATSCKptriscons($env3)) { goto __atstmplab63; }
    __atstmplab61:
    $tmp130 = ats2plpre_cross_stream_list($env1, $env2);
    $tmpret127 = ATSPMVlazyval_eval($tmp130); 
    last;
    #ATSbranchseq_end
    #ATSbranchseq_beg
    __atstmplab62:
    __atstmplab63:
    $tmp128 = $env3->[0];
    $tmp129 = $env3->[1];
    $tmp131 = [$env0, $tmp128];
    $tmp132 = _ats2plpre_stream_auxmain_48($env0, $env1, $env2, $tmp129);
    $tmpret127 = [$tmp131, $tmp132];
    last;
    #ATSbranchseq_end
  } #end-of-while-loop;
  #ATScaseofseq_end
  return $tmpret127;
} #end-of-function


sub
_ats2plpre_stream_patsfun_50($$)
{
##
  my($env0, $env1) = @_;
##
  my $tmpret133;
  my $tmp134;
  my $tmp135;
  my $tmp136;
  my $tmp137;
##
  __patsflab__ats2plpre_stream_patsfun_50:
  $tmp134 = ATSPMVlazyval_eval($env0); 
  #ATScaseofseq_beg
  while(1)
  {
    #ATSbranchseq_beg
    __atstmplab64:
    if(ATSCKptriscons($tmp134)) { goto __atstmplab67; }
    __atstmplab65:
    $tmpret133 = 0;
    last;
    #ATSbranchseq_end
    #ATSbranchseq_beg
    __atstmplab66:
    if(ATSCKptrisnull($tmp134)) { ATSINScaseof_fail("/home/hwxi/Research/ATS-Postiats-contrib/contrib/libatscc/DATS/stream.dats: 6587(line=420, offs=1) -- 6679(line=422, offs=50)"); }
    __atstmplab67:
    $tmp135 = $tmp134->[0];
    $tmp136 = $tmp134->[1];
    $tmp137 = _ats2plpre_stream_auxmain_48($tmp135, $tmp136, $env1, $env1);
    $tmpret133 = ATSPMVlazyval_eval($tmp137); 
    last;
    #ATSbranchseq_end
  } #end-of-while-loop;
  #ATScaseofseq_end
  return $tmpret133;
} #end-of-function


sub
ats2plpre_cross_stream_list0($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret138;
##
  __patsflab_cross_stream_list0:
  $tmpret138 = ats2plpre_cross_stream_list($arg0, $arg1);
  return $tmpret138;
} #end-of-function


sub
ats2plpre_stream2cloref_exn($)
{
##
  my($arg0) = @_;
##
  my $tmpret139;
  my $tmp140;
##
  __patsflab_stream2cloref_exn:
  $tmp140 = ats2plpre_ref($arg0);
  $tmpret139 = _ats2plpre_stream_patsfun_53__closurerize($tmp140);
  return $tmpret139;
} #end-of-function


sub
_ats2plpre_stream_patsfun_53($)
{
##
  my($env0) = @_;
##
  my $tmpret141;
  my $tmp142;
  my $tmp143;
  my $tmp144;
  my $tmp145;
##
  __patsflab__ats2plpre_stream_patsfun_53:
  $tmp142 = ats2plpre_ref_get_elt($env0);
  $tmp143 = ATSPMVlazyval_eval($tmp142); 
  if(ATSCKptrisnull($tmp143)) { ATSINScaseof_fail("/home/hwxi/Research/ATS-Postiats-contrib/contrib/libatscc/DATS/stream.dats: 6980(line=448, offs=5) -- 7004(line=448, offs=29)"); }
  $tmp144 = $tmp143->[0];
  $tmp145 = $tmp143->[1];
  ats2plpre_ref_set_elt($env0, $tmp145);
  $tmpret141 = $tmp144;
  return $tmpret141;
} #end-of-function


sub
ats2plpre_stream2cloref_opt($)
{
##
  my($arg0) = @_;
##
  my $tmpret147;
  my $tmp148;
##
  __patsflab_stream2cloref_opt:
  $tmp148 = ats2plpre_ref($arg0);
  $tmpret147 = _ats2plpre_stream_patsfun_55__closurerize($tmp148);
  return $tmpret147;
} #end-of-function


sub
_ats2plpre_stream_patsfun_55($)
{
##
  my($env0) = @_;
##
  my $tmpret149;
  my $tmp150;
  my $tmp151;
  my $tmp152;
  my $tmp153;
##
  __patsflab__ats2plpre_stream_patsfun_55:
  $tmp150 = ats2plpre_ref_get_elt($env0);
  $tmp151 = ATSPMVlazyval_eval($tmp150); 
  #ATScaseofseq_beg
  while(1)
  {
    #ATSbranchseq_beg
    __atstmplab68:
    if(ATSCKptriscons($tmp151)) { goto __atstmplab71; }
    __atstmplab69:
    $tmpret149 = 0;
    last;
    #ATSbranchseq_end
    #ATSbranchseq_beg
    __atstmplab70:
    __atstmplab71:
    $tmp152 = $tmp151->[0];
    $tmp153 = $tmp151->[1];
    ats2plpre_ref_set_elt($env0, $tmp153);
    $tmpret149 = [$tmp152];
    last;
    #ATSbranchseq_end
  } #end-of-while-loop;
  #ATScaseofseq_end
  return $tmpret149;
} #end-of-function


sub
ats2plpre_stream2cloref_last($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret155;
  my $tmp156;
  my $tmp157;
##
  __patsflab_stream2cloref_last:
  $tmp156 = ats2plpre_ref($arg0);
  $tmp157 = ats2plpre_ref($arg1);
  $tmpret155 = _ats2plpre_stream_patsfun_57__closurerize($tmp156, $tmp157);
  return $tmpret155;
} #end-of-function


sub
_ats2plpre_stream_patsfun_57($$)
{
##
  my($env0, $env1) = @_;
##
  my $tmpret158;
  my $tmp159;
  my $tmp160;
  my $tmp161;
  my $tmp162;
##
  __patsflab__ats2plpre_stream_patsfun_57:
  $tmp159 = ats2plpre_ref_get_elt($env0);
  $tmp160 = ATSPMVlazyval_eval($tmp159); 
  #ATScaseofseq_beg
  while(1)
  {
    #ATSbranchseq_beg
    __atstmplab72:
    if(ATSCKptriscons($tmp160)) { goto __atstmplab75; }
    __atstmplab73:
    $tmpret158 = ats2plpre_ref_get_elt($env1);
    last;
    #ATSbranchseq_end
    #ATSbranchseq_beg
    __atstmplab74:
    __atstmplab75:
    $tmp161 = $tmp160->[0];
    $tmp162 = $tmp160->[1];
    ats2plpre_ref_set_elt($env0, $tmp162);
    ats2plpre_ref_set_elt($env1, $tmp161);
    $tmpret158 = $tmp161;
    last;
    #ATSbranchseq_end
  } #end-of-while-loop;
  #ATScaseofseq_end
  return $tmpret158;
} #end-of-function


sub
ats2plpre_stream_take_while_cloref($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret165;
  my $tmp166;
  my $tmp167;
  my $tmp168;
  my $tmp169;
##
  __patsflab_stream_take_while_cloref:
  $tmp166 = ats2plpre_stream_rtake_while_cloref($arg0, $arg1);
  $tmp167 = $tmp166->[0];
  $tmp168 = $tmp166->[1];
  $tmp169 = ats2plpre_list_reverse($tmp168);
  $tmpret165 = [$tmp167, $tmp169];
  return $tmpret165;
} #end-of-function


sub
ats2plpre_stream_rtake_while_cloref($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret170;
  my $tmp178;
##
  __patsflab_stream_rtake_while_cloref:
  $tmp178 = 0;
  $tmpret170 = _ats2plpre_stream_loop_60($arg1, $arg0, 0, $tmp178);
  return $tmpret170;
} #end-of-function


sub
_ats2plpre_stream_loop_60($$$$)
{
##
  my($env0, $arg0, $arg1, $arg2) = @_;
##
  my $apy0;
  my $apy1;
  my $apy2;
  my $tmpret171;
  my $tmp172;
  my $tmp173;
  my $tmp174;
  my $tmp175;
  my $tmp176;
  my $tmp177;
##
  __patsflab__ats2plpre_stream_loop_60:
  $tmp172 = ATSPMVlazyval_eval($arg0); 
  #ATScaseofseq_beg
  while(1)
  {
    #ATSbranchseq_beg
    __atstmplab76:
    if(ATSCKptriscons($tmp172)) { goto __atstmplab79; }
    __atstmplab77:
    $tmpret171 = [$arg0, $arg2];
    last;
    #ATSbranchseq_end
    #ATSbranchseq_beg
    __atstmplab78:
    __atstmplab79:
    $tmp173 = $tmp172->[0];
    $tmp174 = $tmp172->[1];
    $tmp175 = &{$env0->[0]}($env0, $arg1, $tmp173);
    if($tmp175) {
      $tmp176 = ats2plpre_add_int1_int1($arg1, 1);
      $tmp177 = [$tmp173, $arg2];
      #ATStailcalseq_beg
      $apy0 = $tmp174;
      $apy1 = $tmp176;
      $apy2 = $tmp177;
      $arg0 = $apy0;
      $arg1 = $apy1;
      $arg2 = $apy2;
      goto __patsflab__ats2plpre_stream_loop_60;
      #ATStailcalseq_end
    } else {
      $tmpret171 = [$arg0, $arg2];
    } #endif
    last;
    #ATSbranchseq_end
  } #end-of-while-loop;
  #ATScaseofseq_end
  return $tmpret171;
} #end-of-function


sub
ats2plpre_stream_take_until_cloref($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret179;
##
  __patsflab_stream_take_until_cloref:
  $tmpret179 = ats2plpre_stream_take_while_cloref($arg0, _ats2plpre_stream_patsfun_62__closurerize($arg1));
  return $tmpret179;
} #end-of-function


sub
_ats2plpre_stream_patsfun_62($$$)
{
##
  my($env0, $arg0, $arg1) = @_;
##
  my $tmpret180;
  my $tmp181;
##
  __patsflab__ats2plpre_stream_patsfun_62:
  $tmp181 = &{$env0->[0]}($env0, $arg0, $arg1);
  $tmpret180 = atspre_neg_bool0($tmp181);
  return $tmpret180;
} #end-of-function


sub
ats2plpre_stream_rtake_until_cloref($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret182;
##
  __patsflab_stream_rtake_until_cloref:
  $tmpret182 = ats2plpre_stream_rtake_while_cloref($arg0, _ats2plpre_stream_patsfun_64__closurerize($arg1));
  return $tmpret182;
} #end-of-function


sub
_ats2plpre_stream_patsfun_64($$$)
{
##
  my($env0, $arg0, $arg1) = @_;
##
  my $tmpret183;
  my $tmp184;
##
  __patsflab__ats2plpre_stream_patsfun_64:
  $tmp184 = &{$env0->[0]}($env0, $arg0, $arg1);
  $tmpret183 = atspre_neg_bool0($tmp184);
  return $tmpret183;
} #end-of-function


sub
ats2plpre_stream_list_xprod2($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret185;
##
  __patsflab_stream_list_xprod2:
  $tmpret185 = _ats2plpre_stream_auxlst_68($arg0, $arg1);
  return $tmpret185;
} #end-of-function


sub
_ats2plpre_stream_aux_66($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret186;
##
  __patsflab__ats2plpre_stream_aux_66:
  $tmpret186 = ATSPMVlazyval(_ats2plpre_stream_patsfun_67__closurerize($arg0, $arg1));
  return $tmpret186;
} #end-of-function


sub
_ats2plpre_stream_patsfun_67($$)
{
##
  my($env0, $env1) = @_;
##
  my $tmpret187;
  my $tmp188;
  my $tmp189;
  my $tmp190;
  my $tmp191;
##
  __patsflab__ats2plpre_stream_patsfun_67:
  #ATScaseofseq_beg
  while(1)
  {
    #ATSbranchseq_beg
    __atstmplab80:
    if(ATSCKptriscons($env1)) { goto __atstmplab83; }
    __atstmplab81:
    $tmpret187 = 0;
    last;
    #ATSbranchseq_end
    #ATSbranchseq_beg
    __atstmplab82:
    __atstmplab83:
    $tmp188 = $env1->[0];
    $tmp189 = $env1->[1];
    $tmp190 = [$env0, $tmp188];
    $tmp191 = _ats2plpre_stream_aux_66($env0, $tmp189);
    $tmpret187 = [$tmp190, $tmp191];
    last;
    #ATSbranchseq_end
  } #end-of-while-loop;
  #ATScaseofseq_end
  return $tmpret187;
} #end-of-function


sub
_ats2plpre_stream_auxlst_68($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret192;
##
  __patsflab__ats2plpre_stream_auxlst_68:
  $tmpret192 = ATSPMVlazyval(_ats2plpre_stream_patsfun_69__closurerize($arg0, $arg1));
  return $tmpret192;
} #end-of-function


sub
_ats2plpre_stream_patsfun_69($$)
{
##
  my($env0, $env1) = @_;
##
  my $tmpret193;
  my $tmp194;
  my $tmp195;
  my $tmp196;
  my $tmp197;
  my $tmp198;
##
  __patsflab__ats2plpre_stream_patsfun_69:
  #ATScaseofseq_beg
  while(1)
  {
    #ATSbranchseq_beg
    __atstmplab84:
    if(ATSCKptriscons($env0)) { goto __atstmplab87; }
    __atstmplab85:
    $tmpret193 = 0;
    last;
    #ATSbranchseq_end
    #ATSbranchseq_beg
    __atstmplab86:
    __atstmplab87:
    $tmp194 = $env0->[0];
    $tmp195 = $env0->[1];
    $tmp197 = _ats2plpre_stream_aux_66($tmp194, $env1);
    $tmp198 = _ats2plpre_stream_auxlst_68($tmp195, $env1);
    $tmp196 = ats2plpre_stream_append($tmp197, $tmp198);
    $tmpret193 = ATSPMVlazyval_eval($tmp196); 
    last;
    #ATSbranchseq_end
  } #end-of-while-loop;
  #ATScaseofseq_end
  return $tmpret193;
} #end-of-function


######
#ATSextcode_beg()
######
######
1; ##note that it is needed by 'use' or 'require'
######
######
#ATSextcode_end()
######
######
##
## end-of-compilation-unit
##
######
######
##
## The Perl code is generated by atscc2pl
## The starting compilation time is: 2016-10-7: 14h:33m
##
######
sub
_ats2plpre_stream_vt_patsfun_6__closurerize($$)
{
  my($env0, $env1) = @_;
  return [sub{ my($cenv, $arg0) = @_; return _ats2plpre_stream_vt_patsfun_6($cenv->[1], $cenv->[2], $arg0); }, $env0, $env1];
}

sub
_ats2plpre_stream_vt_patsfun_8__closurerize($)
{
  my($env0) = @_;
  return [sub{ my($cenv, $arg0) = @_; return _ats2plpre_stream_vt_patsfun_8($cenv->[1], $arg0); }, $env0];
}

sub
_ats2plpre_stream_vt_patsfun_11__closurerize($$)
{
  my($env0, $env1) = @_;
  return [sub{ my($cenv, $arg0) = @_; return _ats2plpre_stream_vt_patsfun_11($cenv->[1], $cenv->[2], $arg0); }, $env0, $env1];
}

sub
_ats2plpre_stream_vt_patsfun_13__closurerize($)
{
  my($env0) = @_;
  return [sub{ my($cenv, $arg0) = @_; return _ats2plpre_stream_vt_patsfun_13($cenv->[1], $arg0); }, $env0];
}

sub
_ats2plpre_stream_vt_patsfun_17__closurerize($)
{
  my($env0) = @_;
  return [sub{ my($cenv, $arg0) = @_; return _ats2plpre_stream_vt_patsfun_17($cenv->[1], $arg0); }, $env0];
}

sub
_ats2plpre_stream_vt_patsfun_21__closurerize($)
{
  my($env0) = @_;
  return [sub{ my($cenv, $arg0) = @_; return _ats2plpre_stream_vt_patsfun_21($cenv->[1], $arg0); }, $env0];
}

sub
_ats2plpre_stream_vt_patsfun_24__closurerize($$)
{
  my($env0, $env1) = @_;
  return [sub{ my($cenv, $arg0) = @_; return _ats2plpre_stream_vt_patsfun_24($cenv->[1], $cenv->[2], $arg0); }, $env0, $env1];
}


sub
ats2plpre_stream_vt_map_cloref($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret5;
##
  __patsflab_stream_vt_map_cloref:
  $tmpret5 = _ats2plpre_stream_vt_auxmain_5($arg1, $arg0);
  return $tmpret5;
} #end-of-function


sub
_ats2plpre_stream_vt_auxmain_5($$)
{
##
  my($env0, $arg0) = @_;
##
  my $tmpret6;
##
  __patsflab__ats2plpre_stream_vt_auxmain_5:
  $tmpret6 = ATSPMVllazyval(_ats2plpre_stream_vt_patsfun_6__closurerize($env0, $arg0));
  return $tmpret6;
} #end-of-function


sub
_ats2plpre_stream_vt_patsfun_6($$$)
{
##
  my($env0, $env1, $arg0) = @_;
##
  my $tmpret7;
  my $tmp8;
  my $tmp9;
  my $tmp10;
  my $tmp11;
  my $tmp12;
##
  __patsflab__ats2plpre_stream_vt_patsfun_6:
  if($arg0) {
    $tmp8 = ATSPMVllazyval_eval($env1);
    #ATScaseofseq_beg
    while(1)
    {
      #ATSbranchseq_beg
      __atstmplab0:
      if(ATSCKptriscons($tmp8)) { goto __atstmplab3; }
      __atstmplab1:
      $tmpret7 = 0;
      last;
      #ATSbranchseq_end
      #ATSbranchseq_beg
      __atstmplab2:
      __atstmplab3:
      $tmp9 = $tmp8->[0];
      $tmp10 = $tmp8->[1];
      #ATSINSfreecon($tmp8);
      $tmp11 = &{$env0->[0]}($env0, $tmp9);
      $tmp12 = _ats2plpre_stream_vt_auxmain_5($env0, $tmp10);
      $tmpret7 = [$tmp11, $tmp12];
      last;
      #ATSbranchseq_end
    } #end-of-while-loop;
    #ATScaseofseq_end
  } else {
    atspre_lazy_vt_free($env1);
  } #endif
  return $tmpret7;
} #end-of-function


sub
ats2plpre_stream_vt_map_method($)
{
##
  my($arg0) = @_;
##
  my $tmpret14;
##
  __patsflab_stream_vt_map_method:
  $tmpret14 = _ats2plpre_stream_vt_patsfun_8__closurerize($arg0);
  return $tmpret14;
} #end-of-function


sub
_ats2plpre_stream_vt_patsfun_8($$)
{
##
  my($env0, $arg0) = @_;
##
  my $tmpret15;
##
  __patsflab__ats2plpre_stream_vt_patsfun_8:
  $tmpret15 = ats2plpre_stream_vt_map_cloref($env0, $arg0);
  return $tmpret15;
} #end-of-function


sub
ats2plpre_stream_vt_filter_cloref($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret16;
##
  __patsflab_stream_vt_filter_cloref:
  $tmpret16 = _ats2plpre_stream_vt_auxmain_10($arg1, $arg0);
  return $tmpret16;
} #end-of-function


sub
_ats2plpre_stream_vt_auxmain_10($$)
{
##
  my($env0, $arg0) = @_;
##
  my $tmpret17;
##
  __patsflab__ats2plpre_stream_vt_auxmain_10:
  $tmpret17 = ATSPMVllazyval(_ats2plpre_stream_vt_patsfun_11__closurerize($env0, $arg0));
  return $tmpret17;
} #end-of-function


sub
_ats2plpre_stream_vt_patsfun_11($$$)
{
##
  my($env0, $env1, $arg0) = @_;
##
  my $tmpret18;
  my $tmp19;
  my $tmp20;
  my $tmp21;
  my $tmp22;
  my $tmp23;
  my $tmp24;
##
  __patsflab__ats2plpre_stream_vt_patsfun_11:
  if($arg0) {
    $tmp19 = ATSPMVllazyval_eval($env1);
    #ATScaseofseq_beg
    while(1)
    {
      #ATSbranchseq_beg
      __atstmplab4:
      if(ATSCKptriscons($tmp19)) { goto __atstmplab7; }
      __atstmplab5:
      $tmpret18 = 0;
      last;
      #ATSbranchseq_end
      #ATSbranchseq_beg
      __atstmplab6:
      __atstmplab7:
      $tmp20 = $tmp19->[0];
      $tmp21 = $tmp19->[1];
      #ATSINSfreecon($tmp19);
      $tmp22 = &{$env0->[0]}($env0, $tmp20);
      if($tmp22) {
        $tmp23 = _ats2plpre_stream_vt_auxmain_10($env0, $tmp21);
        $tmpret18 = [$tmp20, $tmp23];
      } else {
        $tmp24 = _ats2plpre_stream_vt_auxmain_10($env0, $tmp21);
        $tmpret18 = ATSPMVllazyval_eval($tmp24);
      } #endif
      last;
      #ATSbranchseq_end
    } #end-of-while-loop;
    #ATScaseofseq_end
  } else {
    atspre_lazy_vt_free($env1);
  } #endif
  return $tmpret18;
} #end-of-function


sub
ats2plpre_stream_vt_filter_method($)
{
##
  my($arg0) = @_;
##
  my $tmpret26;
##
  __patsflab_stream_vt_filter_method:
  $tmpret26 = _ats2plpre_stream_vt_patsfun_13__closurerize($arg0);
  return $tmpret26;
} #end-of-function


sub
_ats2plpre_stream_vt_patsfun_13($$)
{
##
  my($env0, $arg0) = @_;
##
  my $tmpret27;
##
  __patsflab__ats2plpre_stream_vt_patsfun_13:
  $tmpret27 = ats2plpre_stream_vt_filter_cloref($env0, $arg0);
  return $tmpret27;
} #end-of-function


sub
ats2plpre_stream_vt_foreach_cloref($$)
{
##
  my($arg0, $arg1) = @_;
##
##
  __patsflab_stream_vt_foreach_cloref:
  _ats2plpre_stream_vt_loop_15($arg1, $arg0);
  return;#_void
} #end-of-function


sub
_ats2plpre_stream_vt_loop_15($$)
{
##
  my($env0, $arg0) = @_;
##
  my $apy0;
  my $tmp30;
  my $tmp31;
  my $tmp32;
##
  __patsflab__ats2plpre_stream_vt_loop_15:
  $tmp30 = ATSPMVllazyval_eval($arg0);
  #ATScaseofseq_beg
  while(1)
  {
    #ATSbranchseq_beg
    __atstmplab8:
    if(ATSCKptriscons($tmp30)) { goto __atstmplab11; }
    __atstmplab9:
    #ATSINSmove_void;
    last;
    #ATSbranchseq_end
    #ATSbranchseq_beg
    __atstmplab10:
    __atstmplab11:
    $tmp31 = $tmp30->[0];
    $tmp32 = $tmp30->[1];
    #ATSINSfreecon($tmp30);
    &{$env0->[0]}($env0, $tmp31);
    #ATStailcalseq_beg
    $apy0 = $tmp32;
    $arg0 = $apy0;
    goto __patsflab__ats2plpre_stream_vt_loop_15;
    #ATStailcalseq_end
    last;
    #ATSbranchseq_end
  } #end-of-while-loop;
  #ATScaseofseq_end
  return;#_void
} #end-of-function


sub
ats2plpre_stream_vt_foreach_method($)
{
##
  my($arg0) = @_;
##
  my $tmpret34;
##
  __patsflab_stream_vt_foreach_method:
  $tmpret34 = _ats2plpre_stream_vt_patsfun_17__closurerize($arg0);
  return $tmpret34;
} #end-of-function


sub
_ats2plpre_stream_vt_patsfun_17($$)
{
##
  my($env0, $arg0) = @_;
##
##
  __patsflab__ats2plpre_stream_vt_patsfun_17:
  ats2plpre_stream_vt_foreach_cloref($env0, $arg0);
  return;#_void
} #end-of-function


sub
ats2plpre_stream_vt_iforeach_cloref($$)
{
##
  my($arg0, $arg1) = @_;
##
##
  __patsflab_stream_vt_iforeach_cloref:
  _ats2plpre_stream_vt_loop_19($arg1, 0, $arg0);
  return;#_void
} #end-of-function


sub
_ats2plpre_stream_vt_loop_19($$$)
{
##
  my($env0, $arg0, $arg1) = @_;
##
  my $apy0;
  my $apy1;
  my $tmp38;
  my $tmp39;
  my $tmp40;
  my $tmp42;
##
  __patsflab__ats2plpre_stream_vt_loop_19:
  $tmp38 = ATSPMVllazyval_eval($arg1);
  #ATScaseofseq_beg
  while(1)
  {
    #ATSbranchseq_beg
    __atstmplab12:
    if(ATSCKptriscons($tmp38)) { goto __atstmplab15; }
    __atstmplab13:
    #ATSINSmove_void;
    last;
    #ATSbranchseq_end
    #ATSbranchseq_beg
    __atstmplab14:
    __atstmplab15:
    $tmp39 = $tmp38->[0];
    $tmp40 = $tmp38->[1];
    #ATSINSfreecon($tmp38);
    &{$env0->[0]}($env0, $arg0, $tmp39);
    $tmp42 = ats2plpre_add_int1_int1($arg0, 1);
    #ATStailcalseq_beg
    $apy0 = $tmp42;
    $apy1 = $tmp40;
    $arg0 = $apy0;
    $arg1 = $apy1;
    goto __patsflab__ats2plpre_stream_vt_loop_19;
    #ATStailcalseq_end
    last;
    #ATSbranchseq_end
  } #end-of-while-loop;
  #ATScaseofseq_end
  return;#_void
} #end-of-function


sub
ats2plpre_stream_vt_iforeach_method($)
{
##
  my($arg0) = @_;
##
  my $tmpret43;
##
  __patsflab_stream_vt_iforeach_method:
  $tmpret43 = _ats2plpre_stream_vt_patsfun_21__closurerize($arg0);
  return $tmpret43;
} #end-of-function


sub
_ats2plpre_stream_vt_patsfun_21($$)
{
##
  my($env0, $arg0) = @_;
##
##
  __patsflab__ats2plpre_stream_vt_patsfun_21:
  ats2plpre_stream_vt_iforeach_cloref($env0, $arg0);
  return;#_void
} #end-of-function


sub
ats2plpre_stream_vt_tabulate_cloref($)
{
##
  my($arg0) = @_;
##
  my $tmpret45;
##
  __patsflab_stream_vt_tabulate_cloref:
  $tmpret45 = _ats2plpre_stream_vt_auxmain_23($arg0, 0);
  return $tmpret45;
} #end-of-function


sub
_ats2plpre_stream_vt_auxmain_23($$)
{
##
  my($env0, $arg0) = @_;
##
  my $tmpret46;
##
  __patsflab__ats2plpre_stream_vt_auxmain_23:
  $tmpret46 = ATSPMVllazyval(_ats2plpre_stream_vt_patsfun_24__closurerize($env0, $arg0));
  return $tmpret46;
} #end-of-function


sub
_ats2plpre_stream_vt_patsfun_24($$$)
{
##
  my($env0, $env1, $arg0) = @_;
##
  my $tmpret47;
  my $tmp48;
  my $tmp49;
  my $tmp50;
##
  __patsflab__ats2plpre_stream_vt_patsfun_24:
  if($arg0) {
    $tmp48 = &{$env0->[0]}($env0, $env1);
    $tmp50 = ats2plpre_add_int1_int1($env1, 1);
    $tmp49 = _ats2plpre_stream_vt_auxmain_23($env0, $tmp50);
    $tmpret47 = [$tmp48, $tmp49];
  } else {
  } #endif
  return $tmpret47;
} #end-of-function


######
#ATSextcode_beg()
######
######
1; ##note that it is needed by 'use' or 'require'
######
######
#ATSextcode_end()
######
######
##
## end-of-compilation-unit
##
######
######
##
## The Perl code is generated by atscc2pl
## The starting compilation time is: 2016-10-7: 14h:33m
##
######
sub
_ats2plpre_intrange_patsfun_7__closurerize($)
{
  my($env0) = @_;
  return [sub{ my($cenv, $arg0) = @_; return _ats2plpre_intrange_patsfun_7($cenv->[1], $arg0); }, $env0];
}

sub
_ats2plpre_intrange_patsfun_9__closurerize($)
{
  my($env0) = @_;
  return [sub{ my($cenv, $arg0) = @_; return _ats2plpre_intrange_patsfun_9($cenv->[1], $arg0); }, $env0];
}

sub
_ats2plpre_intrange_patsfun_11__closurerize($)
{
  my($env0) = @_;
  return [sub{ my($cenv, $arg0) = @_; return _ats2plpre_intrange_patsfun_11($cenv->[1], $arg0); }, $env0];
}

sub
_ats2plpre_intrange_patsfun_14__closurerize($$)
{
  my($env0, $env1) = @_;
  return [sub{ my($cenv, $arg0) = @_; return _ats2plpre_intrange_patsfun_14($cenv->[1], $cenv->[2], $arg0); }, $env0, $env1];
}

sub
_ats2plpre_intrange_patsfun_18__closurerize($)
{
  my($env0) = @_;
  return [sub{ my($cenv, $arg0) = @_; return _ats2plpre_intrange_patsfun_18($cenv->[1], $arg0); }, $env0];
}

sub
_ats2plpre_intrange_patsfun_21__closurerize($$$)
{
  my($env0, $env1, $env2) = @_;
  return [sub{ my($cenv) = @_; return _ats2plpre_intrange_patsfun_21($cenv->[1], $cenv->[2], $cenv->[3]); }, $env0, $env1, $env2];
}

sub
_ats2plpre_intrange_patsfun_23__closurerize($)
{
  my($env0) = @_;
  return [sub{ my($cenv, $arg0) = @_; return _ats2plpre_intrange_patsfun_23($cenv->[1], $arg0); }, $env0];
}

sub
_ats2plpre_intrange_patsfun_26__closurerize($$$)
{
  my($env0, $env1, $env2) = @_;
  return [sub{ my($cenv, $arg0) = @_; return _ats2plpre_intrange_patsfun_26($cenv->[1], $cenv->[2], $cenv->[3], $arg0); }, $env0, $env1, $env2];
}

sub
_ats2plpre_intrange_patsfun_28__closurerize($)
{
  my($env0) = @_;
  return [sub{ my($cenv, $arg0) = @_; return _ats2plpre_intrange_patsfun_28($cenv->[1], $arg0); }, $env0];
}

sub
_ats2plpre_intrange_patsfun_35__closurerize($)
{
  my($env0) = @_;
  return [sub{ my($cenv, $arg0) = @_; return _ats2plpre_intrange_patsfun_35($cenv->[1], $arg0); }, $env0];
}

sub
_ats2plpre_intrange_patsfun_39__closurerize($)
{
  my($env0) = @_;
  return [sub{ my($cenv, $arg0) = @_; return _ats2plpre_intrange_patsfun_39($cenv->[1], $arg0); }, $env0];
}

sub
_ats2plpre_intrange_patsfun_43__closurerize($)
{
  my($env0) = @_;
  return [sub{ my($cenv, $arg0) = @_; return _ats2plpre_intrange_patsfun_43($cenv->[1], $arg0); }, $env0];
}

sub
_ats2plpre_intrange_patsfun_47__closurerize($$$)
{
  my($env0, $env1, $env2) = @_;
  return [sub{ my($cenv, $arg0) = @_; return _ats2plpre_intrange_patsfun_47($cenv->[1], $cenv->[2], $cenv->[3], $arg0); }, $env0, $env1, $env2];
}


sub
ats2plpre_int_repeat_lazy($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmp1;
##
  __patsflab_int_repeat_lazy:
  $tmp1 = ats2plpre_lazy2cloref($arg1);
  ats2plpre_int_repeat_cloref($arg0, $tmp1);
  return;#_void
} #end-of-function


sub
ats2plpre_int_repeat_cloref($$)
{
##
  my($arg0, $arg1) = @_;
##
##
  __patsflab_int_repeat_cloref:
  _ats2plpre_intrange_loop_2($arg0, $arg1);
  return;#_void
} #end-of-function


sub
_ats2plpre_intrange_loop_2($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $apy0;
  my $apy1;
  my $tmp4;
  my $tmp6;
##
  __patsflab__ats2plpre_intrange_loop_2:
  $tmp4 = ats2plpre_gt_int0_int0($arg0, 0);
  if($tmp4) {
    &{$arg1->[0]}($arg1);
    $tmp6 = ats2plpre_sub_int0_int0($arg0, 1);
    #ATStailcalseq_beg
    $apy0 = $tmp6;
    $apy1 = $arg1;
    $arg0 = $apy0;
    $arg1 = $apy1;
    goto __patsflab__ats2plpre_intrange_loop_2;
    #ATStailcalseq_end
  } else {
    #ATSINSmove_void;
  } #endif
  return;#_void
} #end-of-function


sub
ats2plpre_int_exists_cloref($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret7;
##
  __patsflab_int_exists_cloref:
  $tmpret7 = ats2plpre_intrange_exists_cloref(0, $arg0, $arg1);
  return $tmpret7;
} #end-of-function


sub
ats2plpre_int_forall_cloref($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret8;
##
  __patsflab_int_forall_cloref:
  $tmpret8 = ats2plpre_intrange_forall_cloref(0, $arg0, $arg1);
  return $tmpret8;
} #end-of-function


sub
ats2plpre_int_foreach_cloref($$)
{
##
  my($arg0, $arg1) = @_;
##
##
  __patsflab_int_foreach_cloref:
  ats2plpre_intrange_foreach_cloref(0, $arg0, $arg1);
  return;#_void
} #end-of-function


sub
ats2plpre_int_exists_method($)
{
##
  my($arg0) = @_;
##
  my $tmpret10;
##
  __patsflab_int_exists_method:
  $tmpret10 = _ats2plpre_intrange_patsfun_7__closurerize($arg0);
  return $tmpret10;
} #end-of-function


sub
_ats2plpre_intrange_patsfun_7($$)
{
##
  my($env0, $arg0) = @_;
##
  my $tmpret11;
##
  __patsflab__ats2plpre_intrange_patsfun_7:
  $tmpret11 = ats2plpre_int_exists_cloref($env0, $arg0);
  return $tmpret11;
} #end-of-function


sub
ats2plpre_int_forall_method($)
{
##
  my($arg0) = @_;
##
  my $tmpret12;
##
  __patsflab_int_forall_method:
  $tmpret12 = _ats2plpre_intrange_patsfun_9__closurerize($arg0);
  return $tmpret12;
} #end-of-function


sub
_ats2plpre_intrange_patsfun_9($$)
{
##
  my($env0, $arg0) = @_;
##
  my $tmpret13;
##
  __patsflab__ats2plpre_intrange_patsfun_9:
  $tmpret13 = ats2plpre_int_forall_cloref($env0, $arg0);
  return $tmpret13;
} #end-of-function


sub
ats2plpre_int_foreach_method($)
{
##
  my($arg0) = @_;
##
  my $tmpret14;
##
  __patsflab_int_foreach_method:
  $tmpret14 = _ats2plpre_intrange_patsfun_11__closurerize($arg0);
  return $tmpret14;
} #end-of-function


sub
_ats2plpre_intrange_patsfun_11($$)
{
##
  my($env0, $arg0) = @_;
##
##
  __patsflab__ats2plpre_intrange_patsfun_11:
  ats2plpre_int_foreach_cloref($env0, $arg0);
  return;#_void
} #end-of-function


sub
ats2plpre_int_foldleft_cloref($$$)
{
##
  my($arg0, $arg1, $arg2) = @_;
##
  my $tmpret16;
##
  __patsflab_int_foldleft_cloref:
  $tmpret16 = ats2plpre_intrange_foldleft_cloref(0, $arg0, $arg1, $arg2);
  return $tmpret16;
} #end-of-function


sub
ats2plpre_int_foldleft_method($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret17;
##
  __patsflab_int_foldleft_method:
  $tmpret17 = _ats2plpre_intrange_patsfun_14__closurerize($arg0, $arg1);
  return $tmpret17;
} #end-of-function


sub
_ats2plpre_intrange_patsfun_14($$$)
{
##
  my($env0, $env1, $arg0) = @_;
##
  my $tmpret18;
##
  __patsflab__ats2plpre_intrange_patsfun_14:
  $tmpret18 = ats2plpre_int_foldleft_cloref($env0, $env1, $arg0);
  return $tmpret18;
} #end-of-function


sub
ats2plpre_int_list_map_cloref($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret19;
##
  __patsflab_int_list_map_cloref:
  $tmpret19 = _ats2plpre_intrange_aux_16($arg0, $arg1, 0);
  return $tmpret19;
} #end-of-function


sub
_ats2plpre_intrange_aux_16($$$)
{
##
  my($env0, $env1, $arg0) = @_;
##
  my $tmpret20;
  my $tmp21;
  my $tmp22;
  my $tmp23;
  my $tmp24;
##
  __patsflab__ats2plpre_intrange_aux_16:
  $tmp21 = ats2plpre_lt_int1_int1($arg0, $env0);
  if($tmp21) {
    $tmp22 = &{$env1->[0]}($env1, $arg0);
    $tmp24 = ats2plpre_add_int1_int1($arg0, 1);
    $tmp23 = _ats2plpre_intrange_aux_16($env0, $env1, $tmp24);
    $tmpret20 = [$tmp22, $tmp23];
  } else {
    $tmpret20 = 0;
  } #endif
  return $tmpret20;
} #end-of-function


sub
ats2plpre_int_list_map_method($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret25;
##
  __patsflab_int_list_map_method:
  $tmpret25 = _ats2plpre_intrange_patsfun_18__closurerize($arg0);
  return $tmpret25;
} #end-of-function


sub
_ats2plpre_intrange_patsfun_18($$)
{
##
  my($env0, $arg0) = @_;
##
  my $tmpret26;
##
  __patsflab__ats2plpre_intrange_patsfun_18:
  $tmpret26 = ats2plpre_int_list_map_cloref($env0, $arg0);
  return $tmpret26;
} #end-of-function


sub
ats2plpre_int_stream_map_cloref($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret27;
##
  __patsflab_int_stream_map_cloref:
  $tmpret27 = _ats2plpre_intrange_aux_20($arg0, $arg1, 0);
  return $tmpret27;
} #end-of-function


sub
_ats2plpre_intrange_aux_20($$$)
{
##
  my($env0, $env1, $arg0) = @_;
##
  my $tmpret28;
##
  __patsflab__ats2plpre_intrange_aux_20:
  $tmpret28 = ATSPMVlazyval(_ats2plpre_intrange_patsfun_21__closurerize($env0, $env1, $arg0));
  return $tmpret28;
} #end-of-function


sub
_ats2plpre_intrange_patsfun_21($$$)
{
##
  my($env0, $env1, $env2) = @_;
##
  my $tmpret29;
  my $tmp30;
  my $tmp31;
  my $tmp32;
  my $tmp33;
##
  __patsflab__ats2plpre_intrange_patsfun_21:
  $tmp30 = ats2plpre_lt_int1_int1($env2, $env0);
  if($tmp30) {
    $tmp31 = &{$env1->[0]}($env1, $env2);
    $tmp33 = ats2plpre_add_int1_int1($env2, 1);
    $tmp32 = _ats2plpre_intrange_aux_20($env0, $env1, $tmp33);
    $tmpret29 = [$tmp31, $tmp32];
  } else {
    $tmpret29 = 0;
  } #endif
  return $tmpret29;
} #end-of-function


sub
ats2plpre_int_stream_map_method($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret34;
##
  __patsflab_int_stream_map_method:
  $tmpret34 = _ats2plpre_intrange_patsfun_23__closurerize($arg0);
  return $tmpret34;
} #end-of-function


sub
_ats2plpre_intrange_patsfun_23($$)
{
##
  my($env0, $arg0) = @_;
##
  my $tmpret35;
##
  __patsflab__ats2plpre_intrange_patsfun_23:
  $tmpret35 = ats2plpre_int_stream_map_cloref($env0, $arg0);
  return $tmpret35;
} #end-of-function


sub
ats2plpre_int_stream_vt_map_cloref($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret36;
##
  __patsflab_int_stream_vt_map_cloref:
  $tmpret36 = _ats2plpre_intrange_aux_25($arg0, $arg1, 0);
  return $tmpret36;
} #end-of-function


sub
_ats2plpre_intrange_aux_25($$$)
{
##
  my($env0, $env1, $arg0) = @_;
##
  my $tmpret37;
##
  __patsflab__ats2plpre_intrange_aux_25:
  $tmpret37 = ATSPMVllazyval(_ats2plpre_intrange_patsfun_26__closurerize($env0, $env1, $arg0));
  return $tmpret37;
} #end-of-function


sub
_ats2plpre_intrange_patsfun_26($$$$)
{
##
  my($env0, $env1, $env2, $arg0) = @_;
##
  my $tmpret38;
  my $tmp39;
  my $tmp40;
  my $tmp41;
  my $tmp42;
##
  __patsflab__ats2plpre_intrange_patsfun_26:
  if($arg0) {
    $tmp39 = ats2plpre_lt_int1_int1($env2, $env0);
    if($tmp39) {
      $tmp40 = &{$env1->[0]}($env1, $env2);
      $tmp42 = ats2plpre_add_int1_int1($env2, 1);
      $tmp41 = _ats2plpre_intrange_aux_25($env0, $env1, $tmp42);
      $tmpret38 = [$tmp40, $tmp41];
    } else {
      $tmpret38 = 0;
    } #endif
  } else {
  } #endif
  return $tmpret38;
} #end-of-function


sub
ats2plpre_int_stream_vt_map_method($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret43;
##
  __patsflab_int_stream_vt_map_method:
  $tmpret43 = _ats2plpre_intrange_patsfun_28__closurerize($arg0);
  return $tmpret43;
} #end-of-function


sub
_ats2plpre_intrange_patsfun_28($$)
{
##
  my($env0, $arg0) = @_;
##
  my $tmpret44;
##
  __patsflab__ats2plpre_intrange_patsfun_28:
  $tmpret44 = ats2plpre_int_stream_vt_map_cloref($env0, $arg0);
  return $tmpret44;
} #end-of-function


sub
ats2plpre_int2_exists_cloref($$$)
{
##
  my($arg0, $arg1, $arg2) = @_;
##
  my $tmpret45;
##
  __patsflab_int2_exists_cloref:
  $tmpret45 = ats2plpre_intrange2_exists_cloref(0, $arg0, 0, $arg1, $arg2);
  return $tmpret45;
} #end-of-function


sub
ats2plpre_int2_forall_cloref($$$)
{
##
  my($arg0, $arg1, $arg2) = @_;
##
  my $tmpret46;
##
  __patsflab_int2_forall_cloref:
  $tmpret46 = ats2plpre_intrange2_forall_cloref(0, $arg0, 0, $arg1, $arg2);
  return $tmpret46;
} #end-of-function


sub
ats2plpre_int2_foreach_cloref($$$)
{
##
  my($arg0, $arg1, $arg2) = @_;
##
##
  __patsflab_int2_foreach_cloref:
  ats2plpre_intrange2_foreach_cloref(0, $arg0, 0, $arg1, $arg2);
  return;#_void
} #end-of-function


sub
ats2plpre_intrange_exists_cloref($$$)
{
##
  my($arg0, $arg1, $arg2) = @_;
##
  my $tmpret48;
##
  __patsflab_intrange_exists_cloref:
  $tmpret48 = _ats2plpre_intrange_loop_33($arg0, $arg1, $arg2);
  return $tmpret48;
} #end-of-function


sub
_ats2plpre_intrange_loop_33($$$)
{
##
  my($arg0, $arg1, $arg2) = @_;
##
  my $apy0;
  my $apy1;
  my $apy2;
  my $tmpret49;
  my $tmp50;
  my $tmp51;
  my $tmp52;
##
  __patsflab__ats2plpre_intrange_loop_33:
  $tmp50 = ats2plpre_lt_int0_int0($arg0, $arg1);
  if($tmp50) {
    $tmp51 = &{$arg2->[0]}($arg2, $arg0);
    if($tmp51) {
      $tmpret49 = 1;
    } else {
      $tmp52 = ats2plpre_add_int0_int0($arg0, 1);
      #ATStailcalseq_beg
      $apy0 = $tmp52;
      $apy1 = $arg1;
      $apy2 = $arg2;
      $arg0 = $apy0;
      $arg1 = $apy1;
      $arg2 = $apy2;
      goto __patsflab__ats2plpre_intrange_loop_33;
      #ATStailcalseq_end
    } #endif
  } else {
    $tmpret49 = 0;
  } #endif
  return $tmpret49;
} #end-of-function


sub
ats2plpre_intrange_exists_method($)
{
##
  my($arg0) = @_;
##
  my $tmpret53;
##
  __patsflab_intrange_exists_method:
  $tmpret53 = _ats2plpre_intrange_patsfun_35__closurerize($arg0);
  return $tmpret53;
} #end-of-function


sub
_ats2plpre_intrange_patsfun_35($$)
{
##
  my($env0, $arg0) = @_;
##
  my $tmpret54;
##
  __patsflab__ats2plpre_intrange_patsfun_35:
  $tmpret54 = ats2plpre_intrange_exists_cloref($env0->[0], $env0->[1], $arg0);
  return $tmpret54;
} #end-of-function


sub
ats2plpre_intrange_forall_cloref($$$)
{
##
  my($arg0, $arg1, $arg2) = @_;
##
  my $tmpret55;
##
  __patsflab_intrange_forall_cloref:
  $tmpret55 = _ats2plpre_intrange_loop_37($arg0, $arg1, $arg2);
  return $tmpret55;
} #end-of-function


sub
_ats2plpre_intrange_loop_37($$$)
{
##
  my($arg0, $arg1, $arg2) = @_;
##
  my $apy0;
  my $apy1;
  my $apy2;
  my $tmpret56;
  my $tmp57;
  my $tmp58;
  my $tmp59;
##
  __patsflab__ats2plpre_intrange_loop_37:
  $tmp57 = ats2plpre_lt_int0_int0($arg0, $arg1);
  if($tmp57) {
    $tmp58 = &{$arg2->[0]}($arg2, $arg0);
    if($tmp58) {
      $tmp59 = ats2plpre_add_int0_int0($arg0, 1);
      #ATStailcalseq_beg
      $apy0 = $tmp59;
      $apy1 = $arg1;
      $apy2 = $arg2;
      $arg0 = $apy0;
      $arg1 = $apy1;
      $arg2 = $apy2;
      goto __patsflab__ats2plpre_intrange_loop_37;
      #ATStailcalseq_end
    } else {
      $tmpret56 = 0;
    } #endif
  } else {
    $tmpret56 = 1;
  } #endif
  return $tmpret56;
} #end-of-function


sub
ats2plpre_intrange_forall_method($)
{
##
  my($arg0) = @_;
##
  my $tmpret60;
##
  __patsflab_intrange_forall_method:
  $tmpret60 = _ats2plpre_intrange_patsfun_39__closurerize($arg0);
  return $tmpret60;
} #end-of-function


sub
_ats2plpre_intrange_patsfun_39($$)
{
##
  my($env0, $arg0) = @_;
##
  my $tmpret61;
##
  __patsflab__ats2plpre_intrange_patsfun_39:
  $tmpret61 = ats2plpre_intrange_forall_cloref($env0->[0], $env0->[1], $arg0);
  return $tmpret61;
} #end-of-function


sub
ats2plpre_intrange_foreach_cloref($$$)
{
##
  my($arg0, $arg1, $arg2) = @_;
##
##
  __patsflab_intrange_foreach_cloref:
  _ats2plpre_intrange_loop_41($arg0, $arg1, $arg2);
  return;#_void
} #end-of-function


sub
_ats2plpre_intrange_loop_41($$$)
{
##
  my($arg0, $arg1, $arg2) = @_;
##
  my $apy0;
  my $apy1;
  my $apy2;
  my $tmp64;
  my $tmp66;
##
  __patsflab__ats2plpre_intrange_loop_41:
  $tmp64 = ats2plpre_lt_int0_int0($arg0, $arg1);
  if($tmp64) {
    &{$arg2->[0]}($arg2, $arg0);
    $tmp66 = ats2plpre_add_int0_int0($arg0, 1);
    #ATStailcalseq_beg
    $apy0 = $tmp66;
    $apy1 = $arg1;
    $apy2 = $arg2;
    $arg0 = $apy0;
    $arg1 = $apy1;
    $arg2 = $apy2;
    goto __patsflab__ats2plpre_intrange_loop_41;
    #ATStailcalseq_end
  } else {
    #ATSINSmove_void;
  } #endif
  return;#_void
} #end-of-function


sub
ats2plpre_intrange_foreach_method($)
{
##
  my($arg0) = @_;
##
  my $tmpret67;
##
  __patsflab_intrange_foreach_method:
  $tmpret67 = _ats2plpre_intrange_patsfun_43__closurerize($arg0);
  return $tmpret67;
} #end-of-function


sub
_ats2plpre_intrange_patsfun_43($$)
{
##
  my($env0, $arg0) = @_;
##
##
  __patsflab__ats2plpre_intrange_patsfun_43:
  ats2plpre_intrange_foreach_cloref($env0->[0], $env0->[1], $arg0);
  return;#_void
} #end-of-function


sub
ats2plpre_intrange_foldleft_cloref($$$$)
{
##
  my($arg0, $arg1, $arg2, $arg3) = @_;
##
  my $tmpret69;
##
  __patsflab_intrange_foldleft_cloref:
  $tmpret69 = _ats2plpre_intrange_loop_45($arg3, $arg0, $arg1, $arg2, $arg3);
  return $tmpret69;
} #end-of-function


sub
_ats2plpre_intrange_loop_45($$$$$)
{
##
  my($env0, $arg0, $arg1, $arg2, $arg3) = @_;
##
  my $apy0;
  my $apy1;
  my $apy2;
  my $apy3;
  my $tmpret70;
  my $tmp71;
  my $tmp72;
  my $tmp73;
##
  __patsflab__ats2plpre_intrange_loop_45:
  $tmp71 = ats2plpre_lt_int0_int0($arg0, $arg1);
  if($tmp71) {
    $tmp72 = ats2plpre_add_int0_int0($arg0, 1);
    $tmp73 = &{$arg3->[0]}($arg3, $arg2, $arg0);
    #ATStailcalseq_beg
    $apy0 = $tmp72;
    $apy1 = $arg1;
    $apy2 = $tmp73;
    $apy3 = $env0;
    $arg0 = $apy0;
    $arg1 = $apy1;
    $arg2 = $apy2;
    $arg3 = $apy3;
    goto __patsflab__ats2plpre_intrange_loop_45;
    #ATStailcalseq_end
  } else {
    $tmpret70 = $arg2;
  } #endif
  return $tmpret70;
} #end-of-function


sub
ats2plpre_intrange_foldleft_method($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmp74;
  my $tmp75;
  my $tmpret76;
##
  __patsflab_intrange_foldleft_method:
  $tmp74 = $arg0->[0];
  $tmp75 = $arg0->[1];
  $tmpret76 = _ats2plpre_intrange_patsfun_47__closurerize($tmp74, $tmp75, $arg1);
  return $tmpret76;
} #end-of-function


sub
_ats2plpre_intrange_patsfun_47($$$$)
{
##
  my($env0, $env1, $env2, $arg0) = @_;
##
  my $tmpret77;
##
  __patsflab__ats2plpre_intrange_patsfun_47:
  $tmpret77 = ats2plpre_intrange_foldleft_cloref($env0, $env1, $env2, $arg0);
  return $tmpret77;
} #end-of-function


sub
ats2plpre_intrange2_exists_cloref($$$$$)
{
##
  my($arg0, $arg1, $arg2, $arg3, $arg4) = @_;
##
  my $tmpret78;
##
  __patsflab_intrange2_exists_cloref:
  $tmpret78 = _ats2plpre_intrange_loop1_49($arg2, $arg3, $arg4, $arg0, $arg1, $arg2, $arg3, $arg4);
  return $tmpret78;
} #end-of-function


sub
_ats2plpre_intrange_loop1_49($$$$$$$$)
{
##
  my($env0, $env1, $env2, $arg0, $arg1, $arg2, $arg3, $arg4) = @_;
##
  my $apy0;
  my $apy1;
  my $apy2;
  my $apy3;
  my $apy4;
  my $tmpret79;
  my $tmp80;
  my $a2rg0;
  my $a2rg1;
  my $a2rg2;
  my $a2rg3;
  my $a2rg4;
  my $a2py0;
  my $a2py1;
  my $a2py2;
  my $a2py3;
  my $a2py4;
  my $tmpret81;
  my $tmp82;
  my $tmp83;
  my $tmp84;
  my $tmp85;
##
  __patsflab__ats2plpre_intrange_loop1_49:
  $tmp80 = ats2plpre_lt_int0_int0($arg0, $arg1);
  if($tmp80) {
    #ATStailcalseq_beg
    $a2py0 = $arg0;
    $a2py1 = $arg1;
    $a2py2 = $arg2;
    $a2py3 = $arg3;
    $a2py4 = $env2;
    $a2rg0 = $a2py0;
    $a2rg1 = $a2py1;
    $a2rg2 = $a2py2;
    $a2rg3 = $a2py3;
    $a2rg4 = $a2py4;
    goto __patsflab__ats2plpre_intrange_loop2_50;
    #ATStailcalseq_end
  } else {
    $tmpret79 = 0;
  } #endif
  return $tmpret79;
##
  __patsflab__ats2plpre_intrange_loop2_50:
  $tmp82 = ats2plpre_lt_int0_int0($a2rg2, $a2rg3);
  if($tmp82) {
    $tmp83 = &{$a2rg4->[0]}($a2rg4, $a2rg0, $a2rg2);
    if($tmp83) {
      $tmpret81 = 1;
    } else {
      $tmp84 = ats2plpre_add_int0_int0($a2rg2, 1);
      #ATStailcalseq_beg
      $a2py0 = $a2rg0;
      $a2py1 = $a2rg1;
      $a2py2 = $tmp84;
      $a2py3 = $a2rg3;
      $a2py4 = $a2rg4;
      $a2rg0 = $a2py0;
      $a2rg1 = $a2py1;
      $a2rg2 = $a2py2;
      $a2rg3 = $a2py3;
      $a2rg4 = $a2py4;
      goto __patsflab__ats2plpre_intrange_loop2_50;
      #ATStailcalseq_end
    } #endif
  } else {
    $tmp85 = ats2plpre_add_int0_int0($a2rg0, 1);
    #ATStailcalseq_beg
    $apy0 = $tmp85;
    $apy1 = $a2rg1;
    $apy2 = $env0;
    $apy3 = $env1;
    $apy4 = $a2rg4;
    $arg0 = $apy0;
    $arg1 = $apy1;
    $arg2 = $apy2;
    $arg3 = $apy3;
    $arg4 = $apy4;
    goto __patsflab__ats2plpre_intrange_loop1_49;
    #ATStailcalseq_end
  } #endif
  return $tmpret81;
} #end-of-function


sub
ats2plpre_intrange2_forall_cloref($$$$$)
{
##
  my($arg0, $arg1, $arg2, $arg3, $arg4) = @_;
##
  my $tmpret86;
##
  __patsflab_intrange2_forall_cloref:
  $tmpret86 = _ats2plpre_intrange_loop1_52($arg2, $arg3, $arg0, $arg1, $arg2, $arg3, $arg4);
  return $tmpret86;
} #end-of-function


sub
_ats2plpre_intrange_loop1_52($$$$$$$)
{
##
  my($env0, $env1, $arg0, $arg1, $arg2, $arg3, $arg4) = @_;
##
  my $apy0;
  my $apy1;
  my $apy2;
  my $apy3;
  my $apy4;
  my $tmpret87;
  my $tmp88;
  my $a2rg0;
  my $a2rg1;
  my $a2rg2;
  my $a2rg3;
  my $a2rg4;
  my $a2py0;
  my $a2py1;
  my $a2py2;
  my $a2py3;
  my $a2py4;
  my $tmpret89;
  my $tmp90;
  my $tmp91;
  my $tmp92;
  my $tmp93;
##
  __patsflab__ats2plpre_intrange_loop1_52:
  $tmp88 = ats2plpre_lt_int0_int0($arg0, $arg1);
  if($tmp88) {
    #ATStailcalseq_beg
    $a2py0 = $arg0;
    $a2py1 = $arg1;
    $a2py2 = $arg2;
    $a2py3 = $arg3;
    $a2py4 = $arg4;
    $a2rg0 = $a2py0;
    $a2rg1 = $a2py1;
    $a2rg2 = $a2py2;
    $a2rg3 = $a2py3;
    $a2rg4 = $a2py4;
    goto __patsflab__ats2plpre_intrange_loop2_53;
    #ATStailcalseq_end
  } else {
    $tmpret87 = 1;
  } #endif
  return $tmpret87;
##
  __patsflab__ats2plpre_intrange_loop2_53:
  $tmp90 = ats2plpre_lt_int0_int0($a2rg2, $a2rg3);
  if($tmp90) {
    $tmp91 = &{$a2rg4->[0]}($a2rg4, $a2rg0, $a2rg2);
    if($tmp91) {
      $tmp92 = ats2plpre_add_int0_int0($a2rg2, 1);
      #ATStailcalseq_beg
      $a2py0 = $a2rg0;
      $a2py1 = $a2rg1;
      $a2py2 = $tmp92;
      $a2py3 = $a2rg3;
      $a2py4 = $a2rg4;
      $a2rg0 = $a2py0;
      $a2rg1 = $a2py1;
      $a2rg2 = $a2py2;
      $a2rg3 = $a2py3;
      $a2rg4 = $a2py4;
      goto __patsflab__ats2plpre_intrange_loop2_53;
      #ATStailcalseq_end
    } else {
      $tmpret89 = 0;
    } #endif
  } else {
    $tmp93 = ats2plpre_add_int0_int0($a2rg0, 1);
    #ATStailcalseq_beg
    $apy0 = $tmp93;
    $apy1 = $a2rg1;
    $apy2 = $env0;
    $apy3 = $env1;
    $apy4 = $a2rg4;
    $arg0 = $apy0;
    $arg1 = $apy1;
    $arg2 = $apy2;
    $arg3 = $apy3;
    $arg4 = $apy4;
    goto __patsflab__ats2plpre_intrange_loop1_52;
    #ATStailcalseq_end
  } #endif
  return $tmpret89;
} #end-of-function


sub
ats2plpre_intrange2_foreach_cloref($$$$$)
{
##
  my($arg0, $arg1, $arg2, $arg3, $arg4) = @_;
##
##
  __patsflab_intrange2_foreach_cloref:
  _ats2plpre_intrange_loop1_55($arg2, $arg3, $arg0, $arg1, $arg2, $arg3, $arg4);
  return;#_void
} #end-of-function


sub
_ats2plpre_intrange_loop1_55($$$$$$$)
{
##
  my($env0, $env1, $arg0, $arg1, $arg2, $arg3, $arg4) = @_;
##
  my $apy0;
  my $apy1;
  my $apy2;
  my $apy3;
  my $apy4;
  my $tmp96;
  my $a2rg0;
  my $a2rg1;
  my $a2rg2;
  my $a2rg3;
  my $a2rg4;
  my $a2py0;
  my $a2py1;
  my $a2py2;
  my $a2py3;
  my $a2py4;
  my $tmp98;
  my $tmp100;
  my $tmp101;
##
  __patsflab__ats2plpre_intrange_loop1_55:
  $tmp96 = ats2plpre_lt_int0_int0($arg0, $arg1);
  if($tmp96) {
    #ATStailcalseq_beg
    $a2py0 = $arg0;
    $a2py1 = $arg1;
    $a2py2 = $arg2;
    $a2py3 = $arg3;
    $a2py4 = $arg4;
    $a2rg0 = $a2py0;
    $a2rg1 = $a2py1;
    $a2rg2 = $a2py2;
    $a2rg3 = $a2py3;
    $a2rg4 = $a2py4;
    goto __patsflab__ats2plpre_intrange_loop2_56;
    #ATStailcalseq_end
  } else {
    #ATSINSmove_void;
  } #endif
  return;#_void
##
  __patsflab__ats2plpre_intrange_loop2_56:
  $tmp98 = ats2plpre_lt_int0_int0($a2rg2, $a2rg3);
  if($tmp98) {
    &{$a2rg4->[0]}($a2rg4, $a2rg0, $a2rg2);
    $tmp100 = ats2plpre_add_int0_int0($a2rg2, 1);
    #ATStailcalseq_beg
    $a2py0 = $a2rg0;
    $a2py1 = $a2rg1;
    $a2py2 = $tmp100;
    $a2py3 = $a2rg3;
    $a2py4 = $a2rg4;
    $a2rg0 = $a2py0;
    $a2rg1 = $a2py1;
    $a2rg2 = $a2py2;
    $a2rg3 = $a2py3;
    $a2rg4 = $a2py4;
    goto __patsflab__ats2plpre_intrange_loop2_56;
    #ATStailcalseq_end
  } else {
    $tmp101 = ats2plpre_succ_int0($a2rg0);
    #ATStailcalseq_beg
    $apy0 = $tmp101;
    $apy1 = $a2rg1;
    $apy2 = $env0;
    $apy3 = $env1;
    $apy4 = $a2rg4;
    $arg0 = $apy0;
    $arg1 = $apy1;
    $arg2 = $apy2;
    $arg3 = $apy3;
    $arg4 = $apy4;
    goto __patsflab__ats2plpre_intrange_loop1_55;
    #ATStailcalseq_end
  } #endif
  return;#_void
} #end-of-function


######
#ATSextcode_beg()
######
######
1; ##note that it is needed by 'use' or 'require'
######
######
#ATSextcode_end()
######
######
##
## end-of-compilation-unit
##
######
######
##
## The Perl code is generated by atscc2pl
## The starting compilation time is: 2016-10-7: 14h:33m
##
######

sub
ats2plpre_ref($)
{
##
  my($arg0) = @_;
##
  my $tmpret0;
##
  __patsflab_ref:
  $tmpret0 = ats2plpre_ref_make_elt($arg0);
  return $tmpret0;
} #end-of-function


sub
ats2plpre_ref_make_elt($)
{
##
  my($arg0) = @_;
##
  my $tmpret1;
  my $tmp2;
##
  __patsflab_ref_make_elt:
  $tmp2 = ats2plpre_PLarray_sing($arg0);
  $tmpret1 = $tmp2;
  return $tmpret1;
} #end-of-function


sub
ats2plpre_ref_get_elt($)
{
##
  my($arg0) = @_;
##
  my $tmpret3;
##
  __patsflab_ref_get_elt:
  $tmpret3 = ats2plpre_PLarray_get_at($arg0, 0);
  return $tmpret3;
} #end-of-function


sub
ats2plpre_ref_set_elt($$)
{
##
  my($arg0, $arg1) = @_;
##
##
  __patsflab_ref_set_elt:
  ats2plpre_PLarray_set_at($arg0, 0, $arg1);
  return;#_void
} #end-of-function


sub
ats2plpre_ref_exch_elt($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret5;
  my $tmp6;
##
  __patsflab_ref_exch_elt:
  $tmp6 = ats2plpre_PLarray_get_at($arg0, 0);
  ats2plpre_PLarray_set_at($arg0, 0, $arg1);
  $tmpret5 = $tmp6;
  return $tmpret5;
} #end-of-function

######
##
## end-of-compilation-unit
##
######
######
##
## The Perl code is generated by atscc2pl
## The starting compilation time is: 2016-10-7: 14h:33m
##
######
sub
_ats2plpre_ML_list0_patsfun_22__closurerize($)
{
  my($env0) = @_;
  return [sub{ my($cenv, $arg0) = @_; return _ats2plpre_ML_list0_patsfun_22($cenv->[1], $arg0); }, $env0];
}

sub
_ats2plpre_ML_list0_patsfun_25__closurerize($)
{
  my($env0) = @_;
  return [sub{ my($cenv, $arg0) = @_; return _ats2plpre_ML_list0_patsfun_25($cenv->[1], $arg0); }, $env0];
}

sub
_ats2plpre_ML_list0_patsfun_28__closurerize($)
{
  my($env0) = @_;
  return [sub{ my($cenv, $arg0) = @_; return _ats2plpre_ML_list0_patsfun_28($cenv->[1], $arg0); }, $env0];
}

sub
_ats2plpre_ML_list0_patsfun_31__closurerize($)
{
  my($env0) = @_;
  return [sub{ my($cenv, $arg0) = @_; return _ats2plpre_ML_list0_patsfun_31($cenv->[1], $arg0); }, $env0];
}

sub
_ats2plpre_ML_list0_patsfun_35__closurerize($)
{
  my($env0) = @_;
  return [sub{ my($cenv, $arg0) = @_; return _ats2plpre_ML_list0_patsfun_35($cenv->[1], $arg0); }, $env0];
}

sub
_ats2plpre_ML_list0_patsfun_38__closurerize($)
{
  my($env0) = @_;
  return [sub{ my($cenv, $arg0) = @_; return _ats2plpre_ML_list0_patsfun_38($cenv->[1], $arg0); }, $env0];
}

sub
_ats2plpre_ML_list0_patsfun_41__closurerize($)
{
  my($env0) = @_;
  return [sub{ my($cenv, $arg0) = @_; return _ats2plpre_ML_list0_patsfun_41($cenv->[1], $arg0); }, $env0];
}

sub
_ats2plpre_ML_list0_patsfun_44__closurerize($)
{
  my($env0) = @_;
  return [sub{ my($cenv, $arg0) = @_; return _ats2plpre_ML_list0_patsfun_44($cenv->[1], $arg0); }, $env0];
}

sub
_ats2plpre_ML_list0_patsfun_47__closurerize($)
{
  my($env0) = @_;
  return [sub{ my($cenv, $arg0) = @_; return _ats2plpre_ML_list0_patsfun_47($cenv->[1], $arg0); }, $env0];
}


sub
ats2plpre_ML_list0_head_opt($)
{
##
  my($arg0) = @_;
##
  my $tmpret2;
  my $tmp3;
##
  __patsflab_list0_head_opt:
  #ATScaseofseq_beg
  while(1)
  {
    #ATSbranchseq_beg
    __atstmplab6:
    if(ATSCKptriscons($arg0)) { goto __atstmplab9; }
    __atstmplab7:
    $tmpret2 = 0;
    last;
    #ATSbranchseq_end
    #ATSbranchseq_beg
    __atstmplab8:
    __atstmplab9:
    $tmp3 = $arg0->[0];
    $tmpret2 = [$tmp3];
    last;
    #ATSbranchseq_end
  } #end-of-while-loop;
  #ATScaseofseq_end
  return $tmpret2;
} #end-of-function


sub
ats2plpre_ML_list0_tail_opt($)
{
##
  my($arg0) = @_;
##
  my $tmpret5;
  my $tmp7;
##
  __patsflab_list0_tail_opt:
  #ATScaseofseq_beg
  while(1)
  {
    #ATSbranchseq_beg
    __atstmplab10:
    if(ATSCKptriscons($arg0)) { goto __atstmplab13; }
    __atstmplab11:
    $tmpret5 = 0;
    last;
    #ATSbranchseq_end
    #ATSbranchseq_beg
    __atstmplab12:
    __atstmplab13:
    $tmp7 = $arg0->[1];
    $tmpret5 = [$tmp7];
    last;
    #ATSbranchseq_end
  } #end-of-while-loop;
  #ATScaseofseq_end
  return $tmpret5;
} #end-of-function


sub
ats2plpre_ML_list0_length($)
{
##
  my($arg0) = @_;
##
  my $tmpret8;
##
  __patsflab_list0_length:
  $tmpret8 = ats2plpre_list_length($arg0);
  return $tmpret8;
} #end-of-function


sub
ats2plpre_ML_list0_last_opt($)
{
##
  my($arg0) = @_;
##
  my $tmpret9;
  my $tmp13;
  my $tmp14;
  my $tmp15;
##
  __patsflab_list0_last_opt:
  #ATScaseofseq_beg
  while(1)
  {
    #ATSbranchseq_beg
    __atstmplab18:
    if(ATSCKptriscons($arg0)) { goto __atstmplab21; }
    __atstmplab19:
    $tmpret9 = 0;
    last;
    #ATSbranchseq_end
    #ATSbranchseq_beg
    __atstmplab20:
    __atstmplab21:
    $tmp13 = $arg0->[0];
    $tmp14 = $arg0->[1];
    $tmp15 = _ats2plpre_ML_list0_loop_6($tmp13, $tmp14);
    $tmpret9 = [$tmp15];
    last;
    #ATSbranchseq_end
  } #end-of-while-loop;
  #ATScaseofseq_end
  return $tmpret9;
} #end-of-function


sub
_ats2plpre_ML_list0_loop_6($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $apy0;
  my $apy1;
  my $tmpret10;
  my $tmp11;
  my $tmp12;
##
  __patsflab__ats2plpre_ML_list0_loop_6:
  #ATScaseofseq_beg
  while(1)
  {
    #ATSbranchseq_beg
    __atstmplab14:
    if(ATSCKptriscons($arg1)) { goto __atstmplab17; }
    __atstmplab15:
    $tmpret10 = $arg0;
    last;
    #ATSbranchseq_end
    #ATSbranchseq_beg
    __atstmplab16:
    __atstmplab17:
    $tmp11 = $arg1->[0];
    $tmp12 = $arg1->[1];
    #ATStailcalseq_beg
    $apy0 = $tmp11;
    $apy1 = $tmp12;
    $arg0 = $apy0;
    $arg1 = $apy1;
    goto __patsflab__ats2plpre_ML_list0_loop_6;
    #ATStailcalseq_end
    last;
    #ATSbranchseq_end
  } #end-of-while-loop;
  #ATScaseofseq_end
  return $tmpret10;
} #end-of-function


sub
ats2plpre_ML_list0_get_at_opt($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $apy0;
  my $apy1;
  my $tmpret16;
  my $tmp17;
  my $tmp18;
  my $tmp19;
  my $tmp20;
##
  __patsflab_list0_get_at_opt:
  #ATScaseofseq_beg
  while(1)
  {
    #ATSbranchseq_beg
    __atstmplab22:
    if(ATSCKptriscons($arg0)) { goto __atstmplab25; }
    __atstmplab23:
    $tmpret16 = 0;
    last;
    #ATSbranchseq_end
    #ATSbranchseq_beg
    __atstmplab24:
    __atstmplab25:
    $tmp17 = $arg0->[0];
    $tmp18 = $arg0->[1];
    $tmp19 = ats2plpre_gt_int1_int1($arg1, 0);
    if($tmp19) {
      $tmp20 = ats2plpre_sub_int1_int1($arg1, 1);
      #ATStailcalseq_beg
      $apy0 = $tmp18;
      $apy1 = $tmp20;
      $arg0 = $apy0;
      $arg1 = $apy1;
      goto __patsflab_list0_get_at_opt;
      #ATStailcalseq_end
    } else {
      $tmpret16 = [$tmp17];
    } #endif
    last;
    #ATSbranchseq_end
  } #end-of-while-loop;
  #ATScaseofseq_end
  return $tmpret16;
} #end-of-function


sub
ats2plpre_ML_list0_make_intrange_2($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret21;
  my $tmp22;
##
  __patsflab_list0_make_intrange_2:
  $tmp22 = ats2plpre_list_make_intrange_2($arg0, $arg1);
  $tmpret21 = $tmp22;
  return $tmpret21;
} #end-of-function


sub
ats2plpre_ML_list0_make_intrange_3($$$)
{
##
  my($arg0, $arg1, $arg2) = @_;
##
  my $tmpret23;
  my $tmp24;
##
  __patsflab_list0_make_intrange_3:
  $tmp24 = ats2plpre_list_make_intrange_3($arg0, $arg1, $arg2);
  $tmpret23 = $tmp24;
  return $tmpret23;
} #end-of-function


sub
ats2plpre_ML_list0_snoc($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret36;
  my $tmp37;
##
  __patsflab_list0_snoc:
  $tmp37 = ats2plpre_list_snoc($arg0, $arg1);
  $tmpret36 = $tmp37;
  return $tmpret36;
} #end-of-function


sub
ats2plpre_ML_list0_extend($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret38;
  my $tmp39;
##
  __patsflab_list0_extend:
  $tmp39 = ats2plpre_list_extend($arg0, $arg1);
  $tmpret38 = $tmp39;
  return $tmpret38;
} #end-of-function


sub
ats2plpre_ML_list0_append($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret40;
  my $tmp41;
##
  __patsflab_list0_append:
  $tmp41 = ats2plpre_list_append($arg0, $arg1);
  $tmpret40 = $tmp41;
  return $tmpret40;
} #end-of-function


sub
ats2plpre_ML_list0_reverse($)
{
##
  my($arg0) = @_;
##
  my $tmpret42;
  my $tmp43;
##
  __patsflab_list0_reverse:
  $tmp43 = ats2plpre_list_reverse($arg0);
  $tmpret42 = $tmp43;
  return $tmpret42;
} #end-of-function


sub
ats2plpre_ML_list0_reverse_append($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret44;
  my $tmp45;
##
  __patsflab_list0_reverse_append:
  $tmp45 = ats2plpre_list_reverse_append($arg0, $arg1);
  $tmpret44 = $tmp45;
  return $tmpret44;
} #end-of-function


sub
ats2plpre_ML_list0_exists($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret46;
##
  __patsflab_list0_exists:
  $tmpret46 = ats2plpre_list_exists($arg0, $arg1);
  return $tmpret46;
} #end-of-function


sub
ats2plpre_ML_list0_exists_method($)
{
##
  my($arg0) = @_;
##
  my $tmpret47;
##
  __patsflab_list0_exists_method:
  $tmpret47 = _ats2plpre_ML_list0_patsfun_22__closurerize($arg0);
  return $tmpret47;
} #end-of-function


sub
_ats2plpre_ML_list0_patsfun_22($$)
{
##
  my($env0, $arg0) = @_;
##
  my $tmpret48;
##
  __patsflab__ats2plpre_ML_list0_patsfun_22:
  $tmpret48 = ats2plpre_ML_list0_exists($env0, $arg0);
  return $tmpret48;
} #end-of-function


sub
ats2plpre_ML_list0_iexists($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret49;
##
  __patsflab_list0_iexists:
  $tmpret49 = ats2plpre_list_iexists($arg0, $arg1);
  return $tmpret49;
} #end-of-function


sub
ats2plpre_ML_list0_iexists_method($)
{
##
  my($arg0) = @_;
##
  my $tmpret50;
##
  __patsflab_list0_iexists_method:
  $tmpret50 = _ats2plpre_ML_list0_patsfun_25__closurerize($arg0);
  return $tmpret50;
} #end-of-function


sub
_ats2plpre_ML_list0_patsfun_25($$)
{
##
  my($env0, $arg0) = @_;
##
  my $tmpret51;
##
  __patsflab__ats2plpre_ML_list0_patsfun_25:
  $tmpret51 = ats2plpre_ML_list0_iexists($env0, $arg0);
  return $tmpret51;
} #end-of-function


sub
ats2plpre_ML_list0_forall($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret52;
##
  __patsflab_list0_forall:
  $tmpret52 = ats2plpre_list_forall($arg0, $arg1);
  return $tmpret52;
} #end-of-function


sub
ats2plpre_ML_list0_forall_method($)
{
##
  my($arg0) = @_;
##
  my $tmpret53;
##
  __patsflab_list0_forall_method:
  $tmpret53 = _ats2plpre_ML_list0_patsfun_28__closurerize($arg0);
  return $tmpret53;
} #end-of-function


sub
_ats2plpre_ML_list0_patsfun_28($$)
{
##
  my($env0, $arg0) = @_;
##
  my $tmpret54;
##
  __patsflab__ats2plpre_ML_list0_patsfun_28:
  $tmpret54 = ats2plpre_ML_list0_forall($env0, $arg0);
  return $tmpret54;
} #end-of-function


sub
ats2plpre_ML_list0_iforall($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret55;
##
  __patsflab_list0_iforall:
  $tmpret55 = ats2plpre_list_iforall($arg0, $arg1);
  return $tmpret55;
} #end-of-function


sub
ats2plpre_ML_list0_iforall_method($)
{
##
  my($arg0) = @_;
##
  my $tmpret56;
##
  __patsflab_list0_iforall_method:
  $tmpret56 = _ats2plpre_ML_list0_patsfun_31__closurerize($arg0);
  return $tmpret56;
} #end-of-function


sub
_ats2plpre_ML_list0_patsfun_31($$)
{
##
  my($env0, $arg0) = @_;
##
  my $tmpret57;
##
  __patsflab__ats2plpre_ML_list0_patsfun_31:
  $tmpret57 = ats2plpre_ML_list0_iforall($env0, $arg0);
  return $tmpret57;
} #end-of-function


sub
ats2plpre_ML_list0_app($$)
{
##
  my($arg0, $arg1) = @_;
##
##
  __patsflab_list0_app:
  ats2plpre_ML_list0_foreach($arg0, $arg1);
  return;#_void
} #end-of-function


sub
ats2plpre_ML_list0_foreach($$)
{
##
  my($arg0, $arg1) = @_;
##
##
  __patsflab_list0_foreach:
  ats2plpre_list_foreach($arg0, $arg1);
  return;#_void
} #end-of-function


sub
ats2plpre_ML_list0_foreach_method($)
{
##
  my($arg0) = @_;
##
  my $tmpret60;
##
  __patsflab_list0_foreach_method:
  $tmpret60 = _ats2plpre_ML_list0_patsfun_35__closurerize($arg0);
  return $tmpret60;
} #end-of-function


sub
_ats2plpre_ML_list0_patsfun_35($$)
{
##
  my($env0, $arg0) = @_;
##
##
  __patsflab__ats2plpre_ML_list0_patsfun_35:
  ats2plpre_ML_list0_foreach($env0, $arg0);
  return;#_void
} #end-of-function


sub
ats2plpre_ML_list0_iforeach($$)
{
##
  my($arg0, $arg1) = @_;
##
##
  __patsflab_list0_iforeach:
  ats2plpre_list_iforeach($arg0, $arg1);
  return;#_void
} #end-of-function


sub
ats2plpre_ML_list0_iforeach_method($)
{
##
  my($arg0) = @_;
##
  my $tmpret63;
##
  __patsflab_list0_iforeach_method:
  $tmpret63 = _ats2plpre_ML_list0_patsfun_38__closurerize($arg0);
  return $tmpret63;
} #end-of-function


sub
_ats2plpre_ML_list0_patsfun_38($$)
{
##
  my($env0, $arg0) = @_;
##
##
  __patsflab__ats2plpre_ML_list0_patsfun_38:
  ats2plpre_ML_list0_iforeach($env0, $arg0);
  return;#_void
} #end-of-function


sub
ats2plpre_ML_list0_rforeach($$)
{
##
  my($arg0, $arg1) = @_;
##
##
  __patsflab_list0_rforeach:
  ats2plpre_list_rforeach($arg0, $arg1);
  return;#_void
} #end-of-function


sub
ats2plpre_ML_list0_rforeach_method($)
{
##
  my($arg0) = @_;
##
  my $tmpret66;
##
  __patsflab_list0_rforeach_method:
  $tmpret66 = _ats2plpre_ML_list0_patsfun_41__closurerize($arg0);
  return $tmpret66;
} #end-of-function


sub
_ats2plpre_ML_list0_patsfun_41($$)
{
##
  my($env0, $arg0) = @_;
##
##
  __patsflab__ats2plpre_ML_list0_patsfun_41:
  ats2plpre_ML_list0_rforeach($env0, $arg0);
  return;#_void
} #end-of-function


sub
ats2plpre_ML_list0_filter($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret68;
  my $tmp69;
##
  __patsflab_list0_filter:
  $tmp69 = ats2plpre_list_filter($arg0, $arg1);
  $tmpret68 = $tmp69;
  return $tmpret68;
} #end-of-function


sub
ats2plpre_ML_list0_filter_method($)
{
##
  my($arg0) = @_;
##
  my $tmpret70;
##
  __patsflab_list0_filter_method:
  $tmpret70 = _ats2plpre_ML_list0_patsfun_44__closurerize($arg0);
  return $tmpret70;
} #end-of-function


sub
_ats2plpre_ML_list0_patsfun_44($$)
{
##
  my($env0, $arg0) = @_;
##
  my $tmpret71;
##
  __patsflab__ats2plpre_ML_list0_patsfun_44:
  $tmpret71 = ats2plpre_ML_list0_filter($env0, $arg0);
  return $tmpret71;
} #end-of-function


sub
ats2plpre_ML_list0_map($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret72;
  my $tmp73;
##
  __patsflab_list0_map:
  $tmp73 = ats2plpre_list_map($arg0, $arg1);
  $tmpret72 = $tmp73;
  return $tmpret72;
} #end-of-function


sub
ats2plpre_ML_list0_map_method($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret74;
##
  __patsflab_list0_map_method:
  $tmpret74 = _ats2plpre_ML_list0_patsfun_47__closurerize($arg0);
  return $tmpret74;
} #end-of-function


sub
_ats2plpre_ML_list0_patsfun_47($$)
{
##
  my($env0, $arg0) = @_;
##
  my $tmpret75;
##
  __patsflab__ats2plpre_ML_list0_patsfun_47:
  $tmpret75 = ats2plpre_ML_list0_map($env0, $arg0);
  return $tmpret75;
} #end-of-function


sub
ats2plpre_ML_list0_foldleft($$$)
{
##
  my($arg0, $arg1, $arg2) = @_;
##
  my $tmpret76;
##
  __patsflab_list0_foldleft:
  $tmpret76 = _ats2plpre_ML_list0_aux_49($arg2, $arg1, $arg0);
  return $tmpret76;
} #end-of-function


sub
_ats2plpre_ML_list0_aux_49($$$)
{
##
  my($env0, $arg0, $arg1) = @_;
##
  my $apy0;
  my $apy1;
  my $tmpret77;
  my $tmp78;
  my $tmp79;
  my $tmp80;
##
  __patsflab__ats2plpre_ML_list0_aux_49:
  #ATScaseofseq_beg
  while(1)
  {
    #ATSbranchseq_beg
    __atstmplab30:
    if(ATSCKptriscons($arg1)) { goto __atstmplab33; }
    __atstmplab31:
    $tmpret77 = $arg0;
    last;
    #ATSbranchseq_end
    #ATSbranchseq_beg
    __atstmplab32:
    __atstmplab33:
    $tmp78 = $arg1->[0];
    $tmp79 = $arg1->[1];
    $tmp80 = &{$env0->[0]}($env0, $arg0, $tmp78);
    #ATStailcalseq_beg
    $apy0 = $tmp80;
    $apy1 = $tmp79;
    $arg0 = $apy0;
    $arg1 = $apy1;
    goto __patsflab__ats2plpre_ML_list0_aux_49;
    #ATStailcalseq_end
    last;
    #ATSbranchseq_end
  } #end-of-while-loop;
  #ATScaseofseq_end
  return $tmpret77;
} #end-of-function


sub
ats2plpre_ML_list0_foldright($$$)
{
##
  my($arg0, $arg1, $arg2) = @_;
##
  my $tmpret81;
##
  __patsflab_list0_foldright:
  $tmpret81 = _ats2plpre_ML_list0_aux_51($arg1, $arg2, $arg0, $arg2);
  return $tmpret81;
} #end-of-function


sub
_ats2plpre_ML_list0_aux_51($$$$)
{
##
  my($env0, $env1, $arg0, $arg1) = @_;
##
  my $tmpret82;
  my $tmp83;
  my $tmp84;
  my $tmp85;
##
  __patsflab__ats2plpre_ML_list0_aux_51:
  #ATScaseofseq_beg
  while(1)
  {
    #ATSbranchseq_beg
    __atstmplab34:
    if(ATSCKptriscons($arg0)) { goto __atstmplab37; }
    __atstmplab35:
    $tmpret82 = $arg1;
    last;
    #ATSbranchseq_end
    #ATSbranchseq_beg
    __atstmplab36:
    __atstmplab37:
    $tmp83 = $arg0->[0];
    $tmp84 = $arg0->[1];
    $tmp85 = _ats2plpre_ML_list0_aux_51($env0, $env1, $tmp84, $env1);
    $tmpret82 = &{$env0->[0]}($env0, $tmp83, $tmp85);
    last;
    #ATSbranchseq_end
  } #end-of-while-loop;
  #ATScaseofseq_end
  return $tmpret82;
} #end-of-function


sub
ats2plpre_ML_list0_sort_2($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret88;
  my $tmp89;
##
  __patsflab_list0_sort_2:
  $tmp89 = ats2plpre_list_sort_2($arg0, $arg1);
  $tmpret88 = $tmp89;
  return $tmpret88;
} #end-of-function

######
##
## end-of-compilation-unit
##
######

## ###### ###### ##

## end of [libatscc2pl_all.pl] ##
