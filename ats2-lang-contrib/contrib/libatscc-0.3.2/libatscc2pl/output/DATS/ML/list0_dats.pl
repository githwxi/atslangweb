######
##
## The Perl code is generated by atscc2pl
## The starting compilation time is: 2016-12-20:  0h:32m
##
######
sub
_ats2plpre_ML_list0_patsfun_26__closurerize($)
{
  my($env0) = @_;
  return [sub{ my($cenv, $arg0) = @_; return _ats2plpre_ML_list0_patsfun_26($cenv->[1], $arg0); }, $env0];
}

sub
_ats2plpre_ML_list0_patsfun_29__closurerize($)
{
  my($env0) = @_;
  return [sub{ my($cenv, $arg0) = @_; return _ats2plpre_ML_list0_patsfun_29($cenv->[1], $arg0); }, $env0];
}

sub
_ats2plpre_ML_list0_patsfun_32__closurerize($)
{
  my($env0) = @_;
  return [sub{ my($cenv, $arg0) = @_; return _ats2plpre_ML_list0_patsfun_32($cenv->[1], $arg0); }, $env0];
}

sub
_ats2plpre_ML_list0_patsfun_35__closurerize($)
{
  my($env0) = @_;
  return [sub{ my($cenv, $arg0) = @_; return _ats2plpre_ML_list0_patsfun_35($cenv->[1], $arg0); }, $env0];
}

sub
_ats2plpre_ML_list0_patsfun_39__closurerize($)
{
  my($env0) = @_;
  return [sub{ my($cenv, $arg0) = @_; return _ats2plpre_ML_list0_patsfun_39($cenv->[1], $arg0); }, $env0];
}

sub
_ats2plpre_ML_list0_patsfun_42__closurerize($)
{
  my($env0) = @_;
  return [sub{ my($cenv, $arg0) = @_; return _ats2plpre_ML_list0_patsfun_42($cenv->[1], $arg0); }, $env0];
}

sub
_ats2plpre_ML_list0_patsfun_45__closurerize($)
{
  my($env0) = @_;
  return [sub{ my($cenv, $arg0) = @_; return _ats2plpre_ML_list0_patsfun_45($cenv->[1], $arg0); }, $env0];
}

sub
_ats2plpre_ML_list0_patsfun_48__closurerize($)
{
  my($env0) = @_;
  return [sub{ my($cenv, $arg0) = @_; return _ats2plpre_ML_list0_patsfun_48($cenv->[1], $arg0); }, $env0];
}

sub
_ats2plpre_ML_list0_patsfun_51__closurerize($)
{
  my($env0) = @_;
  return [sub{ my($cenv, $arg0) = @_; return _ats2plpre_ML_list0_patsfun_51($cenv->[1], $arg0); }, $env0];
}

sub
_ats2plpre_ML_list0_patsfun_59__closurerize($$)
{
  my($env0, $env1) = @_;
  return [sub{ my($cenv, $arg0) = @_; return _ats2plpre_ML_list0_patsfun_59($cenv->[1], $cenv->[2], $arg0); }, $env0, $env1];
}


sub
ats2plpre_ML_list0_head_opt($)
{
##
  my($arg0) = @_;
##
  my $tmpret4;
  my $tmp5;
##
  __patsflab_list0_head_opt:
  #ATScaseofseq_beg
  while(1)
  {
    #ATSbranchseq_beg
    __atstmplab6:
    if(ATSCKptriscons($arg0)) { goto __atstmplab9; }
    __atstmplab7:
    $tmpret4 = 0;
    last;
    #ATSbranchseq_end
    #ATSbranchseq_beg
    __atstmplab8:
    __atstmplab9:
    $tmp5 = $arg0->[0];
    $tmpret4 = [$tmp5];
    last;
    #ATSbranchseq_end
  } #end-of-while-loop;
  #ATScaseofseq_end
  return $tmpret4;
} #end-of-function


