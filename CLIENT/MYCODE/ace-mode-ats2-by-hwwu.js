define("ace/mode/ats2",["require","exports","module","ace/lib/oop","ace/mode/text","ace/tokenizer","ace/mode/ats_highlight_rules","ace/mode/folding/cstyle"],function(e,t,n){var r=e("../lib/oop"),i=e("./text").Mode,s=e("../tokenizer").Tokenizer,o=e("./ats_highlight_rules").ATSHighlightRules,u=e("./folding/cstyle").FoldMode,a=function(){this.HighlightRules=o,this.foldingRules=new u};r.inherits(a,i),function(){this.lineCommentStart="//",this.blockComment={start:"/*",end:"*/"}}.call(a.prototype),t.Mode=a}),define("ace/mode/ats_highlight_rules",["require","exports","module","ace/lib/oop","ace/mode/text_highlight_rules"],function(e,t,n){var r=e("../lib/oop"),i=e("./text_highlight_rules").TextHighlightRules,s=function(){this.$rules={start:[{include:"#comment_rest"},{include:"#comment_line"},{include:"#comment_block"},{include:"#string"},{include:"#operators"},{include:"#keywords"}],"#comment_block":[{token:"comment.block.ats",regex:"\\(\\*",push:[{include:"#comment_block"},{token:"comment.block.ats",regex:"\\*\\)",next:"pop"},{defaultToken:"comment.block.ats"}]}],"#comment_line":[{token:"comment.line.ats",regex:"//.*$"}],"#comment_rest":[{token:"comment.rest.ats",regex:"////",push:[{token:"comment",regex:".*"},{token:"comment.rest.ats",regex:".\\z",next:"pop"},{defaultToken:"comment.rest.ats"}]}],"#keywords":[{caseInsensitive:!0,token:"keyword.ats",regex:"(\\#|\\$)(\\w+)|\\b(absvtype|vtypedef|absprop|abstype|abst0ype|abst@ype|absview|absvtype|absvt0ype|absvt@ype|absviewtype|absviewt0ype|absviewt@ype|and|andalso|assume|as|begin|break|case(\\+|-)?|class|continue|dataprop|datasort|datatype|dataview|datavtype|dataviewtype|dynload|dyn|else|end|exception|extern|fix|fn|for|fun|if|implmnt|implement|infixl|infixr|infix|in|lam|let|llam|local|macdef|macrodef|method|modprop|modtype|module|nonfix|object|of|op|or|orelse|overload|par|postfix|praxi|prefix|prfn|prfun|primplmnt|primplement|propdef|prval|rec|sif|sortdef|stadef|staif|staload|stavar|sta|struct|symelim|symintr|then|try|typedef|union|val(\\+|-)?|var|viewdef|viewtypedef|when|where|while|withprop|withtype|withviewtype|withview|with)\\b"}],"#operators":[{TODO:"FIXME: regexp doesn't have js equivalent",token:"keyword.operator.ats",regex:"!=|!|%|&&|&|\\*|\\+|-->|->|\\[|\\]|-|/|:=|<=|>=|==>|=>|>>|\\{|\\}|>|<|\\?|\\|\\||\\||~"}],"#string":[{token:"string.ats",regex:'"[^"]*"'}]},this.normalizeRules()};r.inherits(s,i),t.ATSHighlightRules=s}),define("ace/mode/folding/cstyle",["require","exports","module","ace/lib/oop","ace/range","ace/mode/folding/fold_mode"],function(e,t,n){var r=e("../../lib/oop"),i=e("../../range").Range,s=e("./fold_mode").FoldMode,o=t.FoldMode=function(e){e&&(this.foldingStartMarker=new RegExp(this.foldingStartMarker.source.replace(/\|[^|]*?$/,"|"+e.start)),this.foldingStopMarker=new RegExp(this.foldingStopMarker.source.replace(/\|[^|]*?$/,"|"+e.end)))};r.inherits(o,s),function(){this.foldingStartMarker=/(\{|\[)[^\}\]]*$|^\s*(\/\*)/,this.foldingStopMarker=/^[^\[\{]*(\}|\])|^[\s\*]*(\*\/)/,this.getFoldWidgetRange=function(e,t,n,r){var i=e.getLine(n),s=i.match(this.foldingStartMarker);if(s){var o=s.index;if(s[1])return this.openingBracketBlock(e,s[1],n,o);var u=e.getCommentFoldRange(n,o+s[0].length,1);return u&&!u.isMultiLine()&&(r?u=this.getSectionRange(e,n):t!="all"&&(u=null)),u}if(t==="markbegin")return;var s=i.match(this.foldingStopMarker);if(s){var o=s.index+s[0].length;return s[1]?this.closingBracketBlock(e,s[1],n,o):e.getCommentFoldRange(n,o,-1)}},this.getSectionRange=function(e,t){var n=e.getLine(t),r=n.search(/\S/),s=t,o=n.length;t+=1;var u=t,a=e.getLength();while(++t<a){n=e.getLine(t);var f=n.search(/\S/);if(f===-1)continue;if(r>f)break;var l=this.getFoldWidgetRange(e,"all",t);if(l){if(l.start.row<=s)break;if(l.isMultiLine())t=l.end.row;else if(r==f)break}u=t}return new i(s,o,u,e.getLine(u).length)}}.call(o.prototype)})