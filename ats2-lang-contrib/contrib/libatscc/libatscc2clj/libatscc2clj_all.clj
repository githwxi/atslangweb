;;
;; Time of Generation:
;; Mon Sep 26 11:29:49 EDT 2016
;;

;;
;;;;;;
;
; HX-2016-07:
; for Clojure code
; translated from ATS
;
;;;;;;

;; ****** ****** ;;

(def ^:const atscc2clj_null '())

;; ****** ****** ;;

(def ^:const atscc2clj_true true)
(def ^:const atscc2clj_false false)

;; ****** ****** ;;
;;
(def ^:const atscc2clj_list_nil '())
;;
(defmacro
 ats2cljpre_list_cons[x xs] `(vector ~x ~xs))
;;
;; ****** ****** ;;
;;
(def ^:const
 ATSINSmove0_void atscc2clj_null)
;;
(defmacro ATSINSmove1_void[cmd] `(do ~cmd))
;;
;; ****** ****** ;;
;;
(defmacro
 ATSINStmpset[tmp val] `(var-set ~tmp ~val)
)
(defmacro
 ATSINSstatmpset[statmp val]
`(alter-var-root (var ~statmp) (fn[x#] ~val))
)
;;
(defmacro
 ATSdynloadset[flag value]
`(alter-var-root (var ~flag) (fn[x#] ~value))
)
(defmacro
 ATSINSdyncst_valbind[d2cst value]
`(alter-var-root (var ~d2cst) (fn[x#] ~value))
)
;;
;; ****** ****** ;;
;;
(defmacro ATSfunclo_fun[fc] fc)
(defmacro ATSfunclo_fclo[fc] `(first ~fc))
;;
;; ****** ****** ;;

(defmacro ATSCKiseqz[x] `(identical? ~x 0))
(defmacro ATSCKisneqz[x] `(not (identical? ~x 0)))

;; ****** ****** ;;
;;
(defmacro
 ATSCKpat_int[x y] `(identical? ~x ~y)
)
;;
(defmacro
 ATSCKpat_bool[x y] `(identical? ~x ~y)
)
;;
(defmacro ATSCKpat_string[x y] `(= ~x ~y))
;;
;; ****** ****** ;;
;;
(defmacro
 ATSCKpat_con0[x tag] `(identical? ~x ~tag))
(defmacro
 ATSCKpat_con1[x tag] `(identical? (first ~x) ~tag))
;;
;; ****** ****** ;;

(defmacro
 ATSCKptrisnull[x]
`(identical? ~x atscc2clj_null)
)
(defmacro
 ATSCKptriscons[x]
`(not (identical? ~x atscc2clj_null))
)

;; ****** ****** ;;

(defmacro
 ATSPMVtyrec[& xs]
`(vector ~@(for [x xs] x))
)
(defmacro
 ATSPMVtysum[& xs]
`(vector ~@(for [x xs] x))
)

;; ****** ****** ;;

(defmacro
 ATSCCget_at[xs i] `(nth ~xs ~i)
)

(defmacro ATSCCget_0[xs] `(nth ~xs 0))
(defmacro ATSCCget_1[xs] `(nth ~xs 1))
(defmacro ATSCCget_2[xs] `(nth ~xs 2))
(defmacro ATSCCget_3[xs] `(nth ~xs 3))

;; ****** ****** ;;
;;
(defmacro
 ATSPMVlazyval[thunk]
`(vector (atom 0) (atom ~thunk))
)
;;
(defmacro
 ATSPMVlazyval_evl[lazyval]
`(let
  [flag# (
    ATSCCget_0 ~lazyval
   ) flag2# (deref flag#)
  ]
  (if (
    identical? flag2# 0
   ) (do
      (reset! flag# 1)
      (let [
        mythunk#
        (ATSCCget_1 ~lazyval)
        mythunk2# (deref mythunk#)
       ] (
        reset! mythunk#
          ((ATSCCget_0 mythunk2#) mythunk2#)
        ;; end of [reset!]
       )
      ) ;; end of [let]
   ) (reset! flag# (inc flag2#))
  )
 ) ;; let
) ;; end of [defmacro]
;;
(defmacro
 ATSPMVlazyval_eval[lazyval]
`(let [lazyval# ~lazyval]
   (ATSPMVlazyval_evl lazyval#) (deref (ATSCCget_1 lazyval#))
 )
) ;; end of [defmacro]
;;
;; ****** ****** ;;
;;
(defmacro
 ATSPMVllazyval[thunk] thunk
)
;;
(defmacro
 ATSPMVllazyval_eval[llazyval]
`(let [llazyval# ~llazyval]
   ((ATSfunclo_fclo llazyval#) llazyval# true))
) ;; end of [defmacro]
;;
(defmacro
 atspre_lazy_vt_free[llazyval]
`(let [llazyval# ~llazyval]
   ((ATSfunclo_fclo llazyval#) llazyval# false))
) ;; end of [defmacro]
;;
;; ****** ****** ;;
;;
(defmacro
 ATSSELcon[xs i] `(ATSCCget_at ~xs ~i)
)
(defmacro
 ATSSELboxrec[xs i] `(ATSCCget_at ~xs ~i)
)
;;
;; ****** ****** ;;
;;
(defn
 ATSINSdeadcode_fail[] (System/exit 1)
)
;;
(defn
 ATSINScaseof_fail[msg]
 (do (.println *err* msg) (System/exit 1))
) ;; end-of-define
;;
;; ****** ****** ;;
;;
(defn ats2cljpre_tostring[x] (.toString x))
;;
;; ****** ****** ;;
  
(defn
 ats2cljpre_lazy2cloref[lazyval] `(ATSCCget_at ~lazyval 1)
) ;; end-of-define

;; ****** ****** ;;
;;
(defn
 ats2cljpre_assert_bool0[tfv] (if (not tfv) (System/exit 1))
)
(defn
 ats2cljpre_assert_bool1[tfv] (if (not tfv) (System/exit 1))
)
;;
(defn
 ats2cljpre_assert_errmsg_bool0[msg tfv]
 (if (not tfv)
   (do (.println *err* msg) (System/exit 1))
 )
) ;; end-of-define
(defn
 ats2cljpre_assert_errmsg_bool1[msg tfv]
 (if (not tfv)
   (do (.println *err* msg) (System/exit 1))
 )
) ;; end-of-define
;;
;; ****** ****** ;;

(defmacro
 ats2cljpre_cloref0_app[cf]
`(let [cf# ~cf] ((ATSfunclo_fclo cf#) cf#))
) ; defmacro
(defmacro
 ats2cljpre_cloref1_app[cf x]
`(let [cf# ~cf] ((ATSfunclo_fclo cf#) cf# ~x))
) ; defmacro
(defmacro
 ats2cljpre_cloref2_app[cf x1 x2]
`(let [cf# ~cf] ((ATSfunclo_fclo cf#) cf# ~x1 ~x2))
) ; defmacro
(defmacro
 ats2cljpre_cloref3_app[cf x1 x2 x3]
`(let [cf# ~cf] ((ATSfunclo_fclo cf#) cf# ~x1 ~x2 ~x3))
) ; defmacro

;; ****** ****** ;;
;;
(defn
 ats2cljpre_cloref2fun0[cf]
 (fn [] (ats2cljpre_cloref0_app cf))
) ; defn
(defn
 ats2cljpre_cloref2fun1[cf]
 (fn [x] (ats2cljpre_cloref1_app cf x))
) ; defn
(defn
 ats2cljpre_cloref2fun2[cf]
 (fn [x1 x2] (ats2cljpre_cloref2_app cf x1 x2))
) ; defn
(defn
 ats2cljpre_cloref2fun3[cf]
 (fn [x1 x2 x3] (ats2cljpre_cloref3_app cf x1 x2 x3))
) ; defn
;;
;; ****** ****** ;;

;;;;;; end of [basics_cats.clj] ;;;;;;
;;
;;;;;;
;
; HX-2016-07:
; for Clojure code
; translated from ATS
;
;;;;;;
;;

;;
;;;;;;
; beg of [integer_cats.clj]
;;;;;;
;;

;; ****** ****** ;;
;;
;; HX: for signed integers
;;
;; ****** ****** ;;
;;
(defmacro
 ats2cljpre_neg_int0[x] `(- ~x)
)
(defmacro
 ats2cljpre_neg_int1[x] `(- ~x)
)
;;
;; ****** ****** ;;
;;
(defmacro
 ats2cljpre_abs_int0[x]
`(let [x# ~x] (if (>= x# 0) x# (- x#)))
)
(defmacro
 ats2cljpre_abs_int1[x]
`(let [x# ~x] (if (>= x# 0) x# (- x#)))
)
;;
;; ****** ****** ;;
;;
(defmacro
 ats2cljpre_succ_int0[x] `(+ ~x 1)
)
(defmacro
 ats2cljpre_pred_int0[x] `(- ~x 1)
)
;;
(defmacro
 ats2cljpre_succ_int1[x] `(+ ~x 1)
)
(defmacro
 ats2cljpre_pred_int1[x] `(- ~x 1)
)
;;
;; ****** ****** ;;
;;
(defmacro
 ats2cljpre_add_int0_int0[x y] `(+ ~x ~y)
)
(defmacro
 ats2cljpre_sub_int0_int0[x y] `(- ~x ~y)
)
(defmacro
 ats2cljpre_mul_int0_int0[x y] `(* ~x ~y)
)
(defmacro
 ats2cljpre_div_int0_int0[x y] `(quot ~x ~y)
)
;;
(defmacro
 ats2cljpre_mod_int0_int0[x y] `(mod ~x ~y)
)
(defmacro
 ats2cljpre_rem_int0_int0[x y] `(rem ~x ~y)
)
;;
(defmacro
 ats2cljpre_add_int1_int1[x y] `(+ ~x ~y)
)
(defmacro
 ats2cljpre_sub_int1_int1[x y] `(- ~x ~y)
)
(defmacro
 ats2cljpre_mul_int1_int1[x y] `(* ~x ~y)
)
(defmacro
 ats2cljpre_div_int1_int1[x y] `(quot ~x ~y)
)
;;
(defmacro
 ats2cljpre_mod_int1_int1[x y] `(mod ~x ~y)
)
(defmacro
 ats2cljpre_nmod_int1_int1[x y] `(mod ~x ~y)
)
;;
(defmacro
 ats2cljpre_rem_int1_int1[x y] `(rem ~x ~y)
)
;;
;; ****** ****** ;;
;;
(defmacro
 ats2cljpre_lt_int0_int0[x y] `(< ~x ~y)
)
(defmacro
 ats2cljpre_lte_int0_int0[x y] `(<= ~x ~y)
)
(defmacro
 ats2cljpre_gt_int0_int0[x y] `(> ~x ~y)
)
(defmacro
 ats2cljpre_gte_int0_int0[x y] `(>= ~x ~y)
)
;;
(defmacro
 ats2cljpre_eq_int0_int0[x y] `(= ~x ~y)
)
(defmacro
 ats2cljpre_neq_int0_int0[x y] `(not (= ~x ~y))
)
;;
;;
(defmacro
 ats2cljpre_lt_int1_int1[x y] `(< ~x ~y)
)
(defmacro
 ats2cljpre_lte_int1_int1[x y] `(<= ~x ~y)
)
(defmacro
 ats2cljpre_gt_int1_int1[x y] `(> ~x ~y)
)
(defmacro
 ats2cljpre_gte_int1_int1[x y] `(>= ~x ~y)
)
;;
(defmacro
 ats2cljpre_eq_int1_int1[x y] `(= ~x ~y)
)
(defmacro
 ats2cljpre_neq_int1_int1[x y] `(not (= ~x ~y))
)
;;
;; ****** ****** ;;

;; end of [integer_cats.clj] ;;
;;
;;;;;;
;
; HX-2016-07:
; for Clojure code
; translated from ATS
;
;;;;;;
;;

;;
;;;;;;
; beg of [bool_cats.clj]
;;;;;;
;;

;; ****** ****** ;;

;; end of [bool_cats.clj] ;;
;;
;;;;;;
;
; HX-2016-07:
; for Clojure code
; translated from ATS
;
;;;;;;
;;

;;
;;;;;;
; beg of [float_cats.clj]
;;;;;;
;;

;; ****** ****** ;;
;;
;; HX: for signed floats
;;
;; ****** ****** ;;
;;
(defmacro
 ats2cljpre_int2double[x] x)
(defmacro
 ats2cljpre_double_of_int[x] x)
;;
(defmacro
 ats2cljpre_double2int[x] `(int ~x))
(defmacro
 ats2cljpre_int_of_double[x] `(int ~x))
;;
;; ****** ****** ;;
;;
(defmacro
 ats2cljpre_neg_double[x] `(- ~x)
)
;;
;; ****** ****** ;;
;;
(defmacro
 ats2cljpre_abs_double[x]
`(let [x# ~x] (if (>= x# 0.0) x# (- x#)))
)
;;
;; ****** ****** ;;
;;
(defmacro
 ats2cljpre_succ_double[x] `(+ ~x 1)
)
(defmacro
 ats2cljpre_pred_double[x] `(- ~x 1)
)
;;
;; ****** ****** ;;
;;
(defmacro
 ats2cljpre_add_double_double[x y] `(+ ~x ~y)
)
(defmacro
 ats2cljpre_sub_double_double[x y] `(- ~x ~y)
)
(defmacro
 ats2cljpre_mul_double_double[x y] `(* ~x ~y)
)
(defmacro
 ats2cljpre_div_double_double[x y] `(/ ~x ~y)
)
;;
;; ****** ****** ;;
;;
(defmacro
 ats2cljpre_lt_double_double[x y] `(< ~x ~y)
)
(defmacro
 ats2cljpre_lte_double_double[x y] `(<= ~x ~y)
)
(defmacro
 ats2cljpre_gt_double_double[x y] `(> ~x ~y)
)
(defmacro
 ats2cljpre_gte_double_double[x y] `(>= ~x ~y)
)
;;
(defmacro
 ats2cljpre_eq_double_double[x y] `(= ~x ~y)
)
(defmacro
 ats2cljpre_neq_double_double[x y] `(not (= ~x ~y))
)
;;
;; ****** ****** ;;

;; end of [float_cats.clj] ;;
;;
;;;;;;
;
; HX-2016-07:
; for Clojure code
; translated from ATS
;
;;;;;;
;;

;;
;;;;;;
; beg of [print_cats.clj]
;;;;;;
;;

;; ****** ****** ;;
;;
(defmacro
 ats2cljpre_print_int[x] `(print ~x)
)
;;
(defmacro
 ats2cljpre_print_bool[x]
`(print (if ~x "true" "false"))
)
(defmacro
 ats2cljpre_print_char[x] `(print ~x))
;;
(defmacro
 ats2cljpre_print_double[x] `(print ~x)
)
(defmacro
 ats2cljpre_print_string[x] `(print ~x)
)
;;
(defmacro
 ats2cljpre_print_CLJval[x] `(print ~x)
)
;;
;; ****** ****** ;;
;;
(defmacro
 ats2cljpre_print_newline[] `(newline)
)
;;
;; ****** ****** ;;

;;
(defmacro
 ats2cljpre_fprint_bool[out x]
`(.write ~out (if ~x "true" "false"))
)
(defmacro
 ats2cljpre_fprint_char[out x] `(.write ~out (int ~x))
)
;;
(defmacro
 ats2cljpre_fprint_int[out x] `(.write ~out (.toString ~x))
)
;;
(defmacro
 ats2cljpre_fprint_double[out x] `(.write ~out (.toString ~x))
)
(defmacro
 ats2cljpre_fprint_string[out x] `(.write ~out (.toString ~x))
)
(defmacro
 ats2cljpre_fprint_CLJval[out x] `(.write ~out (.toString ~x))
)
;;
;; ****** ****** ;;
;;
(defmacro
 ats2cljpre_fprint_newline[out]
`(let [out# ~out] (do (.write out# (int \newline)) (.flush out#)))
)
;;
;; ****** ****** ;;

;; end of [print_cats.clj] ;;
;;
;;;;;;
;
; HX-2016-07:
; for Clojure code
; translated from ATS
;
;;;;;;
;;

;;
;;;;;;
; beg of [reference_cats.clj]
;;;;;;
;;

;; ****** ****** ;;
;;
(defmacro
 ats2cljpre_ref[x] `(atom ~x)
)
(defmacro
 ats2cljpre_ref_make_elt[x] `(atom ~x)
)
;;
;; ****** ****** ;;
;;
(defmacro
 ats2cljpre_ref_get_elt[r] `(deref ~r)
)
(defmacro
 ats2cljpre_ref_set_elt[r x0] `(reset! ~r ~x0)
)
;;
;; ****** ****** ;;

;; end of [reference_cats.clj] ;;
;;;;;;
;
; HX-2016-07:
; for Clojure code translated from ATS
;
;;;;;;

;;;;;;
;beg of [filebas_cats.clj]
;;;;;;
;;
(defmacro ats2cljpre_stdin_get[] *in*)
(defmacro ats2cljpre_stdout_get[] *out*)
(defmacro ats2cljpre_stderr_get[] *err*)
;;
;;;;;;
;;;;;; end of [filebas_cats.clj] ;;;;;;
;;;;;;
;
; HX-2016-07:
; for Clojure code translated from ATS
;
;;;;;;

;;;;;;
; beg of [CLJlist_cats.clj]
;;;;;;

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;
(defmacro
 ats2cljpre_CLJlist_nil[] `())
(defmacro
 ats2cljpre_CLJlist_sing[x] `(list ~x))
(defmacro
 ats2cljpre_CLJlist_pair[x1 x2] `(list ~x1 ~x2))
;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(defmacro
 ats2cljpre_CLJlist_cons[x0 xs] `(cons ~x0 ~xs))

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;
(defmacro
 ats2cljpre_CLJlist_make_elt[n x0] `(repeat ~n ~x0))
;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;
(defmacro
 ats2cljpre_CLJlist_is_nil[xs] `(empty? ~xs))
(defmacro
 ats2cljpre_CLJlist_is_cons[xs] `(not (empty? ~xs)))
(defmacro
 ats2cljpre_CLJlist_isnot_nil[xs] `(not (empty? ~xs)))
;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(defmacro
 ats2cljpre_CLJlist_length[xs] `(count ~xs)
)

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(defmacro ats2cljpre_CLJlist_tail[xs] `(rest ~xs))
(defmacro ats2cljpre_CLJlist_head[xs] `(first ~xs))

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(defmacro
 ats2cljpre_CLJlist_get_at[xs i] `(nth ~xs ~i)
) ; defmacro

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;
(defmacro
 ats2cljpre_CLJlist_append[xs ys] `(concat ~xs ~ys)
)
;;
(defmacro ats2cljpre_CLJlist_reverse[xs] `(reverse ~xs))
;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;
(defmacro
 ats2cljpre_CLJlist2list_rev[xs]
`(reduce #(ats2cljpre_list_cons %2 %1) atscc2clj_null ~xs)
) ; defmacro
;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(defmacro
 ats2cljpre_CLJlist_sort_2[xs cmp]
`(let [cmp# (ats2cljpre_cloref2fun2 ~cmp)] (sort cmp# ~xs))
) ; defmacro

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;;;;;; end of [CLJlist_cats.clj] ;;;;;;
;;;;;;
;;
;; The Clojure code is generated by atscc2clj
;; The starting compilation time is: 2016-9-26: 11h: 8m
;;
;;;;;;
(declare _ats2cljpre_list_loop1_4)
(declare _ats2cljpre_list_loop2_5)
(declare _ats2cljpre_list_loop_12)
(declare _ats2cljpre_list_loop_20)
(declare _ats2cljpre_list_patsfun_29)
(declare _ats2cljpre_list_loop_31)
(declare _ats2cljpre_list_patsfun_33)
(declare _ats2cljpre_list_patsfun_36)
(declare _ats2cljpre_list_loop_38)
(declare _ats2cljpre_list_patsfun_40)
(declare _ats2cljpre_list_patsfun_44)
(declare _ats2cljpre_list_aux_46)
(declare _ats2cljpre_list_patsfun_48)
(declare _ats2cljpre_list_patsfun_51)
(declare _ats2cljpre_list_aux_53)
(declare _ats2cljpre_list_patsfun_55)
(declare _ats2cljpre_list_aux_57)
(declare _ats2cljpre_list_patsfun_59)
(declare _ats2cljpre_list_loop_61)
(declare _ats2cljpre_list_patsfun_63)
(declare _ats2cljpre_list_loop_65)
(declare _ats2cljpre_list_patsfun_67)
(declare _ats2cljpre_list_aux_69)
(declare _ats2cljpre_list_patsfun_71)
(declare _ats2cljpre_list_aux_73)
(declare _ats2cljpre_list_patsfun_75)
(declare _ats2cljpre_list_aux_79)
(declare _ats2cljpre_list_patsfun_81)
(declare ats2cljpre_list_make_intrange_2)
(declare ats2cljpre_list_make_intrange_3)
(declare _ats2cljpre_list_loop1_4)
(declare _ats2cljpre_list_loop2_5)
(declare ats2cljpre_list_length)
(declare _ats2cljpre_list_loop_12)
(declare ats2cljpre_list_last)
(declare ats2cljpre_list_get_at)
(declare ats2cljpre_list_snoc)
(declare ats2cljpre_list_extend)
(declare ats2cljpre_list_append)
(declare ats2cljpre_list_reverse)
(declare ats2cljpre_list_reverse_append)
(declare _ats2cljpre_list_loop_20)
(declare ats2cljpre_list_take)
(declare ats2cljpre_list_drop)
(declare ats2cljpre_list_split_at)
(declare ats2cljpre_list_insert_at)
(declare ats2cljpre_list_remove_at)
(declare ats2cljpre_list_takeout_at)
(declare ats2cljpre_list_exists)
(declare ats2cljpre_list_exists_method)
(declare _ats2cljpre_list_patsfun_29)
(declare ats2cljpre_list_iexists)
(declare _ats2cljpre_list_loop_31)
(declare ats2cljpre_list_iexists_method)
(declare _ats2cljpre_list_patsfun_33)
(declare ats2cljpre_list_forall)
(declare ats2cljpre_list_forall_method)
(declare _ats2cljpre_list_patsfun_36)
(declare ats2cljpre_list_iforall)
(declare _ats2cljpre_list_loop_38)
(declare ats2cljpre_list_iforall_method)
(declare _ats2cljpre_list_patsfun_40)
(declare ats2cljpre_list_app)
(declare ats2cljpre_list_foreach)
(declare ats2cljpre_list_foreach_method)
(declare _ats2cljpre_list_patsfun_44)
(declare ats2cljpre_list_iforeach)
(declare _ats2cljpre_list_aux_46)
(declare ats2cljpre_list_iforeach_method)
(declare _ats2cljpre_list_patsfun_48)
(declare ats2cljpre_list_rforeach)
(declare ats2cljpre_list_rforeach_method)
(declare _ats2cljpre_list_patsfun_51)
(declare ats2cljpre_list_filter)
(declare _ats2cljpre_list_aux_53)
(declare ats2cljpre_list_filter_method)
(declare _ats2cljpre_list_patsfun_55)
(declare ats2cljpre_list_map)
(declare _ats2cljpre_list_aux_57)
(declare ats2cljpre_list_map_method)
(declare _ats2cljpre_list_patsfun_59)
(declare ats2cljpre_list_foldleft)
(declare _ats2cljpre_list_loop_61)
(declare ats2cljpre_list_foldleft_method)
(declare _ats2cljpre_list_patsfun_63)
(declare ats2cljpre_list_ifoldleft)
(declare _ats2cljpre_list_loop_65)
(declare ats2cljpre_list_ifoldleft_method)
(declare _ats2cljpre_list_patsfun_67)
(declare ats2cljpre_list_foldright)
(declare _ats2cljpre_list_aux_69)
(declare ats2cljpre_list_foldright_method)
(declare _ats2cljpre_list_patsfun_71)
(declare ats2cljpre_list_ifoldright)
(declare _ats2cljpre_list_aux_73)
(declare ats2cljpre_list_ifoldright_method)
(declare _ats2cljpre_list_patsfun_75)
(declare ats2cljpre_CLJlist_oflist_rev)
(declare _ats2cljpre_list_aux_79)
(declare ats2cljpre_list_sort_2)
(declare _ats2cljpre_list_patsfun_81)
;;;;;;


(defn
_ats2cljpre_list_patsfun_29__closurerize[xenv0]
;;%{
  (list (fn[_fcenvs_ xarg0](_ats2cljpre_list_patsfun_29 (ATSCCget_1 _fcenvs_) xarg0)) xenv0)
;;%}
) ;; end-of-defn


(defn
_ats2cljpre_list_patsfun_33__closurerize[xenv0]
;;%{
  (list (fn[_fcenvs_ xarg0](_ats2cljpre_list_patsfun_33 (ATSCCget_1 _fcenvs_) xarg0)) xenv0)
;;%}
) ;; end-of-defn


(defn
_ats2cljpre_list_patsfun_36__closurerize[xenv0]
;;%{
  (list (fn[_fcenvs_ xarg0](_ats2cljpre_list_patsfun_36 (ATSCCget_1 _fcenvs_) xarg0)) xenv0)
;;%}
) ;; end-of-defn


(defn
_ats2cljpre_list_patsfun_40__closurerize[xenv0]
;;%{
  (list (fn[_fcenvs_ xarg0](_ats2cljpre_list_patsfun_40 (ATSCCget_1 _fcenvs_) xarg0)) xenv0)
;;%}
) ;; end-of-defn


(defn
_ats2cljpre_list_patsfun_44__closurerize[xenv0]
;;%{
  (list (fn[_fcenvs_ xarg0](_ats2cljpre_list_patsfun_44 (ATSCCget_1 _fcenvs_) xarg0)) xenv0)
;;%}
) ;; end-of-defn


(defn
_ats2cljpre_list_patsfun_48__closurerize[xenv0]
;;%{
  (list (fn[_fcenvs_ xarg0](_ats2cljpre_list_patsfun_48 (ATSCCget_1 _fcenvs_) xarg0)) xenv0)
;;%}
) ;; end-of-defn


(defn
_ats2cljpre_list_patsfun_51__closurerize[xenv0]
;;%{
  (list (fn[_fcenvs_ xarg0](_ats2cljpre_list_patsfun_51 (ATSCCget_1 _fcenvs_) xarg0)) xenv0)
;;%}
) ;; end-of-defn


(defn
_ats2cljpre_list_patsfun_55__closurerize[xenv0]
;;%{
  (list (fn[_fcenvs_ xarg0](_ats2cljpre_list_patsfun_55 (ATSCCget_1 _fcenvs_) xarg0)) xenv0)
;;%}
) ;; end-of-defn


(defn
_ats2cljpre_list_patsfun_59__closurerize[xenv0]
;;%{
  (list (fn[_fcenvs_ xarg0](_ats2cljpre_list_patsfun_59 (ATSCCget_1 _fcenvs_) xarg0)) xenv0)
;;%}
) ;; end-of-defn


(defn
_ats2cljpre_list_patsfun_63__closurerize[xenv0 xenv1]
;;%{
  (list (fn[_fcenvs_ xarg0](_ats2cljpre_list_patsfun_63 (ATSCCget_1 _fcenvs_) (ATSCCget_2 _fcenvs_) xarg0)) xenv0 xenv1)
;;%}
) ;; end-of-defn


(defn
_ats2cljpre_list_patsfun_67__closurerize[xenv0 xenv1]
;;%{
  (list (fn[_fcenvs_ xarg0](_ats2cljpre_list_patsfun_67 (ATSCCget_1 _fcenvs_) (ATSCCget_2 _fcenvs_) xarg0)) xenv0 xenv1)
;;%}
) ;; end-of-defn


(defn
_ats2cljpre_list_patsfun_71__closurerize[xenv0 xenv1]
;;%{
  (list (fn[_fcenvs_ xarg0](_ats2cljpre_list_patsfun_71 (ATSCCget_1 _fcenvs_) (ATSCCget_2 _fcenvs_) xarg0)) xenv0 xenv1)
;;%}
) ;; end-of-defn


(defn
_ats2cljpre_list_patsfun_75__closurerize[xenv0 xenv1]
;;%{
  (list (fn[_fcenvs_ xarg0](_ats2cljpre_list_patsfun_75 (ATSCCget_1 _fcenvs_) (ATSCCget_2 _fcenvs_) xarg0)) xenv0 xenv1)
;;%}
) ;; end-of-defn


(defn
_ats2cljpre_list_patsfun_81__closurerize[xenv0]
;;%{
  (list (fn[_fcenvs_ xarg0 xarg1](_ats2cljpre_list_patsfun_81 (ATSCCget_1 _fcenvs_) xarg0 xarg1)) xenv0)
;;%}
) ;; end-of-defn


;;fun
(defn
 ats2cljpre_list_make_intrange_2[arg0 arg1]
(
with-local-vars
[
;;knd = 0
  tmpret2 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list_make_intrange_2
  (ats2cljpre_list_make_intrange_3 arg0 arg1 1)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_list_make_intrange_3[arg0 arg1 arg2]
(
with-local-vars
[
;;knd = 0
  tmpret3 nil
  tmp14 nil
  tmp15 nil
  tmp16 nil
  tmp17 nil
  tmp18 nil
  tmp19 nil
  tmp20 nil
  tmp21 nil
  tmp22 nil
  tmp23 nil
  tmp24 nil
  tmp25 nil
  tmp26 nil
  tmp27 nil
  tmp28 nil
  tmp29 nil
  tmp30 nil
  tmp31 nil
  tmp32 nil
  tmp33 nil
  tmp34 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list_make_intrange_3
  (let[
    casefnx
    (fn casefnx[tmplab](case tmplab
      ;; ATSbranchseq_beg
      1 (do
       (ATSINStmpset tmp14 (ats2cljpre_gt_int0_int0 arg2 0))
       (if (not (ATSCKpat_bool @tmp14 atscc2clj_true))
         (casefnx 2)
         (do
          (ATSINStmpset tmp15 (ats2cljpre_lt_int0_int0 arg0 arg1))
          (if @tmp15
            (do
             (ATSINStmpset tmp19 (ats2cljpre_sub_int0_int0 arg1 arg0))
             (ATSINStmpset tmp18 (ats2cljpre_add_int0_int0 @tmp19 arg2))
             (ATSINStmpset tmp17 (ats2cljpre_sub_int0_int0 @tmp18 1))
             (ATSINStmpset tmp16 (ats2cljpre_div_int0_int0 @tmp17 arg2))
             (ATSINStmpset tmp22 (ats2cljpre_sub_int0_int0 @tmp16 1))
             (ATSINStmpset tmp21 (ats2cljpre_mul_int0_int0 @tmp22 arg2))
             (ATSINStmpset tmp20 (ats2cljpre_add_int0_int0 arg0 @tmp21))
             (ATSINStmpset tmp23 atscc2clj_null)
             (_ats2cljpre_list_loop1_4 @tmp16 @tmp20 arg2 @tmp23)
            ) ;; if-then
            (do
             atscc2clj_null
            ) ;; if-else
          )
         )
       )
      ) ;; end-of-branch
      ;; ATSbranchseq_end
      ;; ATSbranchseq_beg
      2 (do
       (ATSINStmpset tmp24 (ats2cljpre_lt_int0_int0 arg2 0))
       (if (not (ATSCKpat_bool @tmp24 atscc2clj_true))
         (casefnx 3)
         (do
          (ATSINStmpset tmp25 (ats2cljpre_gt_int0_int0 arg0 arg1))
          (if @tmp25
            (do
             (ATSINStmpset tmp26 (ats2cljpre_neg_int0 arg2))
             (ATSINStmpset tmp30 (ats2cljpre_sub_int0_int0 arg0 arg1))
             (ATSINStmpset tmp29 (ats2cljpre_add_int0_int0 @tmp30 @tmp26))
             (ATSINStmpset tmp28 (ats2cljpre_sub_int0_int0 @tmp29 1))
             (ATSINStmpset tmp27 (ats2cljpre_div_int0_int0 @tmp28 @tmp26))
             (ATSINStmpset tmp33 (ats2cljpre_sub_int0_int0 @tmp27 1))
             (ATSINStmpset tmp32 (ats2cljpre_mul_int0_int0 @tmp33 @tmp26))
             (ATSINStmpset tmp31 (ats2cljpre_sub_int0_int0 arg0 @tmp32))
             (ATSINStmpset tmp34 atscc2clj_null)
             (_ats2cljpre_list_loop2_5 @tmp27 @tmp31 @tmp26 @tmp34)
            ) ;; if-then
            (do
             atscc2clj_null
            ) ;; if-else
          )
         )
       )
      ) ;; end-of-branch
      ;; ATSbranchseq_end
      ;; ATSbranchseq_beg
      3 (do
       atscc2clj_null
      ) ;; end-of-branch
      ;; ATSbranchseq_end
      ;; (else (atscc2clj_caseof_deadcode _FILE_ _LINE_))
     ) ;; end-of-case
    ) ;; end-of-casefnx
   ] (casefnx 1)
  ) ;; end-of-let(casefnx)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_list_loop1_4[arg0 arg1 arg2 arg3]
(
with-local-vars
[
;;knd = 1
;;apy0 nil
;;apy1 nil
;;apy2 nil
;;apy3 nil
  tmpret4 nil
  tmp5 nil
  tmp6 nil
  tmp7 nil
  tmp8 nil
;;var funlab_clj
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;while(true){
   (loop [
     arg0 arg0
     arg1 arg1
     arg2 arg2
     arg3 arg3
    ] ; funlab_clj = 0;
    ;; __patsflab__ats2cljpre_list_loop1_4
    (ATSINStmpset tmp5 (ats2cljpre_gt_int0_int0 arg0 0))
    (if @tmp5
      (do
       (ATSINStmpset tmp6 (ats2cljpre_sub_int0_int0 arg0 1))
       (ATSINStmpset tmp7 (ats2cljpre_sub_int0_int0 arg1 arg2))
       (ATSINStmpset tmp8 (ATSPMVtysum arg1 arg3))
       ;; apy0 = @tmp6
       ;; apy1 = @tmp7
       ;; apy2 = arg2
       ;; apy3 = @tmp8
       ;; arg0 = apy0
       ;; arg1 = apy1
       ;; arg2 = apy2
       ;; arg3 = apy3
       ;; funlab_clj = 1; // __patsflab__ats2cljpre_list_loop1_4
       (recur @tmp6 @tmp7 arg2 @tmp8)
      ) ;; if-then
      (do
       arg3
      ) ;; if-else
    )
    ;; if (funlab_clj > 0) continue; else ;; return tmpret4;
  ) ;} // endwhile-fun
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_list_loop2_5[arg0 arg1 arg2 arg3]
(
with-local-vars
[
;;knd = 1
;;apy0 nil
;;apy1 nil
;;apy2 nil
;;apy3 nil
  tmpret9 nil
  tmp10 nil
  tmp11 nil
  tmp12 nil
  tmp13 nil
;;var funlab_clj
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;while(true){
   (loop [
     arg0 arg0
     arg1 arg1
     arg2 arg2
     arg3 arg3
    ] ; funlab_clj = 0;
    ;; __patsflab__ats2cljpre_list_loop2_5
    (ATSINStmpset tmp10 (ats2cljpre_gt_int0_int0 arg0 0))
    (if @tmp10
      (do
       (ATSINStmpset tmp11 (ats2cljpre_sub_int0_int0 arg0 1))
       (ATSINStmpset tmp12 (ats2cljpre_add_int0_int0 arg1 arg2))
       (ATSINStmpset tmp13 (ATSPMVtysum arg1 arg3))
       ;; apy0 = @tmp11
       ;; apy1 = @tmp12
       ;; apy2 = arg2
       ;; apy3 = @tmp13
       ;; arg0 = apy0
       ;; arg1 = apy1
       ;; arg2 = apy2
       ;; arg3 = apy3
       ;; funlab_clj = 1; // __patsflab__ats2cljpre_list_loop2_5
       (recur @tmp11 @tmp12 arg2 @tmp13)
      ) ;; if-then
      (do
       arg3
      ) ;; if-else
    )
    ;; if (funlab_clj > 0) continue; else ;; return tmpret9;
  ) ;} // endwhile-fun
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_list_length[arg0]
(
with-local-vars
[
;;knd = 0
  tmpret46 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list_length
  (_ats2cljpre_list_loop_12 arg0 0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_list_loop_12[arg0 arg1]
(
with-local-vars
[
;;knd = 1
;;apy0 nil
;;apy1 nil
  tmpret47 nil
  tmp49 nil
  tmp50 nil
;;var funlab_clj
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;while(true){
   (loop [
     arg0 arg0
     arg1 arg1
    ] ; funlab_clj = 0;
    ;; __patsflab__ats2cljpre_list_loop_12
    (let[
      casefnx
      (fn casefnx[tmplab](case tmplab
        ;; ATSbranchseq_beg
        1 (do
         (if (ATSCKptriscons arg0)
           (casefnx 4)
           (do
            (casefnx 2)
           )
         )
        ) ;; end-of-branch
        2 (do
         arg1
        ) ;; end-of-branch
        ;; ATSbranchseq_end
        ;; ATSbranchseq_beg
        3 (do
         (casefnx 4)
        ) ;; end-of-branch
        4 (do
         (ATSINStmpset tmp49 (ATSSELcon arg0 1))
         (ATSINStmpset tmp50 (ats2cljpre_add_int1_int1 arg1 1))
         ;; apy0 = @tmp49
         ;; apy1 = @tmp50
         ;; arg0 = apy0
         ;; arg1 = apy1
         ;; funlab_clj = 1; // __patsflab__ats2cljpre_list_loop_12
         (_ats2cljpre_list_loop_12 @tmp49 @tmp50)
        ) ;; end-of-branch
        ;; ATSbranchseq_end
        ;; (else (atscc2clj_caseof_deadcode _FILE_ _LINE_))
       ) ;; end-of-case
      ) ;; end-of-casefnx
     ] (casefnx 1)
    ) ;; end-of-let(casefnx)
    ;; if (funlab_clj > 0) continue; else ;; return tmpret47;
  ) ;} // endwhile-fun
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_list_last[arg0]
(
with-local-vars
[
;;knd = 1
;;apy0 nil
  tmpret51 nil
  tmp52 nil
  tmp53 nil
;;var funlab_clj
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;while(true){
   (loop [
     arg0 arg0
    ] ; funlab_clj = 0;
    ;; __patsflab_list_last
    (ATSINStmpset tmp52 (ATSSELcon arg0 0))
    (ATSINStmpset tmp53 (ATSSELcon arg0 1))
    (let[
      casefnx
      (fn casefnx[tmplab](case tmplab
        ;; ATSbranchseq_beg
        1 (do
         (if (ATSCKptriscons @tmp53)
           (casefnx 4)
           (do
            (casefnx 2)
           )
         )
        ) ;; end-of-branch
        2 (do
         @tmp52
        ) ;; end-of-branch
        ;; ATSbranchseq_end
        ;; ATSbranchseq_beg
        3 (do
         (casefnx 4)
        ) ;; end-of-branch
        4 (do
         ;; apy0 = @tmp53
         ;; arg0 = apy0
         ;; funlab_clj = 1; // __patsflab_list_last
         (ats2cljpre_list_last @tmp53)
        ) ;; end-of-branch
        ;; ATSbranchseq_end
        ;; (else (atscc2clj_caseof_deadcode _FILE_ _LINE_))
       ) ;; end-of-case
      ) ;; end-of-casefnx
     ] (casefnx 1)
    ) ;; end-of-let(casefnx)
    ;; if (funlab_clj > 0) continue; else ;; return tmpret51;
  ) ;} // endwhile-fun
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_list_get_at[arg0 arg1]
(
with-local-vars
[
;;knd = 1
;;apy0 nil
;;apy1 nil
  tmpret54 nil
  tmp55 nil
  tmp56 nil
  tmp57 nil
  tmp58 nil
;;var funlab_clj
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;while(true){
   (loop [
     arg0 arg0
     arg1 arg1
    ] ; funlab_clj = 0;
    ;; __patsflab_list_get_at
    (ATSINStmpset tmp55 (ats2cljpre_eq_int1_int1 arg1 0))
    (if @tmp55
      (do
       (ATSINStmpset tmp56 (ATSSELcon arg0 0))
       @tmp56
      ) ;; if-then
      (do
       (ATSINStmpset tmp57 (ATSSELcon arg0 1))
       (ATSINStmpset tmp58 (ats2cljpre_sub_int1_int1 arg1 1))
       ;; apy0 = @tmp57
       ;; apy1 = @tmp58
       ;; arg0 = apy0
       ;; arg1 = apy1
       ;; funlab_clj = 1; // __patsflab_list_get_at
       (recur @tmp57 @tmp58)
      ) ;; if-else
    )
    ;; if (funlab_clj > 0) continue; else ;; return tmpret54;
  ) ;} // endwhile-fun
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_list_snoc[arg0 arg1]
(
with-local-vars
[
;;knd = 0
  tmpret59 nil
  tmp60 nil
  tmp61 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list_snoc
  (ATSINStmpset tmp61 atscc2clj_null)
  (ATSINStmpset tmp60 (ATSPMVtysum arg1 @tmp61))
  (ats2cljpre_list_append arg0 @tmp60)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_list_extend[arg0 arg1]
(
with-local-vars
[
;;knd = 0
  tmpret62 nil
  tmp63 nil
  tmp64 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list_extend
  (ATSINStmpset tmp64 atscc2clj_null)
  (ATSINStmpset tmp63 (ATSPMVtysum arg1 @tmp64))
  (ats2cljpre_list_append arg0 @tmp63)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_list_append[arg0 arg1]
(
with-local-vars
[
;;knd = 0
  tmpret65 nil
  tmp66 nil
  tmp67 nil
  tmp68 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list_append
  (let[
    casefnx
    (fn casefnx[tmplab](case tmplab
      ;; ATSbranchseq_beg
      1 (do
       (if (ATSCKptriscons arg0)
         (casefnx 4)
         (do
          (casefnx 2)
         )
       )
      ) ;; end-of-branch
      2 (do
       arg1
      ) ;; end-of-branch
      ;; ATSbranchseq_end
      ;; ATSbranchseq_beg
      3 (do
       (casefnx 4)
      ) ;; end-of-branch
      4 (do
       (ATSINStmpset tmp66 (ATSSELcon arg0 0))
       (ATSINStmpset tmp67 (ATSSELcon arg0 1))
       (ATSINStmpset tmp68 (ats2cljpre_list_append @tmp67 arg1))
       (ATSPMVtysum @tmp66 @tmp68)
      ) ;; end-of-branch
      ;; ATSbranchseq_end
      ;; (else (atscc2clj_caseof_deadcode _FILE_ _LINE_))
     ) ;; end-of-case
    ) ;; end-of-casefnx
   ] (casefnx 1)
  ) ;; end-of-let(casefnx)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_list_reverse[arg0]
(
with-local-vars
[
;;knd = 0
  tmpret69 nil
  tmp70 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list_reverse
  (ATSINStmpset tmp70 atscc2clj_null)
  (ats2cljpre_list_reverse_append arg0 @tmp70)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_list_reverse_append[arg0 arg1]
(
with-local-vars
[
;;knd = 0
  tmpret71 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list_reverse_append
  (_ats2cljpre_list_loop_20 arg0 arg1)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_list_loop_20[arg0 arg1]
(
with-local-vars
[
;;knd = 1
;;apy0 nil
;;apy1 nil
  tmpret72 nil
  tmp73 nil
  tmp74 nil
  tmp75 nil
;;var funlab_clj
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;while(true){
   (loop [
     arg0 arg0
     arg1 arg1
    ] ; funlab_clj = 0;
    ;; __patsflab__ats2cljpre_list_loop_20
    (let[
      casefnx
      (fn casefnx[tmplab](case tmplab
        ;; ATSbranchseq_beg
        1 (do
         (if (ATSCKptriscons arg0)
           (casefnx 4)
           (do
            (casefnx 2)
           )
         )
        ) ;; end-of-branch
        2 (do
         arg1
        ) ;; end-of-branch
        ;; ATSbranchseq_end
        ;; ATSbranchseq_beg
        3 (do
         (casefnx 4)
        ) ;; end-of-branch
        4 (do
         (ATSINStmpset tmp73 (ATSSELcon arg0 0))
         (ATSINStmpset tmp74 (ATSSELcon arg0 1))
         (ATSINStmpset tmp75 (ATSPMVtysum @tmp73 arg1))
         ;; apy0 = @tmp74
         ;; apy1 = @tmp75
         ;; arg0 = apy0
         ;; arg1 = apy1
         ;; funlab_clj = 1; // __patsflab__ats2cljpre_list_loop_20
         (_ats2cljpre_list_loop_20 @tmp74 @tmp75)
        ) ;; end-of-branch
        ;; ATSbranchseq_end
        ;; (else (atscc2clj_caseof_deadcode _FILE_ _LINE_))
       ) ;; end-of-case
      ) ;; end-of-casefnx
     ] (casefnx 1)
    ) ;; end-of-let(casefnx)
    ;; if (funlab_clj > 0) continue; else ;; return tmpret72;
  ) ;} // endwhile-fun
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_list_take[arg0 arg1]
(
with-local-vars
[
;;knd = 0
  tmpret76 nil
  tmp77 nil
  tmp78 nil
  tmp79 nil
  tmp80 nil
  tmp81 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list_take
  (ATSINStmpset tmp77 (ats2cljpre_gt_int1_int1 arg1 0))
  (if @tmp77
    (do
     (ATSINStmpset tmp78 (ATSSELcon arg0 0))
     (ATSINStmpset tmp79 (ATSSELcon arg0 1))
     (ATSINStmpset tmp81 (ats2cljpre_sub_int1_int1 arg1 1))
     (ATSINStmpset tmp80 (ats2cljpre_list_take @tmp79 @tmp81))
     (ATSPMVtysum @tmp78 @tmp80)
    ) ;; if-then
    (do
     atscc2clj_null
    ) ;; if-else
  )
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_list_drop[arg0 arg1]
(
with-local-vars
[
;;knd = 1
;;apy0 nil
;;apy1 nil
  tmpret82 nil
  tmp83 nil
  tmp84 nil
  tmp85 nil
;;var funlab_clj
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;while(true){
   (loop [
     arg0 arg0
     arg1 arg1
    ] ; funlab_clj = 0;
    ;; __patsflab_list_drop
    (ATSINStmpset tmp83 (ats2cljpre_gt_int1_int1 arg1 0))
    (if @tmp83
      (do
       (ATSINStmpset tmp84 (ATSSELcon arg0 1))
       (ATSINStmpset tmp85 (ats2cljpre_sub_int1_int1 arg1 1))
       ;; apy0 = @tmp84
       ;; apy1 = @tmp85
       ;; arg0 = apy0
       ;; arg1 = apy1
       ;; funlab_clj = 1; // __patsflab_list_drop
       (recur @tmp84 @tmp85)
      ) ;; if-then
      (do
       arg0
      ) ;; if-else
    )
    ;; if (funlab_clj > 0) continue; else ;; return tmpret82;
  ) ;} // endwhile-fun
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_list_split_at[arg0 arg1]
(
with-local-vars
[
;;knd = 0
  tmpret86 nil
  tmp87 nil
  tmp88 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list_split_at
  (ATSINStmpset tmp87 (ats2cljpre_list_take arg0 arg1))
  (ATSINStmpset tmp88 (ats2cljpre_list_drop arg0 arg1))
  (ATSPMVtyrec @tmp87 @tmp88)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_list_insert_at[arg0 arg1 arg2]
(
with-local-vars
[
;;knd = 0
  tmpret89 nil
  tmp90 nil
  tmp91 nil
  tmp92 nil
  tmp93 nil
  tmp94 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list_insert_at
  (ATSINStmpset tmp90 (ats2cljpre_gt_int1_int1 arg1 0))
  (if @tmp90
    (do
     (ATSINStmpset tmp91 (ATSSELcon arg0 0))
     (ATSINStmpset tmp92 (ATSSELcon arg0 1))
     (ATSINStmpset tmp94 (ats2cljpre_sub_int1_int1 arg1 1))
     (ATSINStmpset tmp93 (ats2cljpre_list_insert_at @tmp92 @tmp94 arg2))
     (ATSPMVtysum @tmp91 @tmp93)
    ) ;; if-then
    (do
     (ATSPMVtysum arg2 arg0)
    ) ;; if-else
  )
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_list_remove_at[arg0 arg1]
(
with-local-vars
[
;;knd = 0
  tmpret95 nil
  tmp96 nil
  tmp97 nil
  tmp98 nil
  tmp99 nil
  tmp100 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list_remove_at
  (ATSINStmpset tmp96 (ATSSELcon arg0 0))
  (ATSINStmpset tmp97 (ATSSELcon arg0 1))
  (ATSINStmpset tmp98 (ats2cljpre_gt_int1_int1 arg1 0))
  (if @tmp98
    (do
     (ATSINStmpset tmp100 (ats2cljpre_sub_int1_int1 arg1 1))
     (ATSINStmpset tmp99 (ats2cljpre_list_remove_at @tmp97 @tmp100))
     (ATSPMVtysum @tmp96 @tmp99)
    ) ;; if-then
    (do
     @tmp97
    ) ;; if-else
  )
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_list_takeout_at[arg0 arg1]
(
with-local-vars
[
;;knd = 0
  tmpret101 nil
  tmp102 nil
  tmp103 nil
  tmp104 nil
  tmp105 nil
  tmp106 nil
  tmp107 nil
  tmp108 nil
  tmp109 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list_takeout_at
  (ATSINStmpset tmp102 (ATSSELcon arg0 0))
  (ATSINStmpset tmp103 (ATSSELcon arg0 1))
  (ATSINStmpset tmp104 (ats2cljpre_gt_int1_int1 arg1 0))
  (if @tmp104
    (do
     (ATSINStmpset tmp106 (ats2cljpre_sub_int1_int1 arg1 1))
     (ATSINStmpset tmp105 (ats2cljpre_list_takeout_at @tmp103 @tmp106))
     (ATSINStmpset tmp107 (ATSSELboxrec @tmp105 0))
     (ATSINStmpset tmp108 (ATSSELboxrec @tmp105 1))
     (ATSINStmpset tmp109 (ATSPMVtysum @tmp102 @tmp108))
     (ATSPMVtyrec @tmp107 @tmp109)
    ) ;; if-then
    (do
     (ATSPMVtyrec @tmp102 @tmp103)
    ) ;; if-else
  )
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_list_exists[arg0 arg1]
(
with-local-vars
[
;;knd = 1
;;apy0 nil
;;apy1 nil
  tmpret110 nil
  tmp111 nil
  tmp112 nil
  tmp113 nil
;;var funlab_clj
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;while(true){
   (loop [
     arg0 arg0
     arg1 arg1
    ] ; funlab_clj = 0;
    ;; __patsflab_list_exists
    (let[
      casefnx
      (fn casefnx[tmplab](case tmplab
        ;; ATSbranchseq_beg
        1 (do
         (if (ATSCKptriscons arg0)
           (casefnx 4)
           (do
            (casefnx 2)
           )
         )
        ) ;; end-of-branch
        2 (do
         atscc2clj_false
        ) ;; end-of-branch
        ;; ATSbranchseq_end
        ;; ATSbranchseq_beg
        3 (do
         (casefnx 4)
        ) ;; end-of-branch
        4 (do
         (ATSINStmpset tmp111 (ATSSELcon arg0 0))
         (ATSINStmpset tmp112 (ATSSELcon arg0 1))
         (ATSINStmpset tmp113 ((ATSfunclo_fclo arg1) arg1 @tmp111))
         (if @tmp113
           (do
            atscc2clj_true
           ) ;; if-then
           (do
            ;; apy0 = @tmp112
            ;; apy1 = arg1
            ;; arg0 = apy0
            ;; arg1 = apy1
            ;; funlab_clj = 1; // __patsflab_list_exists
            (ats2cljpre_list_exists @tmp112 arg1)
           ) ;; if-else
         )
        ) ;; end-of-branch
        ;; ATSbranchseq_end
        ;; (else (atscc2clj_caseof_deadcode _FILE_ _LINE_))
       ) ;; end-of-case
      ) ;; end-of-casefnx
     ] (casefnx 1)
    ) ;; end-of-let(casefnx)
    ;; if (funlab_clj > 0) continue; else ;; return tmpret110;
  ) ;} // endwhile-fun
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_list_exists_method[arg0]
(
with-local-vars
[
;;knd = 0
  tmpret114 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list_exists_method
  (_ats2cljpre_list_patsfun_29__closurerize arg0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_list_patsfun_29[env0 arg0]
(
with-local-vars
[
;;knd = 0
  tmpret115 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab__ats2cljpre_list_patsfun_29
  (ats2cljpre_list_exists env0 arg0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_list_iexists[arg0 arg1]
(
with-local-vars
[
;;knd = 0
  tmpret116 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list_iexists
  (_ats2cljpre_list_loop_31 arg1 0 arg0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_list_loop_31[env0 arg0 arg1]
(
with-local-vars
[
;;knd = 1
;;apy0 nil
;;apy1 nil
  tmpret117 nil
  tmp118 nil
  tmp119 nil
  tmp120 nil
  tmp121 nil
;;var funlab_clj
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;while(true){
   (loop [
     env0 env0
     arg0 arg0
     arg1 arg1
    ] ; funlab_clj = 0;
    ;; __patsflab__ats2cljpre_list_loop_31
    (let[
      casefnx
      (fn casefnx[tmplab](case tmplab
        ;; ATSbranchseq_beg
        1 (do
         (if (ATSCKptriscons arg1)
           (casefnx 4)
           (do
            (casefnx 2)
           )
         )
        ) ;; end-of-branch
        2 (do
         atscc2clj_false
        ) ;; end-of-branch
        ;; ATSbranchseq_end
        ;; ATSbranchseq_beg
        3 (do
         (casefnx 4)
        ) ;; end-of-branch
        4 (do
         (ATSINStmpset tmp118 (ATSSELcon arg1 0))
         (ATSINStmpset tmp119 (ATSSELcon arg1 1))
         (ATSINStmpset tmp120 ((ATSfunclo_fclo env0) env0 arg0 @tmp118))
         (if @tmp120
           (do
            atscc2clj_true
           ) ;; if-then
           (do
            (ATSINStmpset tmp121 (ats2cljpre_add_int1_int1 arg0 1))
            ;; apy0 = @tmp121
            ;; apy1 = @tmp119
            ;; arg0 = apy0
            ;; arg1 = apy1
            ;; funlab_clj = 1; // __patsflab__ats2cljpre_list_loop_31
            (_ats2cljpre_list_loop_31 env0 @tmp121 @tmp119)
           ) ;; if-else
         )
        ) ;; end-of-branch
        ;; ATSbranchseq_end
        ;; (else (atscc2clj_caseof_deadcode _FILE_ _LINE_))
       ) ;; end-of-case
      ) ;; end-of-casefnx
     ] (casefnx 1)
    ) ;; end-of-let(casefnx)
    ;; if (funlab_clj > 0) continue; else ;; return tmpret117;
  ) ;} // endwhile-fun
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_list_iexists_method[arg0]
(
with-local-vars
[
;;knd = 0
  tmpret122 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list_iexists_method
  (_ats2cljpre_list_patsfun_33__closurerize arg0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_list_patsfun_33[env0 arg0]
(
with-local-vars
[
;;knd = 0
  tmpret123 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab__ats2cljpre_list_patsfun_33
  (ats2cljpre_list_iexists env0 arg0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_list_forall[arg0 arg1]
(
with-local-vars
[
;;knd = 1
;;apy0 nil
;;apy1 nil
  tmpret124 nil
  tmp125 nil
  tmp126 nil
  tmp127 nil
;;var funlab_clj
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;while(true){
   (loop [
     arg0 arg0
     arg1 arg1
    ] ; funlab_clj = 0;
    ;; __patsflab_list_forall
    (let[
      casefnx
      (fn casefnx[tmplab](case tmplab
        ;; ATSbranchseq_beg
        1 (do
         (if (ATSCKptriscons arg0)
           (casefnx 4)
           (do
            (casefnx 2)
           )
         )
        ) ;; end-of-branch
        2 (do
         atscc2clj_true
        ) ;; end-of-branch
        ;; ATSbranchseq_end
        ;; ATSbranchseq_beg
        3 (do
         (casefnx 4)
        ) ;; end-of-branch
        4 (do
         (ATSINStmpset tmp125 (ATSSELcon arg0 0))
         (ATSINStmpset tmp126 (ATSSELcon arg0 1))
         (ATSINStmpset tmp127 ((ATSfunclo_fclo arg1) arg1 @tmp125))
         (if @tmp127
           (do
            ;; apy0 = @tmp126
            ;; apy1 = arg1
            ;; arg0 = apy0
            ;; arg1 = apy1
            ;; funlab_clj = 1; // __patsflab_list_forall
            (ats2cljpre_list_forall @tmp126 arg1)
           ) ;; if-then
           (do
            atscc2clj_false
           ) ;; if-else
         )
        ) ;; end-of-branch
        ;; ATSbranchseq_end
        ;; (else (atscc2clj_caseof_deadcode _FILE_ _LINE_))
       ) ;; end-of-case
      ) ;; end-of-casefnx
     ] (casefnx 1)
    ) ;; end-of-let(casefnx)
    ;; if (funlab_clj > 0) continue; else ;; return tmpret124;
  ) ;} // endwhile-fun
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_list_forall_method[arg0]
(
with-local-vars
[
;;knd = 0
  tmpret128 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list_forall_method
  (_ats2cljpre_list_patsfun_36__closurerize arg0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_list_patsfun_36[env0 arg0]
(
with-local-vars
[
;;knd = 0
  tmpret129 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab__ats2cljpre_list_patsfun_36
  (ats2cljpre_list_forall env0 arg0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_list_iforall[arg0 arg1]
(
with-local-vars
[
;;knd = 0
  tmpret130 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list_iforall
  (_ats2cljpre_list_loop_38 arg1 0 arg0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_list_loop_38[env0 arg0 arg1]
(
with-local-vars
[
;;knd = 1
;;apy0 nil
;;apy1 nil
  tmpret131 nil
  tmp132 nil
  tmp133 nil
  tmp134 nil
  tmp135 nil
;;var funlab_clj
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;while(true){
   (loop [
     env0 env0
     arg0 arg0
     arg1 arg1
    ] ; funlab_clj = 0;
    ;; __patsflab__ats2cljpre_list_loop_38
    (let[
      casefnx
      (fn casefnx[tmplab](case tmplab
        ;; ATSbranchseq_beg
        1 (do
         (if (ATSCKptriscons arg1)
           (casefnx 4)
           (do
            (casefnx 2)
           )
         )
        ) ;; end-of-branch
        2 (do
         atscc2clj_true
        ) ;; end-of-branch
        ;; ATSbranchseq_end
        ;; ATSbranchseq_beg
        3 (do
         (casefnx 4)
        ) ;; end-of-branch
        4 (do
         (ATSINStmpset tmp132 (ATSSELcon arg1 0))
         (ATSINStmpset tmp133 (ATSSELcon arg1 1))
         (ATSINStmpset tmp134 ((ATSfunclo_fclo env0) env0 arg0 @tmp132))
         (if @tmp134
           (do
            (ATSINStmpset tmp135 (ats2cljpre_add_int1_int1 arg0 1))
            ;; apy0 = @tmp135
            ;; apy1 = @tmp133
            ;; arg0 = apy0
            ;; arg1 = apy1
            ;; funlab_clj = 1; // __patsflab__ats2cljpre_list_loop_38
            (_ats2cljpre_list_loop_38 env0 @tmp135 @tmp133)
           ) ;; if-then
           (do
            atscc2clj_false
           ) ;; if-else
         )
        ) ;; end-of-branch
        ;; ATSbranchseq_end
        ;; (else (atscc2clj_caseof_deadcode _FILE_ _LINE_))
       ) ;; end-of-case
      ) ;; end-of-casefnx
     ] (casefnx 1)
    ) ;; end-of-let(casefnx)
    ;; if (funlab_clj > 0) continue; else ;; return tmpret131;
  ) ;} // endwhile-fun
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_list_iforall_method[arg0]
(
with-local-vars
[
;;knd = 0
  tmpret136 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list_iforall_method
  (_ats2cljpre_list_patsfun_40__closurerize arg0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_list_patsfun_40[env0 arg0]
(
with-local-vars
[
;;knd = 0
  tmpret137 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab__ats2cljpre_list_patsfun_40
  (ats2cljpre_list_iforall env0 arg0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_list_app[arg0 arg1]
(
with-local-vars
[
;;knd = 0
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list_app
  (ATSINSmove1_void (ats2cljpre_list_foreach arg0 arg1))
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_list_foreach[arg0 arg1]
(
with-local-vars
[
;;knd = 1
;;apy0 nil
;;apy1 nil
  tmp140 nil
  tmp141 nil
;;var funlab_clj
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;while(true){
   (loop [
     arg0 arg0
     arg1 arg1
    ] ; funlab_clj = 0;
    ;; __patsflab_list_foreach
    (let[
      casefnx
      (fn casefnx[tmplab](case tmplab
        ;; ATSbranchseq_beg
        1 (do
         (if (ATSCKptriscons arg0)
           (casefnx 4)
           (do
            (casefnx 2)
           )
         )
        ) ;; end-of-branch
        2 (do
         ATSINSmove0_void
        ) ;; end-of-branch
        ;; ATSbranchseq_end
        ;; ATSbranchseq_beg
        3 (do
         (casefnx 4)
        ) ;; end-of-branch
        4 (do
         (ATSINStmpset tmp140 (ATSSELcon arg0 0))
         (ATSINStmpset tmp141 (ATSSELcon arg0 1))
         (ATSINSmove1_void ((ATSfunclo_fclo arg1) arg1 @tmp140))
         ;; apy0 = @tmp141
         ;; apy1 = arg1
         ;; arg0 = apy0
         ;; arg1 = apy1
         ;; funlab_clj = 1; // __patsflab_list_foreach
         (ats2cljpre_list_foreach @tmp141 arg1)
        ) ;; end-of-branch
        ;; ATSbranchseq_end
        ;; (else (atscc2clj_caseof_deadcode _FILE_ _LINE_))
       ) ;; end-of-case
      ) ;; end-of-casefnx
     ] (casefnx 1)
    ) ;; end-of-let(casefnx)
    ;; if (funlab_clj > 0) continue; else ;; return/*_void*/;
  ) ;} // endwhile-fun
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_list_foreach_method[arg0]
(
with-local-vars
[
;;knd = 0
  tmpret143 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list_foreach_method
  (_ats2cljpre_list_patsfun_44__closurerize arg0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_list_patsfun_44[env0 arg0]
(
with-local-vars
[
;;knd = 0
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab__ats2cljpre_list_patsfun_44
  (ATSINSmove1_void (ats2cljpre_list_foreach env0 arg0))
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_list_iforeach[arg0 arg1]
(
with-local-vars
[
;;knd = 0
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list_iforeach
  (ATSINSmove1_void (_ats2cljpre_list_aux_46 arg1 0 arg0))
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_list_aux_46[env0 arg0 arg1]
(
with-local-vars
[
;;knd = 1
;;apy0 nil
;;apy1 nil
  tmp147 nil
  tmp148 nil
  tmp150 nil
;;var funlab_clj
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;while(true){
   (loop [
     env0 env0
     arg0 arg0
     arg1 arg1
    ] ; funlab_clj = 0;
    ;; __patsflab__ats2cljpre_list_aux_46
    (let[
      casefnx
      (fn casefnx[tmplab](case tmplab
        ;; ATSbranchseq_beg
        1 (do
         (if (ATSCKptriscons arg1)
           (casefnx 4)
           (do
            (casefnx 2)
           )
         )
        ) ;; end-of-branch
        2 (do
         ATSINSmove0_void
        ) ;; end-of-branch
        ;; ATSbranchseq_end
        ;; ATSbranchseq_beg
        3 (do
         (casefnx 4)
        ) ;; end-of-branch
        4 (do
         (ATSINStmpset tmp147 (ATSSELcon arg1 0))
         (ATSINStmpset tmp148 (ATSSELcon arg1 1))
         (ATSINSmove1_void ((ATSfunclo_fclo env0) env0 arg0 @tmp147))
         (ATSINStmpset tmp150 (ats2cljpre_add_int0_int0 arg0 1))
         ;; apy0 = @tmp150
         ;; apy1 = @tmp148
         ;; arg0 = apy0
         ;; arg1 = apy1
         ;; funlab_clj = 1; // __patsflab__ats2cljpre_list_aux_46
         (_ats2cljpre_list_aux_46 env0 @tmp150 @tmp148)
        ) ;; end-of-branch
        ;; ATSbranchseq_end
        ;; (else (atscc2clj_caseof_deadcode _FILE_ _LINE_))
       ) ;; end-of-case
      ) ;; end-of-casefnx
     ] (casefnx 1)
    ) ;; end-of-let(casefnx)
    ;; if (funlab_clj > 0) continue; else ;; return/*_void*/;
  ) ;} // endwhile-fun
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_list_iforeach_method[arg0]
(
with-local-vars
[
;;knd = 0
  tmpret151 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list_iforeach_method
  (_ats2cljpre_list_patsfun_48__closurerize arg0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_list_patsfun_48[env0 arg0]
(
with-local-vars
[
;;knd = 0
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab__ats2cljpre_list_patsfun_48
  (ATSINSmove1_void (ats2cljpre_list_iforeach env0 arg0))
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_list_rforeach[arg0 arg1]
(
with-local-vars
[
;;knd = 0
  tmp154 nil
  tmp155 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list_rforeach
  (let[
    casefnx
    (fn casefnx[tmplab](case tmplab
      ;; ATSbranchseq_beg
      1 (do
       (if (ATSCKptriscons arg0)
         (casefnx 4)
         (do
          (casefnx 2)
         )
       )
      ) ;; end-of-branch
      2 (do
       ATSINSmove0_void
      ) ;; end-of-branch
      ;; ATSbranchseq_end
      ;; ATSbranchseq_beg
      3 (do
       (casefnx 4)
      ) ;; end-of-branch
      4 (do
       (ATSINStmpset tmp154 (ATSSELcon arg0 0))
       (ATSINStmpset tmp155 (ATSSELcon arg0 1))
       (ATSINSmove1_void (ats2cljpre_list_rforeach @tmp155 arg1))
       (ATSINSmove1_void ((ATSfunclo_fclo arg1) arg1 @tmp154))
      ) ;; end-of-branch
      ;; ATSbranchseq_end
      ;; (else (atscc2clj_caseof_deadcode _FILE_ _LINE_))
     ) ;; end-of-case
    ) ;; end-of-casefnx
   ] (casefnx 1)
  ) ;; end-of-let(casefnx)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_list_rforeach_method[arg0]
(
with-local-vars
[
;;knd = 0
  tmpret157 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list_rforeach_method
  (_ats2cljpre_list_patsfun_51__closurerize arg0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_list_patsfun_51[env0 arg0]
(
with-local-vars
[
;;knd = 0
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab__ats2cljpre_list_patsfun_51
  (ATSINSmove1_void (ats2cljpre_list_rforeach env0 arg0))
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_list_filter[arg0 arg1]
(
with-local-vars
[
;;knd = 0
  tmpret159 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list_filter
  (_ats2cljpre_list_aux_53 arg1 arg0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_list_aux_53[env0 arg0]
(
with-local-vars
[
;;knd = 1
;;apy0 nil
  tmpret160 nil
  tmp161 nil
  tmp162 nil
  tmp163 nil
  tmp164 nil
;;var funlab_clj
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;while(true){
   (loop [
     env0 env0
     arg0 arg0
    ] ; funlab_clj = 0;
    ;; __patsflab__ats2cljpre_list_aux_53
    (let[
      casefnx
      (fn casefnx[tmplab](case tmplab
        ;; ATSbranchseq_beg
        1 (do
         (if (ATSCKptriscons arg0)
           (casefnx 4)
           (do
            (casefnx 2)
           )
         )
        ) ;; end-of-branch
        2 (do
         atscc2clj_null
        ) ;; end-of-branch
        ;; ATSbranchseq_end
        ;; ATSbranchseq_beg
        3 (do
         (casefnx 4)
        ) ;; end-of-branch
        4 (do
         (ATSINStmpset tmp161 (ATSSELcon arg0 0))
         (ATSINStmpset tmp162 (ATSSELcon arg0 1))
         (ATSINStmpset tmp163 ((ATSfunclo_fclo env0) env0 @tmp161))
         (if @tmp163
           (do
            (ATSINStmpset tmp164 (_ats2cljpre_list_aux_53 env0 @tmp162))
            (ATSPMVtysum @tmp161 @tmp164)
           ) ;; if-then
           (do
            ;; apy0 = @tmp162
            ;; arg0 = apy0
            ;; funlab_clj = 1; // __patsflab__ats2cljpre_list_aux_53
            (_ats2cljpre_list_aux_53 env0 @tmp162)
           ) ;; if-else
         )
        ) ;; end-of-branch
        ;; ATSbranchseq_end
        ;; (else (atscc2clj_caseof_deadcode _FILE_ _LINE_))
       ) ;; end-of-case
      ) ;; end-of-casefnx
     ] (casefnx 1)
    ) ;; end-of-let(casefnx)
    ;; if (funlab_clj > 0) continue; else ;; return tmpret160;
  ) ;} // endwhile-fun
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_list_filter_method[arg0]
(
with-local-vars
[
;;knd = 0
  tmpret165 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list_filter_method
  (_ats2cljpre_list_patsfun_55__closurerize arg0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_list_patsfun_55[env0 arg0]
(
with-local-vars
[
;;knd = 0
  tmpret166 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab__ats2cljpre_list_patsfun_55
  (ats2cljpre_list_filter env0 arg0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_list_map[arg0 arg1]
(
with-local-vars
[
;;knd = 0
  tmpret167 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list_map
  (_ats2cljpre_list_aux_57 arg1 arg0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_list_aux_57[env0 arg0]
(
with-local-vars
[
;;knd = 0
  tmpret168 nil
  tmp169 nil
  tmp170 nil
  tmp171 nil
  tmp172 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab__ats2cljpre_list_aux_57
  (let[
    casefnx
    (fn casefnx[tmplab](case tmplab
      ;; ATSbranchseq_beg
      1 (do
       (if (ATSCKptriscons arg0)
         (casefnx 4)
         (do
          (casefnx 2)
         )
       )
      ) ;; end-of-branch
      2 (do
       atscc2clj_null
      ) ;; end-of-branch
      ;; ATSbranchseq_end
      ;; ATSbranchseq_beg
      3 (do
       (casefnx 4)
      ) ;; end-of-branch
      4 (do
       (ATSINStmpset tmp169 (ATSSELcon arg0 0))
       (ATSINStmpset tmp170 (ATSSELcon arg0 1))
       (ATSINStmpset tmp171 ((ATSfunclo_fclo env0) env0 @tmp169))
       (ATSINStmpset tmp172 (_ats2cljpre_list_aux_57 env0 @tmp170))
       (ATSPMVtysum @tmp171 @tmp172)
      ) ;; end-of-branch
      ;; ATSbranchseq_end
      ;; (else (atscc2clj_caseof_deadcode _FILE_ _LINE_))
     ) ;; end-of-case
    ) ;; end-of-casefnx
   ] (casefnx 1)
  ) ;; end-of-let(casefnx)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_list_map_method[arg0 arg1]
(
with-local-vars
[
;;knd = 0
  tmpret173 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list_map_method
  (_ats2cljpre_list_patsfun_59__closurerize arg0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_list_patsfun_59[env0 arg0]
(
with-local-vars
[
;;knd = 0
  tmpret174 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab__ats2cljpre_list_patsfun_59
  (ats2cljpre_list_map env0 arg0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_list_foldleft[arg0 arg1 arg2]
(
with-local-vars
[
;;knd = 0
  tmpret175 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list_foldleft
  (_ats2cljpre_list_loop_61 arg2 arg1 arg0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_list_loop_61[env0 arg0 arg1]
(
with-local-vars
[
;;knd = 1
;;apy0 nil
;;apy1 nil
  tmpret176 nil
  tmp177 nil
  tmp178 nil
  tmp179 nil
;;var funlab_clj
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;while(true){
   (loop [
     env0 env0
     arg0 arg0
     arg1 arg1
    ] ; funlab_clj = 0;
    ;; __patsflab__ats2cljpre_list_loop_61
    (let[
      casefnx
      (fn casefnx[tmplab](case tmplab
        ;; ATSbranchseq_beg
        1 (do
         (if (ATSCKptriscons arg1)
           (casefnx 4)
           (do
            (casefnx 2)
           )
         )
        ) ;; end-of-branch
        2 (do
         arg0
        ) ;; end-of-branch
        ;; ATSbranchseq_end
        ;; ATSbranchseq_beg
        3 (do
         (casefnx 4)
        ) ;; end-of-branch
        4 (do
         (ATSINStmpset tmp177 (ATSSELcon arg1 0))
         (ATSINStmpset tmp178 (ATSSELcon arg1 1))
         (ATSINStmpset tmp179 ((ATSfunclo_fclo env0) env0 arg0 @tmp177))
         ;; apy0 = @tmp179
         ;; apy1 = @tmp178
         ;; arg0 = apy0
         ;; arg1 = apy1
         ;; funlab_clj = 1; // __patsflab__ats2cljpre_list_loop_61
         (_ats2cljpre_list_loop_61 env0 @tmp179 @tmp178)
        ) ;; end-of-branch
        ;; ATSbranchseq_end
        ;; (else (atscc2clj_caseof_deadcode _FILE_ _LINE_))
       ) ;; end-of-case
      ) ;; end-of-casefnx
     ] (casefnx 1)
    ) ;; end-of-let(casefnx)
    ;; if (funlab_clj > 0) continue; else ;; return tmpret176;
  ) ;} // endwhile-fun
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_list_foldleft_method[arg0 arg1]
(
with-local-vars
[
;;knd = 0
  tmpret180 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list_foldleft_method
  (_ats2cljpre_list_patsfun_63__closurerize arg0 arg1)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_list_patsfun_63[env0 env1 arg0]
(
with-local-vars
[
;;knd = 0
  tmpret181 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab__ats2cljpre_list_patsfun_63
  (ats2cljpre_list_foldleft env0 env1 arg0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_list_ifoldleft[arg0 arg1 arg2]
(
with-local-vars
[
;;knd = 0
  tmpret182 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list_ifoldleft
  (_ats2cljpre_list_loop_65 arg2 0 arg1 arg0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_list_loop_65[env0 arg0 arg1 arg2]
(
with-local-vars
[
;;knd = 1
;;apy0 nil
;;apy1 nil
;;apy2 nil
  tmpret183 nil
  tmp184 nil
  tmp185 nil
  tmp186 nil
  tmp187 nil
;;var funlab_clj
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;while(true){
   (loop [
     env0 env0
     arg0 arg0
     arg1 arg1
     arg2 arg2
    ] ; funlab_clj = 0;
    ;; __patsflab__ats2cljpre_list_loop_65
    (let[
      casefnx
      (fn casefnx[tmplab](case tmplab
        ;; ATSbranchseq_beg
        1 (do
         (if (ATSCKptriscons arg2)
           (casefnx 4)
           (do
            (casefnx 2)
           )
         )
        ) ;; end-of-branch
        2 (do
         arg1
        ) ;; end-of-branch
        ;; ATSbranchseq_end
        ;; ATSbranchseq_beg
        3 (do
         (casefnx 4)
        ) ;; end-of-branch
        4 (do
         (ATSINStmpset tmp184 (ATSSELcon arg2 0))
         (ATSINStmpset tmp185 (ATSSELcon arg2 1))
         (ATSINStmpset tmp186 (ats2cljpre_add_int1_int1 arg0 1))
         (ATSINStmpset tmp187 ((ATSfunclo_fclo env0) env0 arg0 arg1 @tmp184))
         ;; apy0 = @tmp186
         ;; apy1 = @tmp187
         ;; apy2 = @tmp185
         ;; arg0 = apy0
         ;; arg1 = apy1
         ;; arg2 = apy2
         ;; funlab_clj = 1; // __patsflab__ats2cljpre_list_loop_65
         (_ats2cljpre_list_loop_65 env0 @tmp186 @tmp187 @tmp185)
        ) ;; end-of-branch
        ;; ATSbranchseq_end
        ;; (else (atscc2clj_caseof_deadcode _FILE_ _LINE_))
       ) ;; end-of-case
      ) ;; end-of-casefnx
     ] (casefnx 1)
    ) ;; end-of-let(casefnx)
    ;; if (funlab_clj > 0) continue; else ;; return tmpret183;
  ) ;} // endwhile-fun
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_list_ifoldleft_method[arg0 arg1]
(
with-local-vars
[
;;knd = 0
  tmpret188 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list_ifoldleft_method
  (_ats2cljpre_list_patsfun_67__closurerize arg0 arg1)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_list_patsfun_67[env0 env1 arg0]
(
with-local-vars
[
;;knd = 0
  tmpret189 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab__ats2cljpre_list_patsfun_67
  (ats2cljpre_list_ifoldleft env0 env1 arg0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_list_foldright[arg0 arg1 arg2]
(
with-local-vars
[
;;knd = 0
  tmpret190 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list_foldright
  (_ats2cljpre_list_aux_69 arg1 arg0 arg2)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_list_aux_69[env0 arg0 arg1]
(
with-local-vars
[
;;knd = 0
  tmpret191 nil
  tmp192 nil
  tmp193 nil
  tmp194 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab__ats2cljpre_list_aux_69
  (let[
    casefnx
    (fn casefnx[tmplab](case tmplab
      ;; ATSbranchseq_beg
      1 (do
       (if (ATSCKptriscons arg0)
         (casefnx 4)
         (do
          (casefnx 2)
         )
       )
      ) ;; end-of-branch
      2 (do
       arg1
      ) ;; end-of-branch
      ;; ATSbranchseq_end
      ;; ATSbranchseq_beg
      3 (do
       (casefnx 4)
      ) ;; end-of-branch
      4 (do
       (ATSINStmpset tmp192 (ATSSELcon arg0 0))
       (ATSINStmpset tmp193 (ATSSELcon arg0 1))
       (ATSINStmpset tmp194 (_ats2cljpre_list_aux_69 env0 @tmp193 arg1))
       ((ATSfunclo_fclo env0) env0 @tmp192 @tmp194)
      ) ;; end-of-branch
      ;; ATSbranchseq_end
      ;; (else (atscc2clj_caseof_deadcode _FILE_ _LINE_))
     ) ;; end-of-case
    ) ;; end-of-casefnx
   ] (casefnx 1)
  ) ;; end-of-let(casefnx)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_list_foldright_method[arg0 arg1]
(
with-local-vars
[
;;knd = 0
  tmpret195 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list_foldright_method
  (_ats2cljpre_list_patsfun_71__closurerize arg0 arg1)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_list_patsfun_71[env0 env1 arg0]
(
with-local-vars
[
;;knd = 0
  tmpret196 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab__ats2cljpre_list_patsfun_71
  (ats2cljpre_list_foldright env0 arg0 env1)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_list_ifoldright[arg0 arg1 arg2]
(
with-local-vars
[
;;knd = 0
  tmpret197 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list_ifoldright
  (_ats2cljpre_list_aux_73 arg1 0 arg0 arg2)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_list_aux_73[env0 arg0 arg1 arg2]
(
with-local-vars
[
;;knd = 0
  tmpret198 nil
  tmp199 nil
  tmp200 nil
  tmp201 nil
  tmp202 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab__ats2cljpre_list_aux_73
  (let[
    casefnx
    (fn casefnx[tmplab](case tmplab
      ;; ATSbranchseq_beg
      1 (do
       (if (ATSCKptriscons arg1)
         (casefnx 4)
         (do
          (casefnx 2)
         )
       )
      ) ;; end-of-branch
      2 (do
       arg2
      ) ;; end-of-branch
      ;; ATSbranchseq_end
      ;; ATSbranchseq_beg
      3 (do
       (casefnx 4)
      ) ;; end-of-branch
      4 (do
       (ATSINStmpset tmp199 (ATSSELcon arg1 0))
       (ATSINStmpset tmp200 (ATSSELcon arg1 1))
       (ATSINStmpset tmp202 (ats2cljpre_add_int1_int1 arg0 1))
       (ATSINStmpset tmp201 (_ats2cljpre_list_aux_73 env0 @tmp202 @tmp200 arg2))
       ((ATSfunclo_fclo env0) env0 arg0 @tmp199 @tmp201)
      ) ;; end-of-branch
      ;; ATSbranchseq_end
      ;; (else (atscc2clj_caseof_deadcode _FILE_ _LINE_))
     ) ;; end-of-case
    ) ;; end-of-casefnx
   ] (casefnx 1)
  ) ;; end-of-let(casefnx)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_list_ifoldright_method[arg0 arg1]
(
with-local-vars
[
;;knd = 0
  tmpret203 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list_ifoldright_method
  (_ats2cljpre_list_patsfun_75__closurerize arg0 arg1)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_list_patsfun_75[env0 env1 arg0]
(
with-local-vars
[
;;knd = 0
  tmpret204 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab__ats2cljpre_list_patsfun_75
  (ats2cljpre_list_ifoldright env0 arg0 env1)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_CLJlist_oflist_rev[arg0]
(
with-local-vars
[
;;knd = 0
  tmpret207 nil
  tmp212 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_CLJlist_oflist_rev
  (ATSINStmpset tmp212 (ats2cljpre_CLJlist_nil))
  (_ats2cljpre_list_aux_79 arg0 @tmp212)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_list_aux_79[arg0 arg1]
(
with-local-vars
[
;;knd = 1
;;apy0 nil
;;apy1 nil
  tmpret208 nil
  tmp209 nil
  tmp210 nil
  tmp211 nil
;;var funlab_clj
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;while(true){
   (loop [
     arg0 arg0
     arg1 arg1
    ] ; funlab_clj = 0;
    ;; __patsflab__ats2cljpre_list_aux_79
    (let[
      casefnx
      (fn casefnx[tmplab](case tmplab
        ;; ATSbranchseq_beg
        1 (do
         (if (ATSCKptriscons arg0)
           (casefnx 4)
           (do
            (casefnx 2)
           )
         )
        ) ;; end-of-branch
        2 (do
         arg1
        ) ;; end-of-branch
        ;; ATSbranchseq_end
        ;; ATSbranchseq_beg
        3 (do
         (casefnx 4)
        ) ;; end-of-branch
        4 (do
         (ATSINStmpset tmp209 (ATSSELcon arg0 0))
         (ATSINStmpset tmp210 (ATSSELcon arg0 1))
         (ATSINStmpset tmp211 (ats2cljpre_CLJlist_cons @tmp209 arg1))
         ;; apy0 = @tmp210
         ;; apy1 = @tmp211
         ;; arg0 = apy0
         ;; arg1 = apy1
         ;; funlab_clj = 1; // __patsflab__ats2cljpre_list_aux_79
         (_ats2cljpre_list_aux_79 @tmp210 @tmp211)
        ) ;; end-of-branch
        ;; ATSbranchseq_end
        ;; (else (atscc2clj_caseof_deadcode _FILE_ _LINE_))
       ) ;; end-of-case
      ) ;; end-of-casefnx
     ] (casefnx 1)
    ) ;; end-of-let(casefnx)
    ;; if (funlab_clj > 0) continue; else ;; return tmpret208;
  ) ;} // endwhile-fun
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_list_sort_2[arg0 arg1]
(
with-local-vars
[
;;knd = 0
  tmpret213 nil
  tmp214 nil
  tmp215 nil
  tmp218 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list_sort_2
  (ATSINStmpset tmp214 (ats2cljpre_CLJlist_oflist_rev arg0))
  (ATSINStmpset tmp215 (ats2cljpre_CLJlist_sort_2 @tmp214 (_ats2cljpre_list_patsfun_81__closurerize arg1)))
  (ATSINStmpset tmp218 (ats2cljpre_CLJlist2list_rev @tmp215))
  @tmp218
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_list_patsfun_81[env0 arg0 arg1]
(
with-local-vars
[
;;knd = 0
  tmpret216 nil
  tmp217 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab__ats2cljpre_list_patsfun_81
  (ATSINStmpset tmp217 ((ATSfunclo_fclo env0) env0 arg0 arg1))
  (ats2cljpre_neg_int0 @tmp217)
) ;; end-of-with-local-vars
) ;; end-of-fun

;;;;;;
;;
;; end-of-compilation-unit
;;
;;;;;;
;;;;;;
;;
;; The Clojure code is generated by atscc2clj
;; The starting compilation time is: 2016-9-26: 11h: 8m
;;
;;;;;;
(declare ats2cljpre_option_some)
(declare ats2cljpre_option_none)
(declare ats2cljpre_option_is_some)
(declare ats2cljpre_option_is_none)
;;;;;;


;;fun
(defn
 ats2cljpre_option_some[arg0]
(
with-local-vars
[
;;knd = 0
  tmpret0 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_option_some
  (ATSPMVtysum arg0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_option_none[]
(
with-local-vars
[
;;knd = 0
  tmpret1 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_option_none
  atscc2clj_null
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_option_is_some[arg0]
(
with-local-vars
[
;;knd = 0
  tmpret2 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_option_is_some
  (let[
    casefnx
    (fn casefnx[tmplab](case tmplab
      ;; ATSbranchseq_beg
      1 (do
       (if (ATSCKptrisnull arg0)
         (casefnx 4)
         (do
          (casefnx 2)
         )
       )
      ) ;; end-of-branch
      2 (do
       atscc2clj_true
      ) ;; end-of-branch
      ;; ATSbranchseq_end
      ;; ATSbranchseq_beg
      3 (do
       (casefnx 4)
      ) ;; end-of-branch
      4 (do
       atscc2clj_false
      ) ;; end-of-branch
      ;; ATSbranchseq_end
      ;; (else (atscc2clj_caseof_deadcode _FILE_ _LINE_))
     ) ;; end-of-case
    ) ;; end-of-casefnx
   ] (casefnx 1)
  ) ;; end-of-let(casefnx)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_option_is_none[arg0]
(
with-local-vars
[
;;knd = 0
  tmpret3 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_option_is_none
  (let[
    casefnx
    (fn casefnx[tmplab](case tmplab
      ;; ATSbranchseq_beg
      1 (do
       (if (ATSCKptriscons arg0)
         (casefnx 4)
         (do
          (casefnx 2)
         )
       )
      ) ;; end-of-branch
      2 (do
       atscc2clj_true
      ) ;; end-of-branch
      ;; ATSbranchseq_end
      ;; ATSbranchseq_beg
      3 (do
       (casefnx 4)
      ) ;; end-of-branch
      4 (do
       atscc2clj_false
      ) ;; end-of-branch
      ;; ATSbranchseq_end
      ;; (else (atscc2clj_caseof_deadcode _FILE_ _LINE_))
     ) ;; end-of-case
    ) ;; end-of-casefnx
   ] (casefnx 1)
  ) ;; end-of-let(casefnx)
) ;; end-of-with-local-vars
) ;; end-of-fun

;;;;;;
;;
;; end-of-compilation-unit
;;
;;;;;;
;;;;;;
;;
;; The Clojure code is generated by atscc2clj
;; The starting compilation time is: 2016-9-26: 11h: 8m
;;
;;;;;;
(declare _ats2cljpre_stream_loop_5)
(declare _ats2cljpre_stream_patsfun_7)
(declare _ats2cljpre_stream_patsfun_9)
(declare _ats2cljpre_stream_auxmain_11)
(declare _ats2cljpre_stream_auxmain_13)
(declare _ats2cljpre_stream_patsfun_15)
(declare _ats2cljpre_stream_patsfun_17)
(declare _ats2cljpre_stream_patsfun_19)
(declare _ats2cljpre_stream_patsfun_21)
(declare _ats2cljpre_stream_patsfun_24)
(declare _ats2cljpre_stream_loop_26)
(declare _ats2cljpre_stream_patsfun_28)
(declare _ats2cljpre_stream_auxmain_30)
(declare _ats2cljpre_stream_patsfun_31)
(declare _ats2cljpre_stream_auxmain_33)
(declare _ats2cljpre_stream_patsfun_34)
(declare _ats2cljpre_stream_patsfun_35)
(declare _ats2cljpre_stream_patsfun_38)
(declare _ats2cljpre_stream_patsfun_40)
(declare _ats2cljpre_stream_patsfun_42)
(declare ats2cljpre_stream_nth_opt)
(declare _ats2cljpre_stream_loop_5)
(declare ats2cljpre_stream_takeLte)
(declare _ats2cljpre_stream_patsfun_7)
(declare ats2cljpre_stream_dropLte)
(declare _ats2cljpre_stream_patsfun_9)
(declare ats2cljpre_stream_take_opt)
(declare _ats2cljpre_stream_auxmain_11)
(declare ats2cljpre_stream_drop_opt)
(declare _ats2cljpre_stream_auxmain_13)
(declare ats2cljpre_stream_map_cloref)
(declare _ats2cljpre_stream_patsfun_15)
(declare ats2cljpre_stream_map_method)
(declare _ats2cljpre_stream_patsfun_17)
(declare ats2cljpre_stream_filter_cloref)
(declare _ats2cljpre_stream_patsfun_19)
(declare ats2cljpre_stream_filter_method)
(declare _ats2cljpre_stream_patsfun_21)
(declare ats2cljpre_stream_foreach_cloref)
(declare ats2cljpre_stream_foreach_method)
(declare _ats2cljpre_stream_patsfun_24)
(declare ats2cljpre_stream_iforeach_cloref)
(declare _ats2cljpre_stream_loop_26)
(declare ats2cljpre_stream_iforeach_method)
(declare _ats2cljpre_stream_patsfun_28)
(declare ats2cljpre_stream_tabulate_cloref)
(declare _ats2cljpre_stream_auxmain_30)
(declare _ats2cljpre_stream_patsfun_31)
(declare ats2cljpre_cross_stream_list)
(declare _ats2cljpre_stream_auxmain_33)
(declare _ats2cljpre_stream_patsfun_34)
(declare _ats2cljpre_stream_patsfun_35)
(declare ats2cljpre_cross_stream_list0)
(declare ats2cljpre_stream2cloref_exn)
(declare _ats2cljpre_stream_patsfun_38)
(declare ats2cljpre_stream2cloref_opt)
(declare _ats2cljpre_stream_patsfun_40)
(declare ats2cljpre_stream2cloref_last)
(declare _ats2cljpre_stream_patsfun_42)
;;;;;;


(defn
_ats2cljpre_stream_patsfun_7__closurerize[xenv0 xenv1]
;;%{
  (list (fn[_fcenvs_](_ats2cljpre_stream_patsfun_7 (ATSCCget_1 _fcenvs_) (ATSCCget_2 _fcenvs_))) xenv0 xenv1)
;;%}
) ;; end-of-defn


(defn
_ats2cljpre_stream_patsfun_9__closurerize[xenv0 xenv1]
;;%{
  (list (fn[_fcenvs_](_ats2cljpre_stream_patsfun_9 (ATSCCget_1 _fcenvs_) (ATSCCget_2 _fcenvs_))) xenv0 xenv1)
;;%}
) ;; end-of-defn


(defn
_ats2cljpre_stream_patsfun_15__closurerize[xenv0 xenv1]
;;%{
  (list (fn[_fcenvs_](_ats2cljpre_stream_patsfun_15 (ATSCCget_1 _fcenvs_) (ATSCCget_2 _fcenvs_))) xenv0 xenv1)
;;%}
) ;; end-of-defn


(defn
_ats2cljpre_stream_patsfun_17__closurerize[xenv0]
;;%{
  (list (fn[_fcenvs_ xarg0](_ats2cljpre_stream_patsfun_17 (ATSCCget_1 _fcenvs_) xarg0)) xenv0)
;;%}
) ;; end-of-defn


(defn
_ats2cljpre_stream_patsfun_19__closurerize[xenv0 xenv1]
;;%{
  (list (fn[_fcenvs_](_ats2cljpre_stream_patsfun_19 (ATSCCget_1 _fcenvs_) (ATSCCget_2 _fcenvs_))) xenv0 xenv1)
;;%}
) ;; end-of-defn


(defn
_ats2cljpre_stream_patsfun_21__closurerize[xenv0]
;;%{
  (list (fn[_fcenvs_ xarg0](_ats2cljpre_stream_patsfun_21 (ATSCCget_1 _fcenvs_) xarg0)) xenv0)
;;%}
) ;; end-of-defn


(defn
_ats2cljpre_stream_patsfun_24__closurerize[xenv0]
;;%{
  (list (fn[_fcenvs_ xarg0](_ats2cljpre_stream_patsfun_24 (ATSCCget_1 _fcenvs_) xarg0)) xenv0)
;;%}
) ;; end-of-defn


(defn
_ats2cljpre_stream_patsfun_28__closurerize[xenv0]
;;%{
  (list (fn[_fcenvs_ xarg0](_ats2cljpre_stream_patsfun_28 (ATSCCget_1 _fcenvs_) xarg0)) xenv0)
;;%}
) ;; end-of-defn


(defn
_ats2cljpre_stream_patsfun_31__closurerize[xenv0 xenv1]
;;%{
  (list (fn[_fcenvs_](_ats2cljpre_stream_patsfun_31 (ATSCCget_1 _fcenvs_) (ATSCCget_2 _fcenvs_))) xenv0 xenv1)
;;%}
) ;; end-of-defn


(defn
_ats2cljpre_stream_patsfun_34__closurerize[xenv0 xenv1 xenv2 xenv3]
;;%{
  (list (fn[_fcenvs_](_ats2cljpre_stream_patsfun_34 (ATSCCget_1 _fcenvs_) (ATSCCget_2 _fcenvs_) (ATSCCget_3 _fcenvs_) (ATSCCget_at _fcenvs_ 4))) xenv0 xenv1 xenv2 xenv3)
;;%}
) ;; end-of-defn


(defn
_ats2cljpre_stream_patsfun_35__closurerize[xenv0 xenv1]
;;%{
  (list (fn[_fcenvs_](_ats2cljpre_stream_patsfun_35 (ATSCCget_1 _fcenvs_) (ATSCCget_2 _fcenvs_))) xenv0 xenv1)
;;%}
) ;; end-of-defn


(defn
_ats2cljpre_stream_patsfun_38__closurerize[xenv0]
;;%{
  (list (fn[_fcenvs_](_ats2cljpre_stream_patsfun_38 (ATSCCget_1 _fcenvs_))) xenv0)
;;%}
) ;; end-of-defn


(defn
_ats2cljpre_stream_patsfun_40__closurerize[xenv0]
;;%{
  (list (fn[_fcenvs_](_ats2cljpre_stream_patsfun_40 (ATSCCget_1 _fcenvs_))) xenv0)
;;%}
) ;; end-of-defn


(defn
_ats2cljpre_stream_patsfun_42__closurerize[xenv0 xenv1]
;;%{
  (list (fn[_fcenvs_](_ats2cljpre_stream_patsfun_42 (ATSCCget_1 _fcenvs_) (ATSCCget_2 _fcenvs_))) xenv0 xenv1)
;;%}
) ;; end-of-defn


;;fun
(defn
 ats2cljpre_stream_nth_opt[arg0 arg1]
(
with-local-vars
[
;;knd = 0
  tmpret5 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_stream_nth_opt
  (_ats2cljpre_stream_loop_5 arg0 arg1)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_stream_loop_5[arg0 arg1]
(
with-local-vars
[
;;knd = 1
;;apy0 nil
;;apy1 nil
  tmpret6 nil
  tmp7 nil
  tmp8 nil
  tmp9 nil
  tmp10 nil
  tmp11 nil
;;var funlab_clj
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;while(true){
   (loop [
     arg0 arg0
     arg1 arg1
    ] ; funlab_clj = 0;
    ;; __patsflab__ats2cljpre_stream_loop_5
    (ATSINStmpset tmp7 (ATSPMVlazyval_eval arg0))
    (let[
      casefnx
      (fn casefnx[tmplab](case tmplab
        ;; ATSbranchseq_beg
        1 (do
         (if (ATSCKptriscons @tmp7)
           (casefnx 4)
           (do
            (casefnx 2)
           )
         )
        ) ;; end-of-branch
        2 (do
         atscc2clj_null
        ) ;; end-of-branch
        ;; ATSbranchseq_end
        ;; ATSbranchseq_beg
        3 (do
         (casefnx 4)
        ) ;; end-of-branch
        4 (do
         (ATSINStmpset tmp8 (ATSSELcon @tmp7 0))
         (ATSINStmpset tmp9 (ATSSELcon @tmp7 1))
         (ATSINStmpset tmp10 (ats2cljpre_gt_int1_int1 arg1 0))
         (if @tmp10
           (do
            (ATSINStmpset tmp11 (ats2cljpre_pred_int1 arg1))
            ;; apy0 = @tmp9
            ;; apy1 = @tmp11
            ;; arg0 = apy0
            ;; arg1 = apy1
            ;; funlab_clj = 1; // __patsflab__ats2cljpre_stream_loop_5
            (_ats2cljpre_stream_loop_5 @tmp9 @tmp11)
           ) ;; if-then
           (do
            (ATSPMVtysum @tmp8)
           ) ;; if-else
         )
        ) ;; end-of-branch
        ;; ATSbranchseq_end
        ;; (else (atscc2clj_caseof_deadcode _FILE_ _LINE_))
       ) ;; end-of-case
      ) ;; end-of-casefnx
     ] (casefnx 1)
    ) ;; end-of-let(casefnx)
    ;; if (funlab_clj > 0) continue; else ;; return tmpret6;
  ) ;} // endwhile-fun
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_stream_takeLte[arg0 arg1]
(
with-local-vars
[
;;knd = 0
  tmpret12 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_stream_takeLte
  (ATSPMVlazyval (_ats2cljpre_stream_patsfun_7__closurerize arg0 arg1))
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_stream_patsfun_7[env0 env1]
(
with-local-vars
[
;;knd = 0
  tmpret13 nil
  tmp14 nil
  tmp15 nil
  tmp16 nil
  tmp17 nil
  tmp18 nil
  tmp19 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab__ats2cljpre_stream_patsfun_7
  (ATSINStmpset tmp14 (ats2cljpre_gt_int1_int1 env1 0))
  (if @tmp14
    (do
     (ATSINStmpset tmp15 (ATSPMVlazyval_eval env0))
     (let[
       casefnx
       (fn casefnx[tmplab](case tmplab
         ;; ATSbranchseq_beg
         1 (do
          (if (ATSCKptriscons @tmp15)
            (casefnx 4)
            (do
             (casefnx 2)
            )
          )
         ) ;; end-of-branch
         2 (do
          atscc2clj_null
         ) ;; end-of-branch
         ;; ATSbranchseq_end
         ;; ATSbranchseq_beg
         3 (do
          (casefnx 4)
         ) ;; end-of-branch
         4 (do
          (ATSINStmpset tmp16 (ATSSELcon @tmp15 0))
          (ATSINStmpset tmp17 (ATSSELcon @tmp15 1))
          (ATSINStmpset tmp19 (ats2cljpre_sub_int1_int1 env1 1))
          (ATSINStmpset tmp18 (ats2cljpre_stream_takeLte @tmp17 @tmp19))
          (ATSPMVtysum @tmp16 @tmp18)
         ) ;; end-of-branch
         ;; ATSbranchseq_end
         ;; (else (atscc2clj_caseof_deadcode _FILE_ _LINE_))
        ) ;; end-of-case
       ) ;; end-of-casefnx
      ] (casefnx 1)
     ) ;; end-of-let(casefnx)
    ) ;; if-then
    (do
     atscc2clj_null
    ) ;; if-else
  )
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_stream_dropLte[arg0 arg1]
(
with-local-vars
[
;;knd = 0
  tmpret20 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_stream_dropLte
  (ATSPMVlazyval (_ats2cljpre_stream_patsfun_9__closurerize arg0 arg1))
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_stream_patsfun_9[env0 env1]
(
with-local-vars
[
;;knd = 0
  tmpret21 nil
  tmp22 nil
  tmp23 nil
  tmp25 nil
  tmp26 nil
  tmp27 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab__ats2cljpre_stream_patsfun_9
  (ATSINStmpset tmp22 (ats2cljpre_gt_int1_int1 env1 0))
  (if @tmp22
    (do
     (ATSINStmpset tmp23 (ATSPMVlazyval_eval env0))
     (let[
       casefnx
       (fn casefnx[tmplab](case tmplab
         ;; ATSbranchseq_beg
         1 (do
          (if (ATSCKptriscons @tmp23)
            (casefnx 4)
            (do
             (casefnx 2)
            )
          )
         ) ;; end-of-branch
         2 (do
          atscc2clj_null
         ) ;; end-of-branch
         ;; ATSbranchseq_end
         ;; ATSbranchseq_beg
         3 (do
          (casefnx 4)
         ) ;; end-of-branch
         4 (do
          (ATSINStmpset tmp25 (ATSSELcon @tmp23 1))
          (ATSINStmpset tmp27 (ats2cljpre_sub_int1_int1 env1 1))
          (ATSINStmpset tmp26 (ats2cljpre_stream_dropLte @tmp25 @tmp27))
          (ATSPMVlazyval_eval @tmp26)
         ) ;; end-of-branch
         ;; ATSbranchseq_end
         ;; (else (atscc2clj_caseof_deadcode _FILE_ _LINE_))
        ) ;; end-of-case
       ) ;; end-of-casefnx
      ] (casefnx 1)
     ) ;; end-of-let(casefnx)
    ) ;; if-then
    (do
     (ATSPMVlazyval_eval env0)
    ) ;; if-else
  )
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_stream_take_opt[arg0 arg1]
(
with-local-vars
[
;;knd = 0
  tmpret28 nil
  tmp37 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_stream_take_opt
  (ATSINStmpset tmp37 atscc2clj_null)
  (_ats2cljpre_stream_auxmain_11 arg1 arg0 0 @tmp37)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_stream_auxmain_11[env0 arg0 arg1 arg2]
(
with-local-vars
[
;;knd = 1
;;apy0 nil
;;apy1 nil
;;apy2 nil
  tmpret29 nil
  tmp30 nil
  tmp31 nil
  tmp32 nil
  tmp33 nil
  tmp34 nil
  tmp35 nil
  tmp36 nil
;;var funlab_clj
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;while(true){
   (loop [
     env0 env0
     arg0 arg0
     arg1 arg1
     arg2 arg2
    ] ; funlab_clj = 0;
    ;; __patsflab__ats2cljpre_stream_auxmain_11
    (ATSINStmpset tmp30 (ats2cljpre_lt_int1_int1 arg1 env0))
    (if @tmp30
      (do
       (ATSINStmpset tmp31 (ATSPMVlazyval_eval arg0))
       (let[
         casefnx
         (fn casefnx[tmplab](case tmplab
           ;; ATSbranchseq_beg
           1 (do
            (if (ATSCKptriscons @tmp31)
              (casefnx 4)
              (do
               (casefnx 2)
              )
            )
           ) ;; end-of-branch
           2 (do
            atscc2clj_null
           ) ;; end-of-branch
           ;; ATSbranchseq_end
           ;; ATSbranchseq_beg
           3 (do
            (casefnx 4)
           ) ;; end-of-branch
           4 (do
            (ATSINStmpset tmp32 (ATSSELcon @tmp31 0))
            (ATSINStmpset tmp33 (ATSSELcon @tmp31 1))
            (ATSINStmpset tmp34 (ats2cljpre_add_int1_int1 arg1 1))
            (ATSINStmpset tmp35 (ATSPMVtysum @tmp32 arg2))
            ;; apy0 = @tmp33
            ;; apy1 = @tmp34
            ;; apy2 = @tmp35
            ;; arg0 = apy0
            ;; arg1 = apy1
            ;; arg2 = apy2
            ;; funlab_clj = 1; // __patsflab__ats2cljpre_stream_auxmain_11
            (_ats2cljpre_stream_auxmain_11 env0 @tmp33 @tmp34 @tmp35)
           ) ;; end-of-branch
           ;; ATSbranchseq_end
           ;; (else (atscc2clj_caseof_deadcode _FILE_ _LINE_))
          ) ;; end-of-case
         ) ;; end-of-casefnx
        ] (casefnx 1)
       ) ;; end-of-let(casefnx)
      ) ;; if-then
      (do
       (ATSINStmpset tmp36 (ats2cljpre_list_reverse arg2))
       (ATSPMVtysum @tmp36)
      ) ;; if-else
    )
    ;; if (funlab_clj > 0) continue; else ;; return tmpret29;
  ) ;} // endwhile-fun
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_stream_drop_opt[arg0 arg1]
(
with-local-vars
[
;;knd = 0
  tmpret38 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_stream_drop_opt
  (_ats2cljpre_stream_auxmain_13 arg1 arg0 0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_stream_auxmain_13[env0 arg0 arg1]
(
with-local-vars
[
;;knd = 1
;;apy0 nil
;;apy1 nil
  tmpret39 nil
  tmp40 nil
  tmp41 nil
  tmp43 nil
  tmp44 nil
;;var funlab_clj
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;while(true){
   (loop [
     env0 env0
     arg0 arg0
     arg1 arg1
    ] ; funlab_clj = 0;
    ;; __patsflab__ats2cljpre_stream_auxmain_13
    (ATSINStmpset tmp40 (ats2cljpre_lt_int1_int1 arg1 env0))
    (if @tmp40
      (do
       (ATSINStmpset tmp41 (ATSPMVlazyval_eval arg0))
       (let[
         casefnx
         (fn casefnx[tmplab](case tmplab
           ;; ATSbranchseq_beg
           1 (do
            (if (ATSCKptriscons @tmp41)
              (casefnx 4)
              (do
               (casefnx 2)
              )
            )
           ) ;; end-of-branch
           2 (do
            atscc2clj_null
           ) ;; end-of-branch
           ;; ATSbranchseq_end
           ;; ATSbranchseq_beg
           3 (do
            (casefnx 4)
           ) ;; end-of-branch
           4 (do
            (ATSINStmpset tmp43 (ATSSELcon @tmp41 1))
            (ATSINStmpset tmp44 (ats2cljpre_add_int1_int1 arg1 1))
            ;; apy0 = @tmp43
            ;; apy1 = @tmp44
            ;; arg0 = apy0
            ;; arg1 = apy1
            ;; funlab_clj = 1; // __patsflab__ats2cljpre_stream_auxmain_13
            (_ats2cljpre_stream_auxmain_13 env0 @tmp43 @tmp44)
           ) ;; end-of-branch
           ;; ATSbranchseq_end
           ;; (else (atscc2clj_caseof_deadcode _FILE_ _LINE_))
          ) ;; end-of-case
         ) ;; end-of-casefnx
        ] (casefnx 1)
       ) ;; end-of-let(casefnx)
      ) ;; if-then
      (do
       (ATSPMVtysum arg0)
      ) ;; if-else
    )
    ;; if (funlab_clj > 0) continue; else ;; return tmpret39;
  ) ;} // endwhile-fun
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_stream_map_cloref[arg0 arg1]
(
with-local-vars
[
;;knd = 0
  tmpret45 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_stream_map_cloref
  (ATSPMVlazyval (_ats2cljpre_stream_patsfun_15__closurerize arg0 arg1))
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_stream_patsfun_15[env0 env1]
(
with-local-vars
[
;;knd = 0
  tmpret46 nil
  tmp47 nil
  tmp48 nil
  tmp49 nil
  tmp50 nil
  tmp51 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab__ats2cljpre_stream_patsfun_15
  (ATSINStmpset tmp47 (ATSPMVlazyval_eval env0))
  (let[
    casefnx
    (fn casefnx[tmplab](case tmplab
      ;; ATSbranchseq_beg
      1 (do
       (if (ATSCKptriscons @tmp47)
         (casefnx 4)
         (do
          (casefnx 2)
         )
       )
      ) ;; end-of-branch
      2 (do
       atscc2clj_null
      ) ;; end-of-branch
      ;; ATSbranchseq_end
      ;; ATSbranchseq_beg
      3 (do
       (casefnx 4)
      ) ;; end-of-branch
      4 (do
       (ATSINStmpset tmp48 (ATSSELcon @tmp47 0))
       (ATSINStmpset tmp49 (ATSSELcon @tmp47 1))
       (ATSINStmpset tmp50 ((ATSfunclo_fclo env1) env1 @tmp48))
       (ATSINStmpset tmp51 (ats2cljpre_stream_map_cloref @tmp49 env1))
       (ATSPMVtysum @tmp50 @tmp51)
      ) ;; end-of-branch
      ;; ATSbranchseq_end
      ;; (else (atscc2clj_caseof_deadcode _FILE_ _LINE_))
     ) ;; end-of-case
    ) ;; end-of-casefnx
   ] (casefnx 1)
  ) ;; end-of-let(casefnx)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_stream_map_method[arg0 arg1]
(
with-local-vars
[
;;knd = 0
  tmpret52 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_stream_map_method
  (_ats2cljpre_stream_patsfun_17__closurerize arg0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_stream_patsfun_17[env0 arg0]
(
with-local-vars
[
;;knd = 0
  tmpret53 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab__ats2cljpre_stream_patsfun_17
  (ats2cljpre_stream_map_cloref env0 arg0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_stream_filter_cloref[arg0 arg1]
(
with-local-vars
[
;;knd = 0
  tmpret54 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_stream_filter_cloref
  (ATSPMVlazyval (_ats2cljpre_stream_patsfun_19__closurerize arg0 arg1))
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_stream_patsfun_19[env0 env1]
(
with-local-vars
[
;;knd = 0
  tmpret55 nil
  tmp56 nil
  tmp57 nil
  tmp58 nil
  tmp59 nil
  tmp60 nil
  tmp61 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab__ats2cljpre_stream_patsfun_19
  (ATSINStmpset tmp56 (ATSPMVlazyval_eval env0))
  (let[
    casefnx
    (fn casefnx[tmplab](case tmplab
      ;; ATSbranchseq_beg
      1 (do
       (if (ATSCKptriscons @tmp56)
         (casefnx 4)
         (do
          (casefnx 2)
         )
       )
      ) ;; end-of-branch
      2 (do
       atscc2clj_null
      ) ;; end-of-branch
      ;; ATSbranchseq_end
      ;; ATSbranchseq_beg
      3 (do
       (casefnx 4)
      ) ;; end-of-branch
      4 (do
       (ATSINStmpset tmp57 (ATSSELcon @tmp56 0))
       (ATSINStmpset tmp58 (ATSSELcon @tmp56 1))
       (ATSINStmpset tmp59 ((ATSfunclo_fclo env1) env1 @tmp57))
       (if @tmp59
         (do
          (ATSINStmpset tmp60 (ats2cljpre_stream_filter_cloref @tmp58 env1))
          (ATSPMVtysum @tmp57 @tmp60)
         ) ;; if-then
         (do
          (ATSINStmpset tmp61 (ats2cljpre_stream_filter_cloref @tmp58 env1))
          (ATSPMVlazyval_eval @tmp61)
         ) ;; if-else
       )
      ) ;; end-of-branch
      ;; ATSbranchseq_end
      ;; (else (atscc2clj_caseof_deadcode _FILE_ _LINE_))
     ) ;; end-of-case
    ) ;; end-of-casefnx
   ] (casefnx 1)
  ) ;; end-of-let(casefnx)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_stream_filter_method[arg0]
(
with-local-vars
[
;;knd = 0
  tmpret62 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_stream_filter_method
  (_ats2cljpre_stream_patsfun_21__closurerize arg0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_stream_patsfun_21[env0 arg0]
(
with-local-vars
[
;;knd = 0
  tmpret63 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab__ats2cljpre_stream_patsfun_21
  (ats2cljpre_stream_filter_cloref env0 arg0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_stream_foreach_cloref[arg0 arg1]
(
with-local-vars
[
;;knd = 1
;;apy0 nil
;;apy1 nil
  tmp65 nil
  tmp66 nil
  tmp67 nil
;;var funlab_clj
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;while(true){
   (loop [
     arg0 arg0
     arg1 arg1
    ] ; funlab_clj = 0;
    ;; __patsflab_stream_foreach_cloref
    (ATSINStmpset tmp65 (ATSPMVlazyval_eval arg0))
    (let[
      casefnx
      (fn casefnx[tmplab](case tmplab
        ;; ATSbranchseq_beg
        1 (do
         (if (ATSCKptriscons @tmp65)
           (casefnx 4)
           (do
            (casefnx 2)
           )
         )
        ) ;; end-of-branch
        2 (do
         ATSINSmove0_void
        ) ;; end-of-branch
        ;; ATSbranchseq_end
        ;; ATSbranchseq_beg
        3 (do
         (casefnx 4)
        ) ;; end-of-branch
        4 (do
         (ATSINStmpset tmp66 (ATSSELcon @tmp65 0))
         (ATSINStmpset tmp67 (ATSSELcon @tmp65 1))
         (ATSINSmove1_void ((ATSfunclo_fclo arg1) arg1 @tmp66))
         ;; apy0 = @tmp67
         ;; apy1 = arg1
         ;; arg0 = apy0
         ;; arg1 = apy1
         ;; funlab_clj = 1; // __patsflab_stream_foreach_cloref
         (ats2cljpre_stream_foreach_cloref @tmp67 arg1)
        ) ;; end-of-branch
        ;; ATSbranchseq_end
        ;; (else (atscc2clj_caseof_deadcode _FILE_ _LINE_))
       ) ;; end-of-case
      ) ;; end-of-casefnx
     ] (casefnx 1)
    ) ;; end-of-let(casefnx)
    ;; if (funlab_clj > 0) continue; else ;; return/*_void*/;
  ) ;} // endwhile-fun
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_stream_foreach_method[arg0]
(
with-local-vars
[
;;knd = 0
  tmpret69 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_stream_foreach_method
  (_ats2cljpre_stream_patsfun_24__closurerize arg0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_stream_patsfun_24[env0 arg0]
(
with-local-vars
[
;;knd = 0
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab__ats2cljpre_stream_patsfun_24
  (ATSINSmove1_void (ats2cljpre_stream_foreach_cloref env0 arg0))
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_stream_iforeach_cloref[arg0 arg1]
(
with-local-vars
[
;;knd = 0
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_stream_iforeach_cloref
  (ATSINSmove1_void (_ats2cljpre_stream_loop_26 arg1 0 arg0))
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_stream_loop_26[env0 arg0 arg1]
(
with-local-vars
[
;;knd = 1
;;apy0 nil
;;apy1 nil
  tmp73 nil
  tmp74 nil
  tmp75 nil
  tmp77 nil
;;var funlab_clj
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;while(true){
   (loop [
     env0 env0
     arg0 arg0
     arg1 arg1
    ] ; funlab_clj = 0;
    ;; __patsflab__ats2cljpre_stream_loop_26
    (ATSINStmpset tmp73 (ATSPMVlazyval_eval arg1))
    (let[
      casefnx
      (fn casefnx[tmplab](case tmplab
        ;; ATSbranchseq_beg
        1 (do
         (if (ATSCKptriscons @tmp73)
           (casefnx 4)
           (do
            (casefnx 2)
           )
         )
        ) ;; end-of-branch
        2 (do
         ATSINSmove0_void
        ) ;; end-of-branch
        ;; ATSbranchseq_end
        ;; ATSbranchseq_beg
        3 (do
         (casefnx 4)
        ) ;; end-of-branch
        4 (do
         (ATSINStmpset tmp74 (ATSSELcon @tmp73 0))
         (ATSINStmpset tmp75 (ATSSELcon @tmp73 1))
         (ATSINSmove1_void ((ATSfunclo_fclo env0) env0 arg0 @tmp74))
         (ATSINStmpset tmp77 (ats2cljpre_add_int1_int1 arg0 1))
         ;; apy0 = @tmp77
         ;; apy1 = @tmp75
         ;; arg0 = apy0
         ;; arg1 = apy1
         ;; funlab_clj = 1; // __patsflab__ats2cljpre_stream_loop_26
         (_ats2cljpre_stream_loop_26 env0 @tmp77 @tmp75)
        ) ;; end-of-branch
        ;; ATSbranchseq_end
        ;; (else (atscc2clj_caseof_deadcode _FILE_ _LINE_))
       ) ;; end-of-case
      ) ;; end-of-casefnx
     ] (casefnx 1)
    ) ;; end-of-let(casefnx)
    ;; if (funlab_clj > 0) continue; else ;; return/*_void*/;
  ) ;} // endwhile-fun
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_stream_iforeach_method[arg0]
(
with-local-vars
[
;;knd = 0
  tmpret78 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_stream_iforeach_method
  (_ats2cljpre_stream_patsfun_28__closurerize arg0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_stream_patsfun_28[env0 arg0]
(
with-local-vars
[
;;knd = 0
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab__ats2cljpre_stream_patsfun_28
  (ATSINSmove1_void (ats2cljpre_stream_iforeach_cloref env0 arg0))
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_stream_tabulate_cloref[arg0]
(
with-local-vars
[
;;knd = 0
  tmpret80 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_stream_tabulate_cloref
  (_ats2cljpre_stream_auxmain_30 arg0 0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_stream_auxmain_30[env0 arg0]
(
with-local-vars
[
;;knd = 0
  tmpret81 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab__ats2cljpre_stream_auxmain_30
  (ATSPMVlazyval (_ats2cljpre_stream_patsfun_31__closurerize env0 arg0))
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_stream_patsfun_31[env0 env1]
(
with-local-vars
[
;;knd = 0
  tmpret82 nil
  tmp83 nil
  tmp84 nil
  tmp85 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab__ats2cljpre_stream_patsfun_31
  (ATSINStmpset tmp83 ((ATSfunclo_fclo env0) env0 env1))
  (ATSINStmpset tmp85 (ats2cljpre_add_int1_int1 env1 1))
  (ATSINStmpset tmp84 (_ats2cljpre_stream_auxmain_30 env0 @tmp85))
  (ATSPMVtysum @tmp83 @tmp84)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_cross_stream_list[arg0 arg1]
(
with-local-vars
[
;;knd = 0
  tmpret86 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_cross_stream_list
  (ATSPMVlazyval (_ats2cljpre_stream_patsfun_35__closurerize arg0 arg1))
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_stream_auxmain_33[arg0 arg1 arg2 arg3]
(
with-local-vars
[
;;knd = 0
  tmpret87 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab__ats2cljpre_stream_auxmain_33
  (ATSPMVlazyval (_ats2cljpre_stream_patsfun_34__closurerize arg0 arg1 arg2 arg3))
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_stream_patsfun_34[env0 env1 env2 env3]
(
with-local-vars
[
;;knd = 0
  tmpret88 nil
  tmp89 nil
  tmp90 nil
  tmp91 nil
  tmp92 nil
  tmp93 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab__ats2cljpre_stream_patsfun_34
  (let[
    casefnx
    (fn casefnx[tmplab](case tmplab
      ;; ATSbranchseq_beg
      1 (do
       (if (ATSCKptriscons env3)
         (casefnx 4)
         (do
          (casefnx 2)
         )
       )
      ) ;; end-of-branch
      2 (do
       (ATSINStmpset tmp91 (ats2cljpre_cross_stream_list env1 env2))
       (ATSPMVlazyval_eval @tmp91)
      ) ;; end-of-branch
      ;; ATSbranchseq_end
      ;; ATSbranchseq_beg
      3 (do
       (casefnx 4)
      ) ;; end-of-branch
      4 (do
       (ATSINStmpset tmp89 (ATSSELcon env3 0))
       (ATSINStmpset tmp90 (ATSSELcon env3 1))
       (ATSINStmpset tmp92 (ATSPMVtyrec env0 @tmp89))
       (ATSINStmpset tmp93 (_ats2cljpre_stream_auxmain_33 env0 env1 env2 @tmp90))
       (ATSPMVtysum @tmp92 @tmp93)
      ) ;; end-of-branch
      ;; ATSbranchseq_end
      ;; (else (atscc2clj_caseof_deadcode _FILE_ _LINE_))
     ) ;; end-of-case
    ) ;; end-of-casefnx
   ] (casefnx 1)
  ) ;; end-of-let(casefnx)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_stream_patsfun_35[env0 env1]
(
with-local-vars
[
;;knd = 0
  tmpret94 nil
  tmp95 nil
  tmp96 nil
  tmp97 nil
  tmp98 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab__ats2cljpre_stream_patsfun_35
  (ATSINStmpset tmp95 (ATSPMVlazyval_eval env0))
  (let[
    casefnx
    (fn casefnx[tmplab](case tmplab
      ;; ATSbranchseq_beg
      1 (do
       (if (ATSCKptriscons @tmp95)
         (casefnx 4)
         (do
          (casefnx 2)
         )
       )
      ) ;; end-of-branch
      2 (do
       atscc2clj_null
      ) ;; end-of-branch
      ;; ATSbranchseq_end
      ;; ATSbranchseq_beg
      3 (do
       (if (ATSCKptrisnull @tmp95)
         (ATSINScaseof_fail "/home/hwxi/Research/ATS-Postiats-contrib/contrib/libatscc/DATS/stream.dats: 4702(line=305, offs=1) -- 4794(line=307, offs=50)")
         (do
          (casefnx 4)
         )
       )
      ) ;; end-of-branch
      4 (do
       (ATSINStmpset tmp96 (ATSSELcon @tmp95 0))
       (ATSINStmpset tmp97 (ATSSELcon @tmp95 1))
       (ATSINStmpset tmp98 (_ats2cljpre_stream_auxmain_33 @tmp96 @tmp97 env1 env1))
       (ATSPMVlazyval_eval @tmp98)
      ) ;; end-of-branch
      ;; ATSbranchseq_end
      ;; (else (atscc2clj_caseof_deadcode _FILE_ _LINE_))
     ) ;; end-of-case
    ) ;; end-of-casefnx
   ] (casefnx 1)
  ) ;; end-of-let(casefnx)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_cross_stream_list0[arg0 arg1]
(
with-local-vars
[
;;knd = 0
  tmpret99 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_cross_stream_list0
  (ats2cljpre_cross_stream_list arg0 arg1)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_stream2cloref_exn[arg0]
(
with-local-vars
[
;;knd = 0
  tmpret100 nil
  tmp101 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_stream2cloref_exn
  (ATSINStmpset tmp101 (ats2cljpre_ref arg0))
  (_ats2cljpre_stream_patsfun_38__closurerize @tmp101)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_stream_patsfun_38[env0]
(
with-local-vars
[
;;knd = 0
  tmpret102 nil
  tmp103 nil
  tmp104 nil
  tmp105 nil
  tmp106 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab__ats2cljpre_stream_patsfun_38
  (ATSINStmpset tmp103 (ats2cljpre_ref_get_elt env0))
  (ATSINStmpset tmp104 (ATSPMVlazyval_eval @tmp103))
  (if (ATSCKptrisnull @tmp104) (ATSINScaseof_fail "/home/hwxi/Research/ATS-Postiats-contrib/contrib/libatscc/DATS/stream.dats: 5095(line=333, offs=5) -- 5119(line=333, offs=29)"))
  (ATSINStmpset tmp105 (ATSSELcon @tmp104 0))
  (ATSINStmpset tmp106 (ATSSELcon @tmp104 1))
  (ATSINSmove1_void (ats2cljpre_ref_set_elt env0 @tmp106))
  @tmp105
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_stream2cloref_opt[arg0]
(
with-local-vars
[
;;knd = 0
  tmpret108 nil
  tmp109 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_stream2cloref_opt
  (ATSINStmpset tmp109 (ats2cljpre_ref arg0))
  (_ats2cljpre_stream_patsfun_40__closurerize @tmp109)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_stream_patsfun_40[env0]
(
with-local-vars
[
;;knd = 0
  tmpret110 nil
  tmp111 nil
  tmp112 nil
  tmp113 nil
  tmp114 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab__ats2cljpre_stream_patsfun_40
  (ATSINStmpset tmp111 (ats2cljpre_ref_get_elt env0))
  (ATSINStmpset tmp112 (ATSPMVlazyval_eval @tmp111))
  (let[
    casefnx
    (fn casefnx[tmplab](case tmplab
      ;; ATSbranchseq_beg
      1 (do
       (if (ATSCKptriscons @tmp112)
         (casefnx 4)
         (do
          (casefnx 2)
         )
       )
      ) ;; end-of-branch
      2 (do
       atscc2clj_null
      ) ;; end-of-branch
      ;; ATSbranchseq_end
      ;; ATSbranchseq_beg
      3 (do
       (casefnx 4)
      ) ;; end-of-branch
      4 (do
       (ATSINStmpset tmp113 (ATSSELcon @tmp112 0))
       (ATSINStmpset tmp114 (ATSSELcon @tmp112 1))
       (ATSINSmove1_void (ats2cljpre_ref_set_elt env0 @tmp114))
       (ATSPMVtysum @tmp113)
      ) ;; end-of-branch
      ;; ATSbranchseq_end
      ;; (else (atscc2clj_caseof_deadcode _FILE_ _LINE_))
     ) ;; end-of-case
    ) ;; end-of-casefnx
   ] (casefnx 1)
  ) ;; end-of-let(casefnx)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_stream2cloref_last[arg0 arg1]
(
with-local-vars
[
;;knd = 0
  tmpret116 nil
  tmp117 nil
  tmp118 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_stream2cloref_last
  (ATSINStmpset tmp117 (ats2cljpre_ref arg0))
  (ATSINStmpset tmp118 (ats2cljpre_ref arg1))
  (_ats2cljpre_stream_patsfun_42__closurerize @tmp117 @tmp118)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_stream_patsfun_42[env0 env1]
(
with-local-vars
[
;;knd = 0
  tmpret119 nil
  tmp120 nil
  tmp121 nil
  tmp122 nil
  tmp123 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab__ats2cljpre_stream_patsfun_42
  (ATSINStmpset tmp120 (ats2cljpre_ref_get_elt env0))
  (ATSINStmpset tmp121 (ATSPMVlazyval_eval @tmp120))
  (let[
    casefnx
    (fn casefnx[tmplab](case tmplab
      ;; ATSbranchseq_beg
      1 (do
       (if (ATSCKptriscons @tmp121)
         (casefnx 4)
         (do
          (casefnx 2)
         )
       )
      ) ;; end-of-branch
      2 (do
       (ats2cljpre_ref_get_elt env1)
      ) ;; end-of-branch
      ;; ATSbranchseq_end
      ;; ATSbranchseq_beg
      3 (do
       (casefnx 4)
      ) ;; end-of-branch
      4 (do
       (ATSINStmpset tmp122 (ATSSELcon @tmp121 0))
       (ATSINStmpset tmp123 (ATSSELcon @tmp121 1))
       (ATSINSmove1_void (ats2cljpre_ref_set_elt env0 @tmp123))
       (ATSINSmove1_void (ats2cljpre_ref_set_elt env1 @tmp122))
       @tmp122
      ) ;; end-of-branch
      ;; ATSbranchseq_end
      ;; (else (atscc2clj_caseof_deadcode _FILE_ _LINE_))
     ) ;; end-of-case
    ) ;; end-of-casefnx
   ] (casefnx 1)
  ) ;; end-of-let(casefnx)
) ;; end-of-with-local-vars
) ;; end-of-fun

;;;;;;
;;
;; end-of-compilation-unit
;;
;;;;;;
;;;;;;
;;
;; The Clojure code is generated by atscc2clj
;; The starting compilation time is: 2016-9-26: 11h: 8m
;;
;;;;;;
(declare _ats2cljpre_stream_vt_auxmain_5)
(declare _ats2cljpre_stream_vt_patsfun_6)
(declare ats2cljpre_stream_vt_filter_cloref)
(declare _ats2cljpre_stream_vt_auxmain_5)
(declare _ats2cljpre_stream_vt_patsfun_6)
;;;;;;


(defn
_ats2cljpre_stream_vt_patsfun_6__closurerize[xenv0 xenv1]
;;%{
  (list (fn[_fcenvs_ xarg0](_ats2cljpre_stream_vt_patsfun_6 (ATSCCget_1 _fcenvs_) (ATSCCget_2 _fcenvs_) xarg0)) xenv0 xenv1)
;;%}
) ;; end-of-defn


;;fun
(defn
 ats2cljpre_stream_vt_filter_cloref[arg0 arg1]
(
with-local-vars
[
;;knd = 0
  tmpret5 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_stream_vt_filter_cloref
  (_ats2cljpre_stream_vt_auxmain_5 arg1 arg0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_stream_vt_auxmain_5[env0 arg0]
(
with-local-vars
[
;;knd = 0
  tmpret6 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab__ats2cljpre_stream_vt_auxmain_5
  (ATSPMVllazyval (_ats2cljpre_stream_vt_patsfun_6__closurerize env0 arg0))
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_stream_vt_patsfun_6[env0 env1 arg0]
(
with-local-vars
[
;;knd = 0
  tmpret7 nil
  tmp8 nil
  tmp9 nil
  tmp10 nil
  tmp11 nil
  tmp12 nil
  tmp13 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab__ats2cljpre_stream_vt_patsfun_6
  (if arg0
    (do
     (ATSINStmpset tmp8 (ATSPMVllazyval_eval env1))
     (let[
       casefnx
       (fn casefnx[tmplab](case tmplab
         ;; ATSbranchseq_beg
         1 (do
          (if (ATSCKptriscons @tmp8)
            (casefnx 4)
            (do
             (casefnx 2)
            )
          )
         ) ;; end-of-branch
         2 (do
          atscc2clj_null
         ) ;; end-of-branch
         ;; ATSbranchseq_end
         ;; ATSbranchseq_beg
         3 (do
          (casefnx 4)
         ) ;; end-of-branch
         4 (do
          (ATSINStmpset tmp9 (ATSSELcon @tmp8 0))
          (ATSINStmpset tmp10 (ATSSELcon @tmp8 1))
          ;; ATSINSfreecon(@tmp8);
          (ATSINStmpset tmp11 ((ATSfunclo_fclo env0) env0 @tmp9))
          (if @tmp11
            (do
             (ATSINStmpset tmp12 (_ats2cljpre_stream_vt_auxmain_5 env0 @tmp10))
             (ATSPMVtysum @tmp9 @tmp12)
            ) ;; if-then
            (do
             (ATSINStmpset tmp13 (_ats2cljpre_stream_vt_auxmain_5 env0 @tmp10))
             (ATSPMVllazyval_eval @tmp13)
            ) ;; if-else
          )
         ) ;; end-of-branch
         ;; ATSbranchseq_end
         ;; (else (atscc2clj_caseof_deadcode _FILE_ _LINE_))
        ) ;; end-of-case
       ) ;; end-of-casefnx
      ] (casefnx 1)
     ) ;; end-of-let(casefnx)
    ) ;; if-then
    (do
     (ATSINSmove1_void (atspre_lazy_vt_free env1))
    ) ;; if-else
  )
) ;; end-of-with-local-vars
) ;; end-of-fun

;;;;;;
;;
;; end-of-compilation-unit
;;
;;;;;;
;;;;;;
;;
;; The Clojure code is generated by atscc2clj
;; The starting compilation time is: 2016-9-26: 11h: 8m
;;
;;;;;;
(declare _ats2cljpre_intrange_loop_2)
(declare _ats2cljpre_intrange_patsfun_7)
(declare _ats2cljpre_intrange_patsfun_9)
(declare _ats2cljpre_intrange_patsfun_11)
(declare _ats2cljpre_intrange_patsfun_14)
(declare _ats2cljpre_intrange_aux_16)
(declare _ats2cljpre_intrange_patsfun_18)
(declare _ats2cljpre_intrange_loop_23)
(declare _ats2cljpre_intrange_patsfun_25)
(declare _ats2cljpre_intrange_loop_27)
(declare _ats2cljpre_intrange_patsfun_29)
(declare _ats2cljpre_intrange_loop_31)
(declare _ats2cljpre_intrange_patsfun_33)
(declare _ats2cljpre_intrange_loop_35)
(declare _ats2cljpre_intrange_patsfun_37)
(declare _ats2cljpre_intrange_loop1_39)
(declare _ats2cljpre_intrange_loop1_42)
(declare _ats2cljpre_intrange_loop1_45)
(declare ats2cljpre_int_repeat_lazy)
(declare ats2cljpre_int_repeat_cloref)
(declare _ats2cljpre_intrange_loop_2)
(declare ats2cljpre_int_exists_cloref)
(declare ats2cljpre_int_forall_cloref)
(declare ats2cljpre_int_foreach_cloref)
(declare ats2cljpre_int_exists_method)
(declare _ats2cljpre_intrange_patsfun_7)
(declare ats2cljpre_int_forall_method)
(declare _ats2cljpre_intrange_patsfun_9)
(declare ats2cljpre_int_foreach_method)
(declare _ats2cljpre_intrange_patsfun_11)
(declare ats2cljpre_int_foldleft_cloref)
(declare ats2cljpre_int_foldleft_method)
(declare _ats2cljpre_intrange_patsfun_14)
(declare ats2cljpre_int_list_map_cloref)
(declare _ats2cljpre_intrange_aux_16)
(declare ats2cljpre_int_list_map_method)
(declare _ats2cljpre_intrange_patsfun_18)
(declare ats2cljpre_int2_exists_cloref)
(declare ats2cljpre_int2_forall_cloref)
(declare ats2cljpre_int2_foreach_cloref)
(declare ats2cljpre_intrange_exists_cloref)
(declare _ats2cljpre_intrange_loop_23)
(declare ats2cljpre_intrange_exists_method)
(declare _ats2cljpre_intrange_patsfun_25)
(declare ats2cljpre_intrange_forall_cloref)
(declare _ats2cljpre_intrange_loop_27)
(declare ats2cljpre_intrange_forall_method)
(declare _ats2cljpre_intrange_patsfun_29)
(declare ats2cljpre_intrange_foreach_cloref)
(declare _ats2cljpre_intrange_loop_31)
(declare ats2cljpre_intrange_foreach_method)
(declare _ats2cljpre_intrange_patsfun_33)
(declare ats2cljpre_intrange_foldleft_cloref)
(declare _ats2cljpre_intrange_loop_35)
(declare ats2cljpre_intrange_foldleft_method)
(declare _ats2cljpre_intrange_patsfun_37)
(declare ats2cljpre_intrange2_exists_cloref)
(declare _ats2cljpre_intrange_loop1_39)
(declare ats2cljpre_intrange2_forall_cloref)
(declare _ats2cljpre_intrange_loop1_42)
(declare ats2cljpre_intrange2_foreach_cloref)
(declare _ats2cljpre_intrange_loop1_45)
;;;;;;


(defn
_ats2cljpre_intrange_patsfun_7__closurerize[xenv0]
;;%{
  (list (fn[_fcenvs_ xarg0](_ats2cljpre_intrange_patsfun_7 (ATSCCget_1 _fcenvs_) xarg0)) xenv0)
;;%}
) ;; end-of-defn


(defn
_ats2cljpre_intrange_patsfun_9__closurerize[xenv0]
;;%{
  (list (fn[_fcenvs_ xarg0](_ats2cljpre_intrange_patsfun_9 (ATSCCget_1 _fcenvs_) xarg0)) xenv0)
;;%}
) ;; end-of-defn


(defn
_ats2cljpre_intrange_patsfun_11__closurerize[xenv0]
;;%{
  (list (fn[_fcenvs_ xarg0](_ats2cljpre_intrange_patsfun_11 (ATSCCget_1 _fcenvs_) xarg0)) xenv0)
;;%}
) ;; end-of-defn


(defn
_ats2cljpre_intrange_patsfun_14__closurerize[xenv0 xenv1]
;;%{
  (list (fn[_fcenvs_ xarg0](_ats2cljpre_intrange_patsfun_14 (ATSCCget_1 _fcenvs_) (ATSCCget_2 _fcenvs_) xarg0)) xenv0 xenv1)
;;%}
) ;; end-of-defn


(defn
_ats2cljpre_intrange_patsfun_18__closurerize[xenv0]
;;%{
  (list (fn[_fcenvs_ xarg0](_ats2cljpre_intrange_patsfun_18 (ATSCCget_1 _fcenvs_) xarg0)) xenv0)
;;%}
) ;; end-of-defn


(defn
_ats2cljpre_intrange_patsfun_25__closurerize[xenv0]
;;%{
  (list (fn[_fcenvs_ xarg0](_ats2cljpre_intrange_patsfun_25 (ATSCCget_1 _fcenvs_) xarg0)) xenv0)
;;%}
) ;; end-of-defn


(defn
_ats2cljpre_intrange_patsfun_29__closurerize[xenv0]
;;%{
  (list (fn[_fcenvs_ xarg0](_ats2cljpre_intrange_patsfun_29 (ATSCCget_1 _fcenvs_) xarg0)) xenv0)
;;%}
) ;; end-of-defn


(defn
_ats2cljpre_intrange_patsfun_33__closurerize[xenv0]
;;%{
  (list (fn[_fcenvs_ xarg0](_ats2cljpre_intrange_patsfun_33 (ATSCCget_1 _fcenvs_) xarg0)) xenv0)
;;%}
) ;; end-of-defn


(defn
_ats2cljpre_intrange_patsfun_37__closurerize[xenv0 xenv1 xenv2]
;;%{
  (list (fn[_fcenvs_ xarg0](_ats2cljpre_intrange_patsfun_37 (ATSCCget_1 _fcenvs_) (ATSCCget_2 _fcenvs_) (ATSCCget_3 _fcenvs_) xarg0)) xenv0 xenv1 xenv2)
;;%}
) ;; end-of-defn


;;fun
(defn
 ats2cljpre_int_repeat_lazy[arg0 arg1]
(
with-local-vars
[
;;knd = 0
  tmp1 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_int_repeat_lazy
  (ATSINStmpset tmp1 (ats2cljpre_lazy2cloref arg1))
  (ATSINSmove1_void (ats2cljpre_int_repeat_cloref arg0 @tmp1))
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_int_repeat_cloref[arg0 arg1]
(
with-local-vars
[
;;knd = 0
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_int_repeat_cloref
  (ATSINSmove1_void (_ats2cljpre_intrange_loop_2 arg0 arg1))
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_intrange_loop_2[arg0 arg1]
(
with-local-vars
[
;;knd = 1
;;apy0 nil
;;apy1 nil
  tmp4 nil
  tmp6 nil
;;var funlab_clj
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;while(true){
   (loop [
     arg0 arg0
     arg1 arg1
    ] ; funlab_clj = 0;
    ;; __patsflab__ats2cljpre_intrange_loop_2
    (ATSINStmpset tmp4 (ats2cljpre_gt_int0_int0 arg0 0))
    (if @tmp4
      (do
       (ATSINSmove1_void ((ATSfunclo_fclo arg1) arg1))
       (ATSINStmpset tmp6 (ats2cljpre_sub_int0_int0 arg0 1))
       ;; apy0 = @tmp6
       ;; apy1 = arg1
       ;; arg0 = apy0
       ;; arg1 = apy1
       ;; funlab_clj = 1; // __patsflab__ats2cljpre_intrange_loop_2
       (recur @tmp6 arg1)
      ) ;; if-then
      (do
       ATSINSmove0_void
      ) ;; if-else
    )
    ;; if (funlab_clj > 0) continue; else ;; return/*_void*/;
  ) ;} // endwhile-fun
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_int_exists_cloref[arg0 arg1]
(
with-local-vars
[
;;knd = 0
  tmpret7 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_int_exists_cloref
  (ats2cljpre_intrange_exists_cloref 0 arg0 arg1)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_int_forall_cloref[arg0 arg1]
(
with-local-vars
[
;;knd = 0
  tmpret8 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_int_forall_cloref
  (ats2cljpre_intrange_forall_cloref 0 arg0 arg1)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_int_foreach_cloref[arg0 arg1]
(
with-local-vars
[
;;knd = 0
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_int_foreach_cloref
  (ATSINSmove1_void (ats2cljpre_intrange_foreach_cloref 0 arg0 arg1))
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_int_exists_method[arg0]
(
with-local-vars
[
;;knd = 0
  tmpret10 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_int_exists_method
  (_ats2cljpre_intrange_patsfun_7__closurerize arg0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_intrange_patsfun_7[env0 arg0]
(
with-local-vars
[
;;knd = 0
  tmpret11 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab__ats2cljpre_intrange_patsfun_7
  (ats2cljpre_int_exists_cloref env0 arg0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_int_forall_method[arg0]
(
with-local-vars
[
;;knd = 0
  tmpret12 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_int_forall_method
  (_ats2cljpre_intrange_patsfun_9__closurerize arg0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_intrange_patsfun_9[env0 arg0]
(
with-local-vars
[
;;knd = 0
  tmpret13 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab__ats2cljpre_intrange_patsfun_9
  (ats2cljpre_int_forall_cloref env0 arg0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_int_foreach_method[arg0]
(
with-local-vars
[
;;knd = 0
  tmpret14 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_int_foreach_method
  (_ats2cljpre_intrange_patsfun_11__closurerize arg0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_intrange_patsfun_11[env0 arg0]
(
with-local-vars
[
;;knd = 0
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab__ats2cljpre_intrange_patsfun_11
  (ATSINSmove1_void (ats2cljpre_int_foreach_cloref env0 arg0))
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_int_foldleft_cloref[arg0 arg1 arg2]
(
with-local-vars
[
;;knd = 0
  tmpret16 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_int_foldleft_cloref
  (ats2cljpre_intrange_foldleft_cloref 0 arg0 arg1 arg2)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_int_foldleft_method[arg0 arg1]
(
with-local-vars
[
;;knd = 0
  tmpret17 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_int_foldleft_method
  (_ats2cljpre_intrange_patsfun_14__closurerize arg0 arg1)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_intrange_patsfun_14[env0 env1 arg0]
(
with-local-vars
[
;;knd = 0
  tmpret18 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab__ats2cljpre_intrange_patsfun_14
  (ats2cljpre_int_foldleft_cloref env0 env1 arg0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_int_list_map_cloref[arg0 arg1]
(
with-local-vars
[
;;knd = 0
  tmpret19 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_int_list_map_cloref
  (_ats2cljpre_intrange_aux_16 arg0 arg1 0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_intrange_aux_16[env0 env1 arg0]
(
with-local-vars
[
;;knd = 0
  tmpret20 nil
  tmp21 nil
  tmp22 nil
  tmp23 nil
  tmp24 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab__ats2cljpre_intrange_aux_16
  (ATSINStmpset tmp21 (ats2cljpre_lt_int1_int1 arg0 env0))
  (if @tmp21
    (do
     (ATSINStmpset tmp22 ((ATSfunclo_fclo env1) env1 arg0))
     (ATSINStmpset tmp24 (ats2cljpre_add_int1_int1 arg0 1))
     (ATSINStmpset tmp23 (_ats2cljpre_intrange_aux_16 env0 env1 @tmp24))
     (ATSPMVtysum @tmp22 @tmp23)
    ) ;; if-then
    (do
     atscc2clj_null
    ) ;; if-else
  )
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_int_list_map_method[arg0 arg1]
(
with-local-vars
[
;;knd = 0
  tmpret25 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_int_list_map_method
  (_ats2cljpre_intrange_patsfun_18__closurerize arg0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_intrange_patsfun_18[env0 arg0]
(
with-local-vars
[
;;knd = 0
  tmpret26 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab__ats2cljpre_intrange_patsfun_18
  (ats2cljpre_int_list_map_cloref env0 arg0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_int2_exists_cloref[arg0 arg1 arg2]
(
with-local-vars
[
;;knd = 0
  tmpret27 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_int2_exists_cloref
  (ats2cljpre_intrange2_exists_cloref 0 arg0 0 arg1 arg2)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_int2_forall_cloref[arg0 arg1 arg2]
(
with-local-vars
[
;;knd = 0
  tmpret28 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_int2_forall_cloref
  (ats2cljpre_intrange2_forall_cloref 0 arg0 0 arg1 arg2)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_int2_foreach_cloref[arg0 arg1 arg2]
(
with-local-vars
[
;;knd = 0
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_int2_foreach_cloref
  (ATSINSmove1_void (ats2cljpre_intrange2_foreach_cloref 0 arg0 0 arg1 arg2))
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_intrange_exists_cloref[arg0 arg1 arg2]
(
with-local-vars
[
;;knd = 0
  tmpret30 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_intrange_exists_cloref
  (_ats2cljpre_intrange_loop_23 arg0 arg1 arg2)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_intrange_loop_23[arg0 arg1 arg2]
(
with-local-vars
[
;;knd = 1
;;apy0 nil
;;apy1 nil
;;apy2 nil
  tmpret31 nil
  tmp32 nil
  tmp33 nil
  tmp34 nil
;;var funlab_clj
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;while(true){
   (loop [
     arg0 arg0
     arg1 arg1
     arg2 arg2
    ] ; funlab_clj = 0;
    ;; __patsflab__ats2cljpre_intrange_loop_23
    (ATSINStmpset tmp32 (ats2cljpre_lt_int0_int0 arg0 arg1))
    (if @tmp32
      (do
       (ATSINStmpset tmp33 ((ATSfunclo_fclo arg2) arg2 arg0))
       (if @tmp33
         (do
          atscc2clj_true
         ) ;; if-then
         (do
          (ATSINStmpset tmp34 (ats2cljpre_add_int0_int0 arg0 1))
          ;; apy0 = @tmp34
          ;; apy1 = arg1
          ;; apy2 = arg2
          ;; arg0 = apy0
          ;; arg1 = apy1
          ;; arg2 = apy2
          ;; funlab_clj = 1; // __patsflab__ats2cljpre_intrange_loop_23
          (recur @tmp34 arg1 arg2)
         ) ;; if-else
       )
      ) ;; if-then
      (do
       atscc2clj_false
      ) ;; if-else
    )
    ;; if (funlab_clj > 0) continue; else ;; return tmpret31;
  ) ;} // endwhile-fun
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_intrange_exists_method[arg0]
(
with-local-vars
[
;;knd = 0
  tmpret35 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_intrange_exists_method
  (_ats2cljpre_intrange_patsfun_25__closurerize arg0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_intrange_patsfun_25[env0 arg0]
(
with-local-vars
[
;;knd = 0
  tmpret36 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab__ats2cljpre_intrange_patsfun_25
  (ats2cljpre_intrange_exists_cloref (ATSSELboxrec env0 0) (ATSSELboxrec env0 1) arg0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_intrange_forall_cloref[arg0 arg1 arg2]
(
with-local-vars
[
;;knd = 0
  tmpret37 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_intrange_forall_cloref
  (_ats2cljpre_intrange_loop_27 arg0 arg1 arg2)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_intrange_loop_27[arg0 arg1 arg2]
(
with-local-vars
[
;;knd = 1
;;apy0 nil
;;apy1 nil
;;apy2 nil
  tmpret38 nil
  tmp39 nil
  tmp40 nil
  tmp41 nil
;;var funlab_clj
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;while(true){
   (loop [
     arg0 arg0
     arg1 arg1
     arg2 arg2
    ] ; funlab_clj = 0;
    ;; __patsflab__ats2cljpre_intrange_loop_27
    (ATSINStmpset tmp39 (ats2cljpre_lt_int0_int0 arg0 arg1))
    (if @tmp39
      (do
       (ATSINStmpset tmp40 ((ATSfunclo_fclo arg2) arg2 arg0))
       (if @tmp40
         (do
          (ATSINStmpset tmp41 (ats2cljpre_add_int0_int0 arg0 1))
          ;; apy0 = @tmp41
          ;; apy1 = arg1
          ;; apy2 = arg2
          ;; arg0 = apy0
          ;; arg1 = apy1
          ;; arg2 = apy2
          ;; funlab_clj = 1; // __patsflab__ats2cljpre_intrange_loop_27
          (recur @tmp41 arg1 arg2)
         ) ;; if-then
         (do
          atscc2clj_false
         ) ;; if-else
       )
      ) ;; if-then
      (do
       atscc2clj_true
      ) ;; if-else
    )
    ;; if (funlab_clj > 0) continue; else ;; return tmpret38;
  ) ;} // endwhile-fun
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_intrange_forall_method[arg0]
(
with-local-vars
[
;;knd = 0
  tmpret42 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_intrange_forall_method
  (_ats2cljpre_intrange_patsfun_29__closurerize arg0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_intrange_patsfun_29[env0 arg0]
(
with-local-vars
[
;;knd = 0
  tmpret43 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab__ats2cljpre_intrange_patsfun_29
  (ats2cljpre_intrange_forall_cloref (ATSSELboxrec env0 0) (ATSSELboxrec env0 1) arg0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_intrange_foreach_cloref[arg0 arg1 arg2]
(
with-local-vars
[
;;knd = 0
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_intrange_foreach_cloref
  (ATSINSmove1_void (_ats2cljpre_intrange_loop_31 arg0 arg1 arg2))
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_intrange_loop_31[arg0 arg1 arg2]
(
with-local-vars
[
;;knd = 1
;;apy0 nil
;;apy1 nil
;;apy2 nil
  tmp46 nil
  tmp48 nil
;;var funlab_clj
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;while(true){
   (loop [
     arg0 arg0
     arg1 arg1
     arg2 arg2
    ] ; funlab_clj = 0;
    ;; __patsflab__ats2cljpre_intrange_loop_31
    (ATSINStmpset tmp46 (ats2cljpre_lt_int0_int0 arg0 arg1))
    (if @tmp46
      (do
       (ATSINSmove1_void ((ATSfunclo_fclo arg2) arg2 arg0))
       (ATSINStmpset tmp48 (ats2cljpre_add_int0_int0 arg0 1))
       ;; apy0 = @tmp48
       ;; apy1 = arg1
       ;; apy2 = arg2
       ;; arg0 = apy0
       ;; arg1 = apy1
       ;; arg2 = apy2
       ;; funlab_clj = 1; // __patsflab__ats2cljpre_intrange_loop_31
       (recur @tmp48 arg1 arg2)
      ) ;; if-then
      (do
       ATSINSmove0_void
      ) ;; if-else
    )
    ;; if (funlab_clj > 0) continue; else ;; return/*_void*/;
  ) ;} // endwhile-fun
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_intrange_foreach_method[arg0]
(
with-local-vars
[
;;knd = 0
  tmpret49 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_intrange_foreach_method
  (_ats2cljpre_intrange_patsfun_33__closurerize arg0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_intrange_patsfun_33[env0 arg0]
(
with-local-vars
[
;;knd = 0
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab__ats2cljpre_intrange_patsfun_33
  (ATSINSmove1_void (ats2cljpre_intrange_foreach_cloref (ATSSELboxrec env0 0) (ATSSELboxrec env0 1) arg0))
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_intrange_foldleft_cloref[arg0 arg1 arg2 arg3]
(
with-local-vars
[
;;knd = 0
  tmpret51 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_intrange_foldleft_cloref
  (_ats2cljpre_intrange_loop_35 arg3 arg0 arg1 arg2 arg3)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_intrange_loop_35[env0 arg0 arg1 arg2 arg3]
(
with-local-vars
[
;;knd = 1
;;apy0 nil
;;apy1 nil
;;apy2 nil
;;apy3 nil
  tmpret52 nil
  tmp53 nil
  tmp54 nil
  tmp55 nil
;;var funlab_clj
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;while(true){
   (loop [
     env0 env0
     arg0 arg0
     arg1 arg1
     arg2 arg2
     arg3 arg3
    ] ; funlab_clj = 0;
    ;; __patsflab__ats2cljpre_intrange_loop_35
    (ATSINStmpset tmp53 (ats2cljpre_lt_int0_int0 arg0 arg1))
    (if @tmp53
      (do
       (ATSINStmpset tmp54 (ats2cljpre_add_int0_int0 arg0 1))
       (ATSINStmpset tmp55 ((ATSfunclo_fclo arg3) arg3 arg2 arg0))
       ;; apy0 = @tmp54
       ;; apy1 = arg1
       ;; apy2 = @tmp55
       ;; apy3 = env0
       ;; arg0 = apy0
       ;; arg1 = apy1
       ;; arg2 = apy2
       ;; arg3 = apy3
       ;; funlab_clj = 1; // __patsflab__ats2cljpre_intrange_loop_35
       (recur env0 @tmp54 arg1 @tmp55 env0)
      ) ;; if-then
      (do
       arg2
      ) ;; if-else
    )
    ;; if (funlab_clj > 0) continue; else ;; return tmpret52;
  ) ;} // endwhile-fun
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_intrange_foldleft_method[arg0 arg1]
(
with-local-vars
[
;;knd = 0
  tmp56 nil
  tmp57 nil
  tmpret58 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_intrange_foldleft_method
  (ATSINStmpset tmp56 (ATSSELboxrec arg0 0))
  (ATSINStmpset tmp57 (ATSSELboxrec arg0 1))
  (_ats2cljpre_intrange_patsfun_37__closurerize @tmp56 @tmp57 arg1)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_intrange_patsfun_37[env0 env1 env2 arg0]
(
with-local-vars
[
;;knd = 0
  tmpret59 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab__ats2cljpre_intrange_patsfun_37
  (ats2cljpre_intrange_foldleft_cloref env0 env1 env2 arg0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_intrange2_exists_cloref[arg0 arg1 arg2 arg3 arg4]
(
with-local-vars
[
;;knd = 0
  tmpret60 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_intrange2_exists_cloref
  (_ats2cljpre_intrange_loop1_39 arg2 arg3 arg4 arg0 arg1 arg2 arg3 arg4)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_intrange_loop1_39[env0 env1 env2 arg0 arg1 arg2 arg3 arg4]
(declare
 _ats2cljpre_intrange_loop1_39__
)
(_ats2cljpre_intrange_loop1_39__ 1 env0 env1 env2 arg0 arg1 arg2 arg3 arg4)
) ;; end-of-fun
(defn
_ats2cljpre_intrange_loop1_39__[funlab env0 env1 env2 arg0 arg1 arg2 arg3 arg4]
(
with-local-vars
[
;;knd = 2
;;apy0 nil
;;apy1 nil
;;apy2 nil
;;apy3 nil
;;apy4 nil
  tmpret61 nil
  tmp62 nil
;;a2rg0 nil
;;a2rg1 nil
;;a2rg2 nil
;;a2rg3 nil
;;a2rg4 nil
;;a2py0 nil
;;a2py1 nil
;;a2py2 nil
;;a2py3 nil
;;a2py4 nil
  tmpret63 nil
  tmp64 nil
  tmp65 nil
  tmp66 nil
  tmp67 nil
;;var funlab_clj
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; funlab_clj = 1;
  ;while(true){
   (loop [
     funlab
     funlab
     env0 env0
     env1 env1
     env2 env2
     arg0 arg0
     arg1 arg1
     arg2 arg2
     arg3 arg3
     arg4 arg4
    ] ;switch(funlab_clj) {
    (case funlab
      ;case 1: {
      1 (do
        ;; funlab_clj = 0;
        (ATSINStmpset tmp62 (ats2cljpre_lt_int0_int0 arg0 arg1))
        (if @tmp62
          (do
           ;; a2py0 = arg0
           ;; a2py1 = arg1
           ;; a2py2 = arg2
           ;; a2py3 = arg3
           ;; a2py4 = env2
           ;; a2rg0 = a2py0
           ;; a2rg1 = a2py1
           ;; a2rg2 = a2py2
           ;; a2rg3 = a2py3
           ;; a2rg4 = a2py4
           ;; funlab_clj = 2; // __patsflab__ats2cljpre_intrange_loop2_40
           (recur 2 env0 env1 env2 arg0 arg1 arg2 arg3 env2)
          ) ;; if-then
          (do
           atscc2clj_false
          ) ;; if-else
        );
        ;; if (funlab_clj > 0) continue; else ;; return tmpret61;
      ) ;} // end-of-case
      ;case 2: {
      2 (do
        ;; funlab_clj = 0;
        (ATSINStmpset tmp64 (ats2cljpre_lt_int0_int0 arg2 arg3))
        (if @tmp64
          (do
           (ATSINStmpset tmp65 ((ATSfunclo_fclo arg4) arg4 arg0 arg2))
           (if @tmp65
             (do
              atscc2clj_true
             ) ;; if-then
             (do
              (ATSINStmpset tmp66 (ats2cljpre_add_int0_int0 arg2 1))
              ;; a2py0 = arg0
              ;; a2py1 = arg1
              ;; a2py2 = @tmp66
              ;; a2py3 = arg3
              ;; a2py4 = arg4
              ;; a2rg0 = a2py0
              ;; a2rg1 = a2py1
              ;; a2rg2 = a2py2
              ;; a2rg3 = a2py3
              ;; a2rg4 = a2py4
              ;; funlab_clj = 2; // __patsflab__ats2cljpre_intrange_loop2_40
              (recur 2 env0 env1 env2 arg0 arg1 @tmp66 arg3 arg4)
             ) ;; if-else
           )
          ) ;; if-then
          (do
           (ATSINStmpset tmp67 (ats2cljpre_add_int0_int0 arg0 1))
           ;; apy0 = @tmp67
           ;; apy1 = arg1
           ;; apy2 = env0
           ;; apy3 = env1
           ;; apy4 = arg4
           ;; arg0 = apy0
           ;; arg1 = apy1
           ;; arg2 = apy2
           ;; arg3 = apy3
           ;; arg4 = apy4
           ;; funlab_clj = 1; // __patsflab__ats2cljpre_intrange_loop1_39
           (recur 1 env0 env1 env2 @tmp67 arg1 env0 env1 arg4)
          ) ;; if-else
        );
        ;; if (funlab_clj > 0) continue; else ;; return tmpret63;
      ) ;} // end-of-case
    ) ;} // end-of-switch
  ) ;} // endwhile-fun
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_intrange2_forall_cloref[arg0 arg1 arg2 arg3 arg4]
(
with-local-vars
[
;;knd = 0
  tmpret68 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_intrange2_forall_cloref
  (_ats2cljpre_intrange_loop1_42 arg2 arg3 arg0 arg1 arg2 arg3 arg4)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_intrange_loop1_42[env0 env1 arg0 arg1 arg2 arg3 arg4]
(declare
 _ats2cljpre_intrange_loop1_42__
)
(_ats2cljpre_intrange_loop1_42__ 1 env0 env1 arg0 arg1 arg2 arg3 arg4)
) ;; end-of-fun
(defn
_ats2cljpre_intrange_loop1_42__[funlab env0 env1 arg0 arg1 arg2 arg3 arg4]
(
with-local-vars
[
;;knd = 2
;;apy0 nil
;;apy1 nil
;;apy2 nil
;;apy3 nil
;;apy4 nil
  tmpret69 nil
  tmp70 nil
;;a2rg0 nil
;;a2rg1 nil
;;a2rg2 nil
;;a2rg3 nil
;;a2rg4 nil
;;a2py0 nil
;;a2py1 nil
;;a2py2 nil
;;a2py3 nil
;;a2py4 nil
  tmpret71 nil
  tmp72 nil
  tmp73 nil
  tmp74 nil
  tmp75 nil
;;var funlab_clj
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; funlab_clj = 1;
  ;while(true){
   (loop [
     funlab
     funlab
     env0 env0
     env1 env1
     arg0 arg0
     arg1 arg1
     arg2 arg2
     arg3 arg3
     arg4 arg4
    ] ;switch(funlab_clj) {
    (case funlab
      ;case 1: {
      1 (do
        ;; funlab_clj = 0;
        (ATSINStmpset tmp70 (ats2cljpre_lt_int0_int0 arg0 arg1))
        (if @tmp70
          (do
           ;; a2py0 = arg0
           ;; a2py1 = arg1
           ;; a2py2 = arg2
           ;; a2py3 = arg3
           ;; a2py4 = arg4
           ;; a2rg0 = a2py0
           ;; a2rg1 = a2py1
           ;; a2rg2 = a2py2
           ;; a2rg3 = a2py3
           ;; a2rg4 = a2py4
           ;; funlab_clj = 2; // __patsflab__ats2cljpre_intrange_loop2_43
           (recur 2 env0 env1 arg0 arg1 arg2 arg3 arg4)
          ) ;; if-then
          (do
           atscc2clj_true
          ) ;; if-else
        );
        ;; if (funlab_clj > 0) continue; else ;; return tmpret69;
      ) ;} // end-of-case
      ;case 2: {
      2 (do
        ;; funlab_clj = 0;
        (ATSINStmpset tmp72 (ats2cljpre_lt_int0_int0 arg2 arg3))
        (if @tmp72
          (do
           (ATSINStmpset tmp73 ((ATSfunclo_fclo arg4) arg4 arg0 arg2))
           (if @tmp73
             (do
              (ATSINStmpset tmp74 (ats2cljpre_add_int0_int0 arg2 1))
              ;; a2py0 = arg0
              ;; a2py1 = arg1
              ;; a2py2 = @tmp74
              ;; a2py3 = arg3
              ;; a2py4 = arg4
              ;; a2rg0 = a2py0
              ;; a2rg1 = a2py1
              ;; a2rg2 = a2py2
              ;; a2rg3 = a2py3
              ;; a2rg4 = a2py4
              ;; funlab_clj = 2; // __patsflab__ats2cljpre_intrange_loop2_43
              (recur 2 env0 env1 arg0 arg1 @tmp74 arg3 arg4)
             ) ;; if-then
             (do
              atscc2clj_false
             ) ;; if-else
           )
          ) ;; if-then
          (do
           (ATSINStmpset tmp75 (ats2cljpre_add_int0_int0 arg0 1))
           ;; apy0 = @tmp75
           ;; apy1 = arg1
           ;; apy2 = env0
           ;; apy3 = env1
           ;; apy4 = arg4
           ;; arg0 = apy0
           ;; arg1 = apy1
           ;; arg2 = apy2
           ;; arg3 = apy3
           ;; arg4 = apy4
           ;; funlab_clj = 1; // __patsflab__ats2cljpre_intrange_loop1_42
           (recur 1 env0 env1 @tmp75 arg1 env0 env1 arg4)
          ) ;; if-else
        );
        ;; if (funlab_clj > 0) continue; else ;; return tmpret71;
      ) ;} // end-of-case
    ) ;} // end-of-switch
  ) ;} // endwhile-fun
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_intrange2_foreach_cloref[arg0 arg1 arg2 arg3 arg4]
(
with-local-vars
[
;;knd = 0
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_intrange2_foreach_cloref
  (ATSINSmove1_void (_ats2cljpre_intrange_loop1_45 arg2 arg3 arg0 arg1 arg2 arg3 arg4))
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_intrange_loop1_45[env0 env1 arg0 arg1 arg2 arg3 arg4]
(declare
 _ats2cljpre_intrange_loop1_45__
)
(_ats2cljpre_intrange_loop1_45__ 1 env0 env1 arg0 arg1 arg2 arg3 arg4)
) ;; end-of-fun
(defn
_ats2cljpre_intrange_loop1_45__[funlab env0 env1 arg0 arg1 arg2 arg3 arg4]
(
with-local-vars
[
;;knd = 2
;;apy0 nil
;;apy1 nil
;;apy2 nil
;;apy3 nil
;;apy4 nil
  tmp78 nil
;;a2rg0 nil
;;a2rg1 nil
;;a2rg2 nil
;;a2rg3 nil
;;a2rg4 nil
;;a2py0 nil
;;a2py1 nil
;;a2py2 nil
;;a2py3 nil
;;a2py4 nil
  tmp80 nil
  tmp82 nil
  tmp83 nil
;;var funlab_clj
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; funlab_clj = 1;
  ;while(true){
   (loop [
     funlab
     funlab
     env0 env0
     env1 env1
     arg0 arg0
     arg1 arg1
     arg2 arg2
     arg3 arg3
     arg4 arg4
    ] ;switch(funlab_clj) {
    (case funlab
      ;case 1: {
      1 (do
        ;; funlab_clj = 0;
        (ATSINStmpset tmp78 (ats2cljpre_lt_int0_int0 arg0 arg1))
        (if @tmp78
          (do
           ;; a2py0 = arg0
           ;; a2py1 = arg1
           ;; a2py2 = arg2
           ;; a2py3 = arg3
           ;; a2py4 = arg4
           ;; a2rg0 = a2py0
           ;; a2rg1 = a2py1
           ;; a2rg2 = a2py2
           ;; a2rg3 = a2py3
           ;; a2rg4 = a2py4
           ;; funlab_clj = 2; // __patsflab__ats2cljpre_intrange_loop2_46
           (recur 2 env0 env1 arg0 arg1 arg2 arg3 arg4)
          ) ;; if-then
          (do
           ATSINSmove0_void
          ) ;; if-else
        );
        ;; if (funlab_clj > 0) continue; else ;; return/*_void*/;
      ) ;} // end-of-case
      ;case 2: {
      2 (do
        ;; funlab_clj = 0;
        (ATSINStmpset tmp80 (ats2cljpre_lt_int0_int0 arg2 arg3))
        (if @tmp80
          (do
           (ATSINSmove1_void ((ATSfunclo_fclo arg4) arg4 arg0 arg2))
           (ATSINStmpset tmp82 (ats2cljpre_add_int0_int0 arg2 1))
           ;; a2py0 = arg0
           ;; a2py1 = arg1
           ;; a2py2 = @tmp82
           ;; a2py3 = arg3
           ;; a2py4 = arg4
           ;; a2rg0 = a2py0
           ;; a2rg1 = a2py1
           ;; a2rg2 = a2py2
           ;; a2rg3 = a2py3
           ;; a2rg4 = a2py4
           ;; funlab_clj = 2; // __patsflab__ats2cljpre_intrange_loop2_46
           (recur 2 env0 env1 arg0 arg1 @tmp82 arg3 arg4)
          ) ;; if-then
          (do
           (ATSINStmpset tmp83 (ats2cljpre_succ_int0 arg0))
           ;; apy0 = @tmp83
           ;; apy1 = arg1
           ;; apy2 = env0
           ;; apy3 = env1
           ;; apy4 = arg4
           ;; arg0 = apy0
           ;; arg1 = apy1
           ;; arg2 = apy2
           ;; arg3 = apy3
           ;; arg4 = apy4
           ;; funlab_clj = 1; // __patsflab__ats2cljpre_intrange_loop1_45
           (recur 1 env0 env1 @tmp83 arg1 env0 env1 arg4)
          ) ;; if-else
        );
        ;; if (funlab_clj > 0) continue; else ;; return/*_void*/;
      ) ;} // end-of-case
    ) ;} // end-of-switch
  ) ;} // endwhile-fun
) ;; end-of-with-local-vars
) ;; end-of-fun

;;;;;;
;;
;; end-of-compilation-unit
;;
;;;;;;
;;;;;;
;;
;; The Clojure code is generated by atscc2clj
;; The starting compilation time is: 2016-9-26: 11h: 8m
;;
;;;;;;
(declare _ats2cljpre_ML_list0_loop_6)
(declare _ats2cljpre_ML_list0_patsfun_22)
(declare _ats2cljpre_ML_list0_patsfun_25)
(declare _ats2cljpre_ML_list0_patsfun_28)
(declare _ats2cljpre_ML_list0_patsfun_31)
(declare _ats2cljpre_ML_list0_patsfun_35)
(declare _ats2cljpre_ML_list0_patsfun_38)
(declare _ats2cljpre_ML_list0_patsfun_41)
(declare _ats2cljpre_ML_list0_patsfun_44)
(declare _ats2cljpre_ML_list0_patsfun_47)
(declare _ats2cljpre_ML_list0_aux_49)
(declare _ats2cljpre_ML_list0_aux_51)
(declare ats2cljpre_ML_list0_head_opt)
(declare ats2cljpre_ML_list0_tail_opt)
(declare ats2cljpre_ML_list0_length)
(declare ats2cljpre_ML_list0_last_opt)
(declare _ats2cljpre_ML_list0_loop_6)
(declare ats2cljpre_ML_list0_get_at_opt)
(declare ats2cljpre_ML_list0_make_intrange_2)
(declare ats2cljpre_ML_list0_make_intrange_3)
(declare ats2cljpre_ML_list0_snoc)
(declare ats2cljpre_ML_list0_extend)
(declare ats2cljpre_ML_list0_append)
(declare ats2cljpre_ML_list0_reverse)
(declare ats2cljpre_ML_list0_reverse_append)
(declare ats2cljpre_ML_list0_exists)
(declare ats2cljpre_ML_list0_exists_method)
(declare _ats2cljpre_ML_list0_patsfun_22)
(declare ats2cljpre_ML_list0_iexists)
(declare ats2cljpre_ML_list0_iexists_method)
(declare _ats2cljpre_ML_list0_patsfun_25)
(declare ats2cljpre_ML_list0_forall)
(declare ats2cljpre_ML_list0_forall_method)
(declare _ats2cljpre_ML_list0_patsfun_28)
(declare ats2cljpre_ML_list0_iforall)
(declare ats2cljpre_ML_list0_iforall_method)
(declare _ats2cljpre_ML_list0_patsfun_31)
(declare ats2cljpre_ML_list0_app)
(declare ats2cljpre_ML_list0_foreach)
(declare ats2cljpre_ML_list0_foreach_method)
(declare _ats2cljpre_ML_list0_patsfun_35)
(declare ats2cljpre_ML_list0_iforeach)
(declare ats2cljpre_ML_list0_iforeach_method)
(declare _ats2cljpre_ML_list0_patsfun_38)
(declare ats2cljpre_ML_list0_rforeach)
(declare ats2cljpre_ML_list0_rforeach_method)
(declare _ats2cljpre_ML_list0_patsfun_41)
(declare ats2cljpre_ML_list0_filter)
(declare ats2cljpre_ML_list0_filter_method)
(declare _ats2cljpre_ML_list0_patsfun_44)
(declare ats2cljpre_ML_list0_map)
(declare ats2cljpre_ML_list0_map_method)
(declare _ats2cljpre_ML_list0_patsfun_47)
(declare ats2cljpre_ML_list0_foldleft)
(declare _ats2cljpre_ML_list0_aux_49)
(declare ats2cljpre_ML_list0_foldright)
(declare _ats2cljpre_ML_list0_aux_51)
(declare ats2cljpre_ML_list0_sort_2)
;;;;;;


(defn
_ats2cljpre_ML_list0_patsfun_22__closurerize[xenv0]
;;%{
  (list (fn[_fcenvs_ xarg0](_ats2cljpre_ML_list0_patsfun_22 (ATSCCget_1 _fcenvs_) xarg0)) xenv0)
;;%}
) ;; end-of-defn


(defn
_ats2cljpre_ML_list0_patsfun_25__closurerize[xenv0]
;;%{
  (list (fn[_fcenvs_ xarg0](_ats2cljpre_ML_list0_patsfun_25 (ATSCCget_1 _fcenvs_) xarg0)) xenv0)
;;%}
) ;; end-of-defn


(defn
_ats2cljpre_ML_list0_patsfun_28__closurerize[xenv0]
;;%{
  (list (fn[_fcenvs_ xarg0](_ats2cljpre_ML_list0_patsfun_28 (ATSCCget_1 _fcenvs_) xarg0)) xenv0)
;;%}
) ;; end-of-defn


(defn
_ats2cljpre_ML_list0_patsfun_31__closurerize[xenv0]
;;%{
  (list (fn[_fcenvs_ xarg0](_ats2cljpre_ML_list0_patsfun_31 (ATSCCget_1 _fcenvs_) xarg0)) xenv0)
;;%}
) ;; end-of-defn


(defn
_ats2cljpre_ML_list0_patsfun_35__closurerize[xenv0]
;;%{
  (list (fn[_fcenvs_ xarg0](_ats2cljpre_ML_list0_patsfun_35 (ATSCCget_1 _fcenvs_) xarg0)) xenv0)
;;%}
) ;; end-of-defn


(defn
_ats2cljpre_ML_list0_patsfun_38__closurerize[xenv0]
;;%{
  (list (fn[_fcenvs_ xarg0](_ats2cljpre_ML_list0_patsfun_38 (ATSCCget_1 _fcenvs_) xarg0)) xenv0)
;;%}
) ;; end-of-defn


(defn
_ats2cljpre_ML_list0_patsfun_41__closurerize[xenv0]
;;%{
  (list (fn[_fcenvs_ xarg0](_ats2cljpre_ML_list0_patsfun_41 (ATSCCget_1 _fcenvs_) xarg0)) xenv0)
;;%}
) ;; end-of-defn


(defn
_ats2cljpre_ML_list0_patsfun_44__closurerize[xenv0]
;;%{
  (list (fn[_fcenvs_ xarg0](_ats2cljpre_ML_list0_patsfun_44 (ATSCCget_1 _fcenvs_) xarg0)) xenv0)
;;%}
) ;; end-of-defn


(defn
_ats2cljpre_ML_list0_patsfun_47__closurerize[xenv0]
;;%{
  (list (fn[_fcenvs_ xarg0](_ats2cljpre_ML_list0_patsfun_47 (ATSCCget_1 _fcenvs_) xarg0)) xenv0)
;;%}
) ;; end-of-defn


;;fun
(defn
 ats2cljpre_ML_list0_head_opt[arg0]
(
with-local-vars
[
;;knd = 0
  tmpret2 nil
  tmp3 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list0_head_opt
  (let[
    casefnx
    (fn casefnx[tmplab](case tmplab
      ;; ATSbranchseq_beg
      1 (do
       (if (ATSCKptriscons arg0)
         (casefnx 4)
         (do
          (casefnx 2)
         )
       )
      ) ;; end-of-branch
      2 (do
       atscc2clj_null
      ) ;; end-of-branch
      ;; ATSbranchseq_end
      ;; ATSbranchseq_beg
      3 (do
       (casefnx 4)
      ) ;; end-of-branch
      4 (do
       (ATSINStmpset tmp3 (ATSSELcon arg0 0))
       (ATSPMVtysum @tmp3)
      ) ;; end-of-branch
      ;; ATSbranchseq_end
      ;; (else (atscc2clj_caseof_deadcode _FILE_ _LINE_))
     ) ;; end-of-case
    ) ;; end-of-casefnx
   ] (casefnx 1)
  ) ;; end-of-let(casefnx)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_ML_list0_tail_opt[arg0]
(
with-local-vars
[
;;knd = 0
  tmpret5 nil
  tmp7 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list0_tail_opt
  (let[
    casefnx
    (fn casefnx[tmplab](case tmplab
      ;; ATSbranchseq_beg
      1 (do
       (if (ATSCKptriscons arg0)
         (casefnx 4)
         (do
          (casefnx 2)
         )
       )
      ) ;; end-of-branch
      2 (do
       atscc2clj_null
      ) ;; end-of-branch
      ;; ATSbranchseq_end
      ;; ATSbranchseq_beg
      3 (do
       (casefnx 4)
      ) ;; end-of-branch
      4 (do
       (ATSINStmpset tmp7 (ATSSELcon arg0 1))
       (ATSPMVtysum @tmp7)
      ) ;; end-of-branch
      ;; ATSbranchseq_end
      ;; (else (atscc2clj_caseof_deadcode _FILE_ _LINE_))
     ) ;; end-of-case
    ) ;; end-of-casefnx
   ] (casefnx 1)
  ) ;; end-of-let(casefnx)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_ML_list0_length[arg0]
(
with-local-vars
[
;;knd = 0
  tmpret8 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list0_length
  (ats2cljpre_list_length arg0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_ML_list0_last_opt[arg0]
(
with-local-vars
[
;;knd = 0
  tmpret9 nil
  tmp13 nil
  tmp14 nil
  tmp15 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list0_last_opt
  (let[
    casefnx
    (fn casefnx[tmplab](case tmplab
      ;; ATSbranchseq_beg
      1 (do
       (if (ATSCKptriscons arg0)
         (casefnx 4)
         (do
          (casefnx 2)
         )
       )
      ) ;; end-of-branch
      2 (do
       atscc2clj_null
      ) ;; end-of-branch
      ;; ATSbranchseq_end
      ;; ATSbranchseq_beg
      3 (do
       (casefnx 4)
      ) ;; end-of-branch
      4 (do
       (ATSINStmpset tmp13 (ATSSELcon arg0 0))
       (ATSINStmpset tmp14 (ATSSELcon arg0 1))
       (ATSINStmpset tmp15 (_ats2cljpre_ML_list0_loop_6 @tmp13 @tmp14))
       (ATSPMVtysum @tmp15)
      ) ;; end-of-branch
      ;; ATSbranchseq_end
      ;; (else (atscc2clj_caseof_deadcode _FILE_ _LINE_))
     ) ;; end-of-case
    ) ;; end-of-casefnx
   ] (casefnx 1)
  ) ;; end-of-let(casefnx)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_ML_list0_loop_6[arg0 arg1]
(
with-local-vars
[
;;knd = 1
;;apy0 nil
;;apy1 nil
  tmpret10 nil
  tmp11 nil
  tmp12 nil
;;var funlab_clj
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;while(true){
   (loop [
     arg0 arg0
     arg1 arg1
    ] ; funlab_clj = 0;
    ;; __patsflab__ats2cljpre_ML_list0_loop_6
    (let[
      casefnx
      (fn casefnx[tmplab](case tmplab
        ;; ATSbranchseq_beg
        1 (do
         (if (ATSCKptriscons arg1)
           (casefnx 4)
           (do
            (casefnx 2)
           )
         )
        ) ;; end-of-branch
        2 (do
         arg0
        ) ;; end-of-branch
        ;; ATSbranchseq_end
        ;; ATSbranchseq_beg
        3 (do
         (casefnx 4)
        ) ;; end-of-branch
        4 (do
         (ATSINStmpset tmp11 (ATSSELcon arg1 0))
         (ATSINStmpset tmp12 (ATSSELcon arg1 1))
         ;; apy0 = @tmp11
         ;; apy1 = @tmp12
         ;; arg0 = apy0
         ;; arg1 = apy1
         ;; funlab_clj = 1; // __patsflab__ats2cljpre_ML_list0_loop_6
         (_ats2cljpre_ML_list0_loop_6 @tmp11 @tmp12)
        ) ;; end-of-branch
        ;; ATSbranchseq_end
        ;; (else (atscc2clj_caseof_deadcode _FILE_ _LINE_))
       ) ;; end-of-case
      ) ;; end-of-casefnx
     ] (casefnx 1)
    ) ;; end-of-let(casefnx)
    ;; if (funlab_clj > 0) continue; else ;; return tmpret10;
  ) ;} // endwhile-fun
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_ML_list0_get_at_opt[arg0 arg1]
(
with-local-vars
[
;;knd = 1
;;apy0 nil
;;apy1 nil
  tmpret16 nil
  tmp17 nil
  tmp18 nil
  tmp19 nil
  tmp20 nil
;;var funlab_clj
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;while(true){
   (loop [
     arg0 arg0
     arg1 arg1
    ] ; funlab_clj = 0;
    ;; __patsflab_list0_get_at_opt
    (let[
      casefnx
      (fn casefnx[tmplab](case tmplab
        ;; ATSbranchseq_beg
        1 (do
         (if (ATSCKptriscons arg0)
           (casefnx 4)
           (do
            (casefnx 2)
           )
         )
        ) ;; end-of-branch
        2 (do
         atscc2clj_null
        ) ;; end-of-branch
        ;; ATSbranchseq_end
        ;; ATSbranchseq_beg
        3 (do
         (casefnx 4)
        ) ;; end-of-branch
        4 (do
         (ATSINStmpset tmp17 (ATSSELcon arg0 0))
         (ATSINStmpset tmp18 (ATSSELcon arg0 1))
         (ATSINStmpset tmp19 (ats2cljpre_gt_int1_int1 arg1 0))
         (if @tmp19
           (do
            (ATSINStmpset tmp20 (ats2cljpre_sub_int1_int1 arg1 1))
            ;; apy0 = @tmp18
            ;; apy1 = @tmp20
            ;; arg0 = apy0
            ;; arg1 = apy1
            ;; funlab_clj = 1; // __patsflab_list0_get_at_opt
            (ats2cljpre_ML_list0_get_at_opt @tmp18 @tmp20)
           ) ;; if-then
           (do
            (ATSPMVtysum @tmp17)
           ) ;; if-else
         )
        ) ;; end-of-branch
        ;; ATSbranchseq_end
        ;; (else (atscc2clj_caseof_deadcode _FILE_ _LINE_))
       ) ;; end-of-case
      ) ;; end-of-casefnx
     ] (casefnx 1)
    ) ;; end-of-let(casefnx)
    ;; if (funlab_clj > 0) continue; else ;; return tmpret16;
  ) ;} // endwhile-fun
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_ML_list0_make_intrange_2[arg0 arg1]
(
with-local-vars
[
;;knd = 0
  tmpret21 nil
  tmp22 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list0_make_intrange_2
  (ATSINStmpset tmp22 (ats2cljpre_list_make_intrange_2 arg0 arg1))
  @tmp22
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_ML_list0_make_intrange_3[arg0 arg1 arg2]
(
with-local-vars
[
;;knd = 0
  tmpret23 nil
  tmp24 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list0_make_intrange_3
  (ATSINStmpset tmp24 (ats2cljpre_list_make_intrange_3 arg0 arg1 arg2))
  @tmp24
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_ML_list0_snoc[arg0 arg1]
(
with-local-vars
[
;;knd = 0
  tmpret36 nil
  tmp37 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list0_snoc
  (ATSINStmpset tmp37 (ats2cljpre_list_snoc arg0 arg1))
  @tmp37
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_ML_list0_extend[arg0 arg1]
(
with-local-vars
[
;;knd = 0
  tmpret38 nil
  tmp39 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list0_extend
  (ATSINStmpset tmp39 (ats2cljpre_list_extend arg0 arg1))
  @tmp39
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_ML_list0_append[arg0 arg1]
(
with-local-vars
[
;;knd = 0
  tmpret40 nil
  tmp41 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list0_append
  (ATSINStmpset tmp41 (ats2cljpre_list_append arg0 arg1))
  @tmp41
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_ML_list0_reverse[arg0]
(
with-local-vars
[
;;knd = 0
  tmpret42 nil
  tmp43 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list0_reverse
  (ATSINStmpset tmp43 (ats2cljpre_list_reverse arg0))
  @tmp43
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_ML_list0_reverse_append[arg0 arg1]
(
with-local-vars
[
;;knd = 0
  tmpret44 nil
  tmp45 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list0_reverse_append
  (ATSINStmpset tmp45 (ats2cljpre_list_reverse_append arg0 arg1))
  @tmp45
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_ML_list0_exists[arg0 arg1]
(
with-local-vars
[
;;knd = 0
  tmpret46 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list0_exists
  (ats2cljpre_list_exists arg0 arg1)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_ML_list0_exists_method[arg0]
(
with-local-vars
[
;;knd = 0
  tmpret47 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list0_exists_method
  (_ats2cljpre_ML_list0_patsfun_22__closurerize arg0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_ML_list0_patsfun_22[env0 arg0]
(
with-local-vars
[
;;knd = 0
  tmpret48 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab__ats2cljpre_ML_list0_patsfun_22
  (ats2cljpre_ML_list0_exists env0 arg0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_ML_list0_iexists[arg0 arg1]
(
with-local-vars
[
;;knd = 0
  tmpret49 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list0_iexists
  (ats2cljpre_list_iexists arg0 arg1)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_ML_list0_iexists_method[arg0]
(
with-local-vars
[
;;knd = 0
  tmpret50 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list0_iexists_method
  (_ats2cljpre_ML_list0_patsfun_25__closurerize arg0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_ML_list0_patsfun_25[env0 arg0]
(
with-local-vars
[
;;knd = 0
  tmpret51 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab__ats2cljpre_ML_list0_patsfun_25
  (ats2cljpre_ML_list0_iexists env0 arg0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_ML_list0_forall[arg0 arg1]
(
with-local-vars
[
;;knd = 0
  tmpret52 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list0_forall
  (ats2cljpre_list_forall arg0 arg1)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_ML_list0_forall_method[arg0]
(
with-local-vars
[
;;knd = 0
  tmpret53 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list0_forall_method
  (_ats2cljpre_ML_list0_patsfun_28__closurerize arg0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_ML_list0_patsfun_28[env0 arg0]
(
with-local-vars
[
;;knd = 0
  tmpret54 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab__ats2cljpre_ML_list0_patsfun_28
  (ats2cljpre_ML_list0_forall env0 arg0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_ML_list0_iforall[arg0 arg1]
(
with-local-vars
[
;;knd = 0
  tmpret55 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list0_iforall
  (ats2cljpre_list_iforall arg0 arg1)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_ML_list0_iforall_method[arg0]
(
with-local-vars
[
;;knd = 0
  tmpret56 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list0_iforall_method
  (_ats2cljpre_ML_list0_patsfun_31__closurerize arg0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_ML_list0_patsfun_31[env0 arg0]
(
with-local-vars
[
;;knd = 0
  tmpret57 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab__ats2cljpre_ML_list0_patsfun_31
  (ats2cljpre_ML_list0_iforall env0 arg0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_ML_list0_app[arg0 arg1]
(
with-local-vars
[
;;knd = 0
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list0_app
  (ATSINSmove1_void (ats2cljpre_ML_list0_foreach arg0 arg1))
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_ML_list0_foreach[arg0 arg1]
(
with-local-vars
[
;;knd = 0
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list0_foreach
  (ATSINSmove1_void (ats2cljpre_list_foreach arg0 arg1))
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_ML_list0_foreach_method[arg0]
(
with-local-vars
[
;;knd = 0
  tmpret60 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list0_foreach_method
  (_ats2cljpre_ML_list0_patsfun_35__closurerize arg0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_ML_list0_patsfun_35[env0 arg0]
(
with-local-vars
[
;;knd = 0
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab__ats2cljpre_ML_list0_patsfun_35
  (ATSINSmove1_void (ats2cljpre_ML_list0_foreach env0 arg0))
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_ML_list0_iforeach[arg0 arg1]
(
with-local-vars
[
;;knd = 0
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list0_iforeach
  (ATSINSmove1_void (ats2cljpre_list_iforeach arg0 arg1))
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_ML_list0_iforeach_method[arg0]
(
with-local-vars
[
;;knd = 0
  tmpret63 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list0_iforeach_method
  (_ats2cljpre_ML_list0_patsfun_38__closurerize arg0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_ML_list0_patsfun_38[env0 arg0]
(
with-local-vars
[
;;knd = 0
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab__ats2cljpre_ML_list0_patsfun_38
  (ATSINSmove1_void (ats2cljpre_ML_list0_iforeach env0 arg0))
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_ML_list0_rforeach[arg0 arg1]
(
with-local-vars
[
;;knd = 0
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list0_rforeach
  (ATSINSmove1_void (ats2cljpre_list_rforeach arg0 arg1))
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_ML_list0_rforeach_method[arg0]
(
with-local-vars
[
;;knd = 0
  tmpret66 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list0_rforeach_method
  (_ats2cljpre_ML_list0_patsfun_41__closurerize arg0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_ML_list0_patsfun_41[env0 arg0]
(
with-local-vars
[
;;knd = 0
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab__ats2cljpre_ML_list0_patsfun_41
  (ATSINSmove1_void (ats2cljpre_ML_list0_rforeach env0 arg0))
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_ML_list0_filter[arg0 arg1]
(
with-local-vars
[
;;knd = 0
  tmpret68 nil
  tmp69 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list0_filter
  (ATSINStmpset tmp69 (ats2cljpre_list_filter arg0 arg1))
  @tmp69
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_ML_list0_filter_method[arg0]
(
with-local-vars
[
;;knd = 0
  tmpret70 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list0_filter_method
  (_ats2cljpre_ML_list0_patsfun_44__closurerize arg0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_ML_list0_patsfun_44[env0 arg0]
(
with-local-vars
[
;;knd = 0
  tmpret71 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab__ats2cljpre_ML_list0_patsfun_44
  (ats2cljpre_ML_list0_filter env0 arg0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_ML_list0_map[arg0 arg1]
(
with-local-vars
[
;;knd = 0
  tmpret72 nil
  tmp73 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list0_map
  (ATSINStmpset tmp73 (ats2cljpre_list_map arg0 arg1))
  @tmp73
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_ML_list0_map_method[arg0 arg1]
(
with-local-vars
[
;;knd = 0
  tmpret74 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list0_map_method
  (_ats2cljpre_ML_list0_patsfun_47__closurerize arg0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_ML_list0_patsfun_47[env0 arg0]
(
with-local-vars
[
;;knd = 0
  tmpret75 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab__ats2cljpre_ML_list0_patsfun_47
  (ats2cljpre_ML_list0_map env0 arg0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_ML_list0_foldleft[arg0 arg1 arg2]
(
with-local-vars
[
;;knd = 0
  tmpret76 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list0_foldleft
  (_ats2cljpre_ML_list0_aux_49 arg2 arg1 arg0)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_ML_list0_aux_49[env0 arg0 arg1]
(
with-local-vars
[
;;knd = 1
;;apy0 nil
;;apy1 nil
  tmpret77 nil
  tmp78 nil
  tmp79 nil
  tmp80 nil
;;var funlab_clj
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;while(true){
   (loop [
     env0 env0
     arg0 arg0
     arg1 arg1
    ] ; funlab_clj = 0;
    ;; __patsflab__ats2cljpre_ML_list0_aux_49
    (let[
      casefnx
      (fn casefnx[tmplab](case tmplab
        ;; ATSbranchseq_beg
        1 (do
         (if (ATSCKptriscons arg1)
           (casefnx 4)
           (do
            (casefnx 2)
           )
         )
        ) ;; end-of-branch
        2 (do
         arg0
        ) ;; end-of-branch
        ;; ATSbranchseq_end
        ;; ATSbranchseq_beg
        3 (do
         (casefnx 4)
        ) ;; end-of-branch
        4 (do
         (ATSINStmpset tmp78 (ATSSELcon arg1 0))
         (ATSINStmpset tmp79 (ATSSELcon arg1 1))
         (ATSINStmpset tmp80 ((ATSfunclo_fclo env0) env0 arg0 @tmp78))
         ;; apy0 = @tmp80
         ;; apy1 = @tmp79
         ;; arg0 = apy0
         ;; arg1 = apy1
         ;; funlab_clj = 1; // __patsflab__ats2cljpre_ML_list0_aux_49
         (_ats2cljpre_ML_list0_aux_49 env0 @tmp80 @tmp79)
        ) ;; end-of-branch
        ;; ATSbranchseq_end
        ;; (else (atscc2clj_caseof_deadcode _FILE_ _LINE_))
       ) ;; end-of-case
      ) ;; end-of-casefnx
     ] (casefnx 1)
    ) ;; end-of-let(casefnx)
    ;; if (funlab_clj > 0) continue; else ;; return tmpret77;
  ) ;} // endwhile-fun
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_ML_list0_foldright[arg0 arg1 arg2]
(
with-local-vars
[
;;knd = 0
  tmpret81 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list0_foldright
  (_ats2cljpre_ML_list0_aux_51 arg1 arg2 arg0 arg2)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 _ats2cljpre_ML_list0_aux_51[env0 env1 arg0 arg1]
(
with-local-vars
[
;;knd = 0
  tmpret82 nil
  tmp83 nil
  tmp84 nil
  tmp85 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab__ats2cljpre_ML_list0_aux_51
  (let[
    casefnx
    (fn casefnx[tmplab](case tmplab
      ;; ATSbranchseq_beg
      1 (do
       (if (ATSCKptriscons arg0)
         (casefnx 4)
         (do
          (casefnx 2)
         )
       )
      ) ;; end-of-branch
      2 (do
       arg1
      ) ;; end-of-branch
      ;; ATSbranchseq_end
      ;; ATSbranchseq_beg
      3 (do
       (casefnx 4)
      ) ;; end-of-branch
      4 (do
       (ATSINStmpset tmp83 (ATSSELcon arg0 0))
       (ATSINStmpset tmp84 (ATSSELcon arg0 1))
       (ATSINStmpset tmp85 (_ats2cljpre_ML_list0_aux_51 env0 env1 @tmp84 env1))
       ((ATSfunclo_fclo env0) env0 @tmp83 @tmp85)
      ) ;; end-of-branch
      ;; ATSbranchseq_end
      ;; (else (atscc2clj_caseof_deadcode _FILE_ _LINE_))
     ) ;; end-of-case
    ) ;; end-of-casefnx
   ] (casefnx 1)
  ) ;; end-of-let(casefnx)
) ;; end-of-with-local-vars
) ;; end-of-fun


;;fun
(defn
 ats2cljpre_ML_list0_sort_2[arg0 arg1]
(
with-local-vars
[
;;knd = 0
  tmpret88 nil
  tmp89 nil
;;var tmplab,tmplab_clj
] ;; with-local-vars
  ;; __patsflab_list0_sort_2
  (ATSINStmpset tmp89 (ats2cljpre_list_sort_2 arg0 arg1))
  @tmp89
) ;; end-of-with-local-vars
) ;; end-of-fun

;;;;;;
;;
;; end-of-compilation-unit
;;
;;;;;;

;; ****** ****** ;;

;; end of [libatscc2clj_all.clj] ;;