sub
ats2plpre_ML_list0_tail_opt($)
{
##
  my($arg0) = @_;
##
  my $tmpret7;
  my $tmp9;
##
  __patsflab_list0_tail_opt:
  #ATScaseofseq_beg
  while(1)
  {
    #ATSbranchseq_beg
    __atstmplab10:
    if(ATSCKptriscons($arg0)) { goto __atstmplab13; }
    __atstmplab11:
    $tmpret7 = 0;
    last;
    #ATSbranchseq_end
    #ATSbranchseq_beg
    __atstmplab12:
    __atstmplab13:
    $tmp9 = $arg0->[1];
    $tmpret7 = [$tmp9];
    last;
    #ATSbranchseq_end
  } #end-of-while-loop;
  #ATScaseofseq_end
  return $tmpret7;
} #end-of-function


sub
ats2plpre_ML_list0_length($)
{
##
  my($arg0) = @_;
##
  my $tmpret10;
##
  __patsflab_list0_length:
  $tmpret10 = ats2plpre_list_length($arg0);
  return $tmpret10;
} #end-of-function


sub
ats2plpre_ML_list0_last_opt($)
{
##
  my($arg0) = @_;
##
  my $tmpret11;
  my $tmp15;
  my $tmp16;
  my $tmp17;
##
  __patsflab_list0_last_opt:
  #ATScaseofseq_beg
  while(1)
  {
    #ATSbranchseq_beg
    __atstmplab18:
    if(ATSCKptriscons($arg0)) { goto __atstmplab21; }
    __atstmplab19:
    $tmpret11 = 0;
    last;
    #ATSbranchseq_end
    #ATSbranchseq_beg
    __atstmplab20:
    __atstmplab21:
    $tmp15 = $arg0->[0];
    $tmp16 = $arg0->[1];
    $tmp17 = _ats2plpre_ML_list0_loop_7($tmp15, $tmp16);
    $tmpret11 = [$tmp17];
    last;
    #ATSbranchseq_end
  } #end-of-while-loop;
  #ATScaseofseq_end
  return $tmpret11;
} #end-of-function


sub
_ats2plpre_ML_list0_loop_7($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $apy0;
  my $apy1;
  my $tmpret12;
  my $tmp13;
  my $tmp14;
##
  __patsflab__ats2plpre_ML_list0_loop_7:
  #ATScaseofseq_beg
  while(1)
  {
    #ATSbranchseq_beg
    __atstmplab14:
    if(ATSCKptriscons($arg1)) { goto __atstmplab17; }
    __atstmplab15:
    $tmpret12 = $arg0;
    last;
    #ATSbranchseq_end
    #ATSbranchseq_beg
    __atstmplab16:
    __atstmplab17:
    $tmp13 = $arg1->[0];
    $tmp14 = $arg1->[1];
    #ATStailcalseq_beg
    $apy0 = $tmp13;
    $apy1 = $tmp14;
    $arg0 = $apy0;
    $arg1 = $apy1;
    goto __patsflab__ats2plpre_ML_list0_loop_7;
    #ATStailcalseq_end
    last;
    #ATSbranchseq_end
  } #end-of-while-loop;
  #ATScaseofseq_end
  return $tmpret12;
} #end-of-function


sub
ats2plpre_ML_list0_get_at_opt($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $apy0;
  my $apy1;
  my $tmpret18;
  my $tmp19;
  my $tmp20;
  my $tmp21;
  my $tmp22;
##
  __patsflab_list0_get_at_opt:
  #ATScaseofseq_beg
  while(1)
  {
    #ATSbranchseq_beg
    __atstmplab22:
    if(ATSCKptriscons($arg0)) { goto __atstmplab25; }
    __atstmplab23:
    $tmpret18 = 0;
    last;
    #ATSbranchseq_end
    #ATSbranchseq_beg
    __atstmplab24:
    __atstmplab25:
    $tmp19 = $arg0->[0];
    $tmp20 = $arg0->[1];
    $tmp21 = ats2plpre_gt_int1_int1($arg1, 0);
    if($tmp21) {
      $tmp22 = ats2plpre_sub_int1_int1($arg1, 1);
      #ATStailcalseq_beg
      $apy0 = $tmp20;
      $apy1 = $tmp22;
      $arg0 = $apy0;
      $arg1 = $apy1;
      goto __patsflab_list0_get_at_opt;
      #ATStailcalseq_end
    } else {
      $tmpret18 = [$tmp19];
    } #endif
    last;
    #ATSbranchseq_end
  } #end-of-while-loop;
  #ATScaseofseq_end
  return $tmpret18;
} #end-of-function


sub
ats2plpre_ML_list0_make_intrange_2($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret23;
  my $tmp24;
##
  __patsflab_list0_make_intrange_2:
  $tmp24 = ats2plpre_list_make_intrange_2($arg0, $arg1);
  $tmpret23 = $tmp24;
  return $tmpret23;
} #end-of-function


sub
ats2plpre_ML_list0_make_intrange_3($$$)
{
##
  my($arg0, $arg1, $arg2) = @_;
##
  my $tmpret25;
  my $tmp26;
##
  __patsflab_list0_make_intrange_3:
  $tmp26 = ats2plpre_list_make_intrange_3($arg0, $arg1, $arg2);
  $tmpret25 = $tmp26;
  return $tmpret25;
} #end-of-function


sub
ats2plpre_ML_list0_snoc($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret38;
  my $tmp39;
##
  __patsflab_list0_snoc:
  $tmp39 = ats2plpre_list_snoc($arg0, $arg1);
  $tmpret38 = $tmp39;
  return $tmpret38;
} #end-of-function


sub
ats2plpre_ML_list0_extend($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret40;
  my $tmp41;
##
  __patsflab_list0_extend:
  $tmp41 = ats2plpre_list_extend($arg0, $arg1);
  $tmpret40 = $tmp41;
  return $tmpret40;
} #end-of-function


sub
ats2plpre_ML_list0_append($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret42;
  my $tmp43;
##
  __patsflab_list0_append:
  $tmp43 = ats2plpre_list_append($arg0, $arg1);
  $tmpret42 = $tmp43;
  return $tmpret42;
} #end-of-function


sub
ats2plpre_ML_list0_reverse($)
{
##
  my($arg0) = @_;
##
  my $tmpret44;
  my $tmp45;
##
  __patsflab_list0_reverse:
  $tmp45 = ats2plpre_list_reverse($arg0);
  $tmpret44 = $tmp45;
  return $tmpret44;
} #end-of-function


sub
ats2plpre_ML_list0_reverse_append($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret46;
  my $tmp47;
##
  __patsflab_list0_reverse_append:
  $tmp47 = ats2plpre_list_reverse_append($arg0, $arg1);
  $tmpret46 = $tmp47;
  return $tmpret46;
} #end-of-function


sub
ats2plpre_ML_list0_concat($)
{
##
  my($arg0) = @_;
##
  my $tmpret48;
  my $tmp49;
##
  __patsflab_list0_concat:
  $tmp49 = ats2plpre_list_concat($arg0);
  $tmpret48 = $tmp49;
  return $tmpret48;
} #end-of-function


sub
ats2plpre_ML_list0_remove_at_opt($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret50;
##
  __patsflab_list0_remove_at_opt:
  $tmpret50 = _ats2plpre_ML_list0_aux_23($arg0, 0);
  return $tmpret50;
} #end-of-function


sub
_ats2plpre_ML_list0_aux_23($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret51;
  my $tmp52;
  my $tmp53;
  my $tmp54;
  my $tmp55;
  my $tmp56;
  my $tmp57;
  my $tmp58;
##
  __patsflab__ats2plpre_ML_list0_aux_23:
  #ATScaseofseq_beg
  while(1)
  {
    #ATSbranchseq_beg
    __atstmplab30:
    if(ATSCKptriscons($arg0)) { goto __atstmplab33; }
    __atstmplab31:
    $tmpret51 = 0;
    last;
    #ATSbranchseq_end
    #ATSbranchseq_beg
    __atstmplab32:
    __atstmplab33:
    $tmp52 = $arg0->[0];
    $tmp53 = $arg0->[1];
    $tmp54 = ats2plpre_gt_int1_int1($arg1, 0);
    if($tmp54) {
      $tmp56 = ats2plpre_sub_int1_int1($arg1, 1);
      $tmp55 = _ats2plpre_ML_list0_aux_23($tmp53, $tmp56);
      #ATScaseofseq_beg
      while(1)
      {
        #ATSbranchseq_beg
        __atstmplab34:
        if(ATSCKptriscons($tmp55)) { goto __atstmplab37; }
        __atstmplab35:
        $tmpret51 = 0;
        last;
        #ATSbranchseq_end
        #ATSbranchseq_beg
        __atstmplab36:
        __atstmplab37:
        $tmp57 = $tmp55->[0];
        $tmp58 = [$tmp52, $tmp57];
        $tmpret51 = [$tmp58];
        last;
        #ATSbranchseq_end
      } #end-of-while-loop;
      #ATScaseofseq_end
    } else {
      $tmpret51 = [$tmp53];
    } #endif
    last;
    #ATSbranchseq_end
  } #end-of-while-loop;
  #ATScaseofseq_end
  return $tmpret51;
} #end-of-function


sub
ats2plpre_ML_list0_exists($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret59;
##
  __patsflab_list0_exists:
  $tmpret59 = ats2plpre_list_exists($arg0, $arg1);
  return $tmpret59;
} #end-of-function


sub
ats2plpre_ML_list0_exists_method($)
{
##
  my($arg0) = @_;
##
  my $tmpret60;
##
  __patsflab_list0_exists_method:
  $tmpret60 = _ats2plpre_ML_list0_patsfun_26__closurerize($arg0);
  return $tmpret60;
} #end-of-function


sub
_ats2plpre_ML_list0_patsfun_26($$)
{
##
  my($env0, $arg0) = @_;
##
  my $tmpret61;
##
  __patsflab__ats2plpre_ML_list0_patsfun_26:
  $tmpret61 = ats2plpre_ML_list0_exists($env0, $arg0);
  return $tmpret61;
} #end-of-function


sub
ats2plpre_ML_list0_iexists($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret62;
##
  __patsflab_list0_iexists:
  $tmpret62 = ats2plpre_list_iexists($arg0, $arg1);
  return $tmpret62;
} #end-of-function


sub
ats2plpre_ML_list0_iexists_method($)
{
##
  my($arg0) = @_;
##
  my $tmpret63;
##
  __patsflab_list0_iexists_method:
  $tmpret63 = _ats2plpre_ML_list0_patsfun_29__closurerize($arg0);
  return $tmpret63;
} #end-of-function


sub
_ats2plpre_ML_list0_patsfun_29($$)
{
##
  my($env0, $arg0) = @_;
##
  my $tmpret64;
##
  __patsflab__ats2plpre_ML_list0_patsfun_29:
  $tmpret64 = ats2plpre_ML_list0_iexists($env0, $arg0);
  return $tmpret64;
} #end-of-function


sub
ats2plpre_ML_list0_forall($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret65;
##
  __patsflab_list0_forall:
  $tmpret65 = ats2plpre_list_forall($arg0, $arg1);
  return $tmpret65;
} #end-of-function


sub
ats2plpre_ML_list0_forall_method($)
{
##
  my($arg0) = @_;
##
  my $tmpret66;
##
  __patsflab_list0_forall_method:
  $tmpret66 = _ats2plpre_ML_list0_patsfun_32__closurerize($arg0);
  return $tmpret66;
} #end-of-function


sub
_ats2plpre_ML_list0_patsfun_32($$)
{
##
  my($env0, $arg0) = @_;
##
  my $tmpret67;
##
  __patsflab__ats2plpre_ML_list0_patsfun_32:
  $tmpret67 = ats2plpre_ML_list0_forall($env0, $arg0);
  return $tmpret67;
} #end-of-function


sub
ats2plpre_ML_list0_iforall($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret68;
##
  __patsflab_list0_iforall:
  $tmpret68 = ats2plpre_list_iforall($arg0, $arg1);
  return $tmpret68;
} #end-of-function


sub
ats2plpre_ML_list0_iforall_method($)
{
##
  my($arg0) = @_;
##
  my $tmpret69;
##
  __patsflab_list0_iforall_method:
  $tmpret69 = _ats2plpre_ML_list0_patsfun_35__closurerize($arg0);
  return $tmpret69;
} #end-of-function


sub
_ats2plpre_ML_list0_patsfun_35($$)
{
##
  my($env0, $arg0) = @_;
##
  my $tmpret70;
##
  __patsflab__ats2plpre_ML_list0_patsfun_35:
  $tmpret70 = ats2plpre_ML_list0_iforall($env0, $arg0);
  return $tmpret70;
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
  my $tmpret73;
##
  __patsflab_list0_foreach_method:
  $tmpret73 = _ats2plpre_ML_list0_patsfun_39__closurerize($arg0);
  return $tmpret73;
} #end-of-function


sub
_ats2plpre_ML_list0_patsfun_39($$)
{
##
  my($env0, $arg0) = @_;
##
##
  __patsflab__ats2plpre_ML_list0_patsfun_39:
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
  my $tmpret76;
##
  __patsflab_list0_iforeach_method:
  $tmpret76 = _ats2plpre_ML_list0_patsfun_42__closurerize($arg0);
  return $tmpret76;
} #end-of-function


sub
_ats2plpre_ML_list0_patsfun_42($$)
{
##
  my($env0, $arg0) = @_;
##
##
  __patsflab__ats2plpre_ML_list0_patsfun_42:
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
  my $tmpret79;
##
  __patsflab_list0_rforeach_method:
  $tmpret79 = _ats2plpre_ML_list0_patsfun_45__closurerize($arg0);
  return $tmpret79;
} #end-of-function


sub
_ats2plpre_ML_list0_patsfun_45($$)
{
##
  my($env0, $arg0) = @_;
##
##
  __patsflab__ats2plpre_ML_list0_patsfun_45:
  ats2plpre_ML_list0_rforeach($env0, $arg0);
  return;#_void
} #end-of-function


sub
ats2plpre_ML_list0_filter($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret81;
  my $tmp82;
##
  __patsflab_list0_filter:
  $tmp82 = ats2plpre_list_filter($arg0, $arg1);
  $tmpret81 = $tmp82;
  return $tmpret81;
} #end-of-function


sub
ats2plpre_ML_list0_filter_method($)
{
##
  my($arg0) = @_;
##
  my $tmpret83;
##
  __patsflab_list0_filter_method:
  $tmpret83 = _ats2plpre_ML_list0_patsfun_48__closurerize($arg0);
  return $tmpret83;
} #end-of-function


sub
_ats2plpre_ML_list0_patsfun_48($$)
{
##
  my($env0, $arg0) = @_;
##
  my $tmpret84;
##
  __patsflab__ats2plpre_ML_list0_patsfun_48:
  $tmpret84 = ats2plpre_ML_list0_filter($env0, $arg0);
  return $tmpret84;
} #end-of-function


sub
ats2plpre_ML_list0_map($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret85;
  my $tmp86;
##
  __patsflab_list0_map:
  $tmp86 = ats2plpre_list_map($arg0, $arg1);
  $tmpret85 = $tmp86;
  return $tmpret85;
} #end-of-function


sub
ats2plpre_ML_list0_map_method($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret87;
##
  __patsflab_list0_map_method:
  $tmpret87 = _ats2plpre_ML_list0_patsfun_51__closurerize($arg0);
  return $tmpret87;
} #end-of-function


sub
_ats2plpre_ML_list0_patsfun_51($$)
{
##
  my($env0, $arg0) = @_;
##
  my $tmpret88;
##
  __patsflab__ats2plpre_ML_list0_patsfun_51:
  $tmpret88 = ats2plpre_ML_list0_map($env0, $arg0);
  return $tmpret88;
} #end-of-function


sub
ats2plpre_ML_list0_mapcons($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret89;
  my $tmp90;
  my $tmp91;
  my $tmp92;
  my $tmp93;
##
  __patsflab_list0_mapcons:
  #ATScaseofseq_beg
  while(1)
  {
    #ATSbranchseq_beg
    __atstmplab38:
    if(ATSCKptriscons($arg1)) { goto __atstmplab41; }
    __atstmplab39:
    $tmpret89 = 0;
    last;
    #ATSbranchseq_end
    #ATSbranchseq_beg
    __atstmplab40:
    __atstmplab41:
    $tmp90 = $arg1->[0];
    $tmp91 = $arg1->[1];
    $tmp92 = [$arg0, $tmp90];
    $tmp93 = ats2plpre_ML_list0_mapcons($arg0, $tmp91);
    $tmpret89 = [$tmp92, $tmp93];
    last;
    #ATSbranchseq_end
  } #end-of-while-loop;
  #ATScaseofseq_end
  return $tmpret89;
} #end-of-function


sub
ats2plpre_ML_list0_find_opt($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $apy0;
  my $apy1;
  my $tmpret94;
  my $tmp95;
  my $tmp96;
  my $tmp97;
##
  __patsflab_list0_find_opt:
  #ATScaseofseq_beg
  while(1)
  {
    #ATSbranchseq_beg
    __atstmplab42:
    if(ATSCKptriscons($arg0)) { goto __atstmplab45; }
    __atstmplab43:
    $tmpret94 = 0;
    last;
    #ATSbranchseq_end
    #ATSbranchseq_beg
    __atstmplab44:
    __atstmplab45:
    $tmp95 = $arg0->[0];
    $tmp96 = $arg0->[1];
    $tmp97 = &{$arg1->[0]}($arg1, $tmp95);
    if($tmp97) {
      $tmpret94 = [$tmp95];
    } else {
      #ATStailcalseq_beg
      $apy0 = $tmp96;
      $apy1 = $arg1;
      $arg0 = $apy0;
      $arg1 = $apy1;
      goto __patsflab_list0_find_opt;
      #ATStailcalseq_end
    } #endif
    last;
    #ATSbranchseq_end
  } #end-of-while-loop;
  #ATScaseofseq_end
  return $tmpret94;
} #end-of-function


sub
ats2plpre_ML_list0_zip($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret98;
##
  __patsflab_list0_zip:
  $tmpret98 = _ats2plpre_ML_list0_aux_55($arg0, $arg1);
  return $tmpret98;
} #end-of-function


sub
_ats2plpre_ML_list0_aux_55($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret99;
  my $tmp100;
  my $tmp101;
  my $tmp102;
  my $tmp103;
  my $tmp104;
  my $tmp105;
##
  __patsflab__ats2plpre_ML_list0_aux_55:
  #ATScaseofseq_beg
  while(1)
  {
    #ATSbranchseq_beg
    __atstmplab46:
    if(ATSCKptriscons($arg0)) { goto __atstmplab49; }
    __atstmplab47:
    $tmpret99 = 0;
    last;
    #ATSbranchseq_end
    #ATSbranchseq_beg
    __atstmplab48:
    __atstmplab49:
    $tmp100 = $arg0->[0];
    $tmp101 = $arg0->[1];
    #ATScaseofseq_beg
    while(1)
    {
      #ATSbranchseq_beg
      __atstmplab50:
      if(ATSCKptriscons($arg1)) { goto __atstmplab53; }
      __atstmplab51:
      $tmpret99 = 0;
      last;
      #ATSbranchseq_end
      #ATSbranchseq_beg
      __atstmplab52:
      __atstmplab53:
      $tmp102 = $arg1->[0];
      $tmp103 = $arg1->[1];
      $tmp104 = [$tmp100, $tmp102];
      $tmp105 = _ats2plpre_ML_list0_aux_55($tmp101, $tmp103);
      $tmpret99 = [$tmp104, $tmp105];
      last;
      #ATSbranchseq_end
    } #end-of-while-loop;
    #ATScaseofseq_end
    last;
    #ATSbranchseq_end
  } #end-of-while-loop;
  #ATScaseofseq_end
  return $tmpret99;
} #end-of-function


sub
ats2plpre_ML_list0_zipwith($$$)
{
##
  my($arg0, $arg1, $arg2) = @_;
##
  my $tmpret106;
##
  __patsflab_list0_zipwith:
  $tmpret106 = _ats2plpre_ML_list0_aux_57($arg0, $arg1, $arg2);
  return $tmpret106;
} #end-of-function


sub
_ats2plpre_ML_list0_aux_57($$$)
{
##
  my($arg0, $arg1, $arg2) = @_;
##
  my $tmpret107;
  my $tmp108;
  my $tmp109;
  my $tmp110;
  my $tmp111;
  my $tmp112;
  my $tmp113;
##
  __patsflab__ats2plpre_ML_list0_aux_57:
  #ATScaseofseq_beg
  while(1)
  {
    #ATSbranchseq_beg
    __atstmplab54:
    if(ATSCKptriscons($arg0)) { goto __atstmplab57; }
    __atstmplab55:
    $tmpret107 = 0;
    last;
    #ATSbranchseq_end
    #ATSbranchseq_beg
    __atstmplab56:
    __atstmplab57:
    $tmp108 = $arg0->[0];
    $tmp109 = $arg0->[1];
    #ATScaseofseq_beg
    while(1)
    {
      #ATSbranchseq_beg
      __atstmplab58:
      if(ATSCKptriscons($arg1)) { goto __atstmplab61; }
      __atstmplab59:
      $tmpret107 = 0;
      last;
      #ATSbranchseq_end
      #ATSbranchseq_beg
      __atstmplab60:
      __atstmplab61:
      $tmp110 = $arg1->[0];
      $tmp111 = $arg1->[1];
      $tmp112 = &{$arg2->[0]}($arg2, $tmp108, $tmp110);
      $tmp113 = _ats2plpre_ML_list0_aux_57($tmp109, $tmp111, $arg2);
      $tmpret107 = [$tmp112, $tmp113];
      last;
      #ATSbranchseq_end
    } #end-of-while-loop;
    #ATScaseofseq_end
    last;
    #ATSbranchseq_end
  } #end-of-while-loop;
  #ATScaseofseq_end
  return $tmpret107;
} #end-of-function


sub
ats2plpre_ML_list0_zipwith_method($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret114;
##
  __patsflab_list0_zipwith_method:
  $tmpret114 = _ats2plpre_ML_list0_patsfun_59__closurerize($arg0, $arg1);
  return $tmpret114;
} #end-of-function


sub
_ats2plpre_ML_list0_patsfun_59($$$)
{
##
  my($env0, $env1, $arg0) = @_;
##
  my $tmpret115;
##
  __patsflab__ats2plpre_ML_list0_patsfun_59:
  $tmpret115 = ats2plpre_ML_list0_zipwith($env0, $env1, $arg0);
  return $tmpret115;
} #end-of-function


sub
ats2plpre_ML_list0_foldleft($$$)
{
##
  my($arg0, $arg1, $arg2) = @_;
##
  my $tmpret116;
##
  __patsflab_list0_foldleft:
  $tmpret116 = _ats2plpre_ML_list0_aux_61($arg2, $arg1, $arg0);
  return $tmpret116;
} #end-of-function


sub
_ats2plpre_ML_list0_aux_61($$$)
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
##
  __patsflab__ats2plpre_ML_list0_aux_61:
  #ATScaseofseq_beg
  while(1)
  {
    #ATSbranchseq_beg
    __atstmplab62:
    if(ATSCKptriscons($arg1)) { goto __atstmplab65; }
    __atstmplab63:
    $tmpret117 = $arg0;
    last;
    #ATSbranchseq_end
    #ATSbranchseq_beg
    __atstmplab64:
    __atstmplab65:
    $tmp118 = $arg1->[0];
    $tmp119 = $arg1->[1];
    $tmp120 = &{$env0->[0]}($env0, $arg0, $tmp118);
    #ATStailcalseq_beg
    $apy0 = $tmp120;
    $apy1 = $tmp119;
    $arg0 = $apy0;
    $arg1 = $apy1;
    goto __patsflab__ats2plpre_ML_list0_aux_61;
    #ATStailcalseq_end
    last;
    #ATSbranchseq_end
  } #end-of-while-loop;
  #ATScaseofseq_end
  return $tmpret117;
} #end-of-function


sub
ats2plpre_ML_list0_foldright($$$)
{
##
  my($arg0, $arg1, $arg2) = @_;
##
  my $tmpret121;
##
  __patsflab_list0_foldright:
  $tmpret121 = _ats2plpre_ML_list0_aux_63($arg1, $arg2, $arg0, $arg2);
  return $tmpret121;
} #end-of-function


sub
_ats2plpre_ML_list0_aux_63($$$$)
{
##
  my($env0, $env1, $arg0, $arg1) = @_;
##
  my $tmpret122;
  my $tmp123;
  my $tmp124;
  my $tmp125;
##
  __patsflab__ats2plpre_ML_list0_aux_63:
  #ATScaseofseq_beg
  while(1)
  {
    #ATSbranchseq_beg
    __atstmplab66:
    if(ATSCKptriscons($arg0)) { goto __atstmplab69; }
    __atstmplab67:
    $tmpret122 = $arg1;
    last;
    #ATSbranchseq_end
    #ATSbranchseq_beg
    __atstmplab68:
    __atstmplab69:
    $tmp123 = $arg0->[0];
    $tmp124 = $arg0->[1];
    $tmp125 = _ats2plpre_ML_list0_aux_63($env0, $env1, $tmp124, $env1);
    $tmpret122 = &{$env0->[0]}($env0, $tmp123, $tmp125);
    last;
    #ATSbranchseq_end
  } #end-of-while-loop;
  #ATScaseofseq_end
  return $tmpret122;
} #end-of-function


sub
ats2plpre_ML_list0_sort_2($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret128;
  my $tmp129;
##
  __patsflab_list0_sort_2:
  $tmp129 = ats2plpre_list_sort_2($arg0, $arg1);
  $tmpret128 = $tmp129;
  return $tmpret128;
} #end-of-function


sub
ats2plpre_ML_streamize_list0_zip($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret130;
##
  __patsflab_streamize_list0_zip:
  $tmpret130 = ats2plpre_streamize_list_zip($arg0, $arg1);
  return $tmpret130;
} #end-of-function


sub
ats2plpre_ML_streamize_list0_cross($$)
{
##
  my($arg0, $arg1) = @_;
##
  my $tmpret131;
##
  __patsflab_streamize_list0_cross:
  $tmpret131 = ats2plpre_streamize_list_cross($arg0, $arg1);
  return $tmpret131;
} #end-of-function

######
##
## end-of-compilation-unit
##
######