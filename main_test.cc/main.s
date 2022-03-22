	.file	"main.cc"
	.text
	.section .rdata,"dr"
_ZStL19piecewise_construct:
	.space 1
.lcomm _ZStL8__ioinit,1,1
.LC0:
	.ascii "\346\225\260\351\207\217\345\257\271\350\261\241= \0"
	.section	.text$_ZN5CtestC1Ev,"x"
	.linkonce discard
	.align 2
	.globl	_ZN5CtestC1Ev
	.def	_ZN5CtestC1Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN5CtestC1Ev
_ZN5CtestC1Ev:
.LFB1547:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movl	_ZN5Ctest5countE(%rip), %eax
	incl	%eax
	movl	%eax, _ZN5Ctest5countE(%rip)
	leaq	.LC0(%rip), %rdx
	movq	.refptr._ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rcx
	movl	_ZN5Ctest5countE(%rip), %eax
	movl	%eax, %edx
	call	_ZNSolsEi
	movl	$10, %edx
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN5CtestD1Ev,"x"
	.linkonce discard
	.align 2
	.globl	_ZN5CtestD1Ev
	.def	_ZN5CtestD1Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN5CtestD1Ev
_ZN5CtestD1Ev:
.LFB1550:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movl	_ZN5Ctest5countE(%rip), %eax
	decl	%eax
	movl	%eax, _ZN5Ctest5countE(%rip)
	leaq	.LC0(%rip), %rdx
	movq	.refptr._ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rcx
	movl	_ZN5Ctest5countE(%rip), %eax
	movl	%eax, %edx
	call	_ZNSolsEi
	movl	$10, %edx
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.def	__gxx_personality_seh0;	.scl	2;	.type	32;	.endef
	.seh_handler	__gxx_personality_seh0, @unwind, @except
	.seh_handlerdata
.LLSDA1550:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1550-.LLSDACSB1550
.LLSDACSB1550:
.LLSDACSE1550:
	.section	.text$_ZN5CtestD1Ev,"x"
	.linkonce discard
	.seh_endproc
	.globl	_ZN5Ctest5countE
	.bss
	.align 4
_ZN5Ctest5countE:
	.space 4
	.def	__main;	.scl	2;	.type	32;	.endef
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
.LFB1551:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rdi
	.seh_pushreg	%rdi
	pushq	%rsi
	.seh_pushreg	%rsi
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$56, %rsp
	.seh_stackalloc	56
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	.seh_endprologue
	call	__main
	leaq	-85(%rbp), %rsi
	movl	$4, %ebx
	movq	%rsi, %rdi
.L5:
	testq	%rbx, %rbx
	js	.L4
	movq	%rdi, %rcx
.LEHB0:
	call	_ZN5CtestC1Ev
.LEHE0:
	incq	%rdi
	decq	%rbx
	jmp	.L5
.L4:
	movl	$0, %esi
	leaq	-85(%rbp), %rbx
	addq	$5, %rbx
.L7:
	leaq	-85(%rbp), %rax
	cmpq	%rax, %rbx
	je	.L8
	decq	%rbx
	movq	%rbx, %rcx
	call	_ZN5CtestD1Ev
	jmp	.L7
.L8:
	movl	%esi, %eax
	jmp	.L13
.L12:
	movq	%rax, %rdi
	testq	%rsi, %rsi
	je	.L10
	movl	$4, %eax
	subq	%rbx, %rax
	leaq	(%rsi,%rax), %rbx
.L11:
	cmpq	%rsi, %rbx
	je	.L10
	decq	%rbx
	movq	%rbx, %rcx
	call	_ZN5CtestD1Ev
	jmp	.L11
.L10:
	movq	%rdi, %rax
	movq	%rax, %rcx
.LEHB1:
	call	_Unwind_Resume
.LEHE1:
.L13:
	addq	$56, %rsp
	popq	%rbx
	popq	%rsi
	popq	%rdi
	popq	%rbp
	ret
	.seh_handler	__gxx_personality_seh0, @unwind, @except
	.seh_handlerdata
.LLSDA1551:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1551-.LLSDACSB1551
.LLSDACSB1551:
	.uleb128 .LEHB0-.LFB1551
	.uleb128 .LEHE0-.LEHB0
	.uleb128 .L12-.LFB1551
	.uleb128 0
	.uleb128 .LEHB1-.LFB1551
	.uleb128 .LEHE1-.LEHB1
	.uleb128 0
	.uleb128 0
.LLSDACSE1551:
	.text
	.seh_endproc
	.def	__tcf_0;	.scl	3;	.type	32;	.endef
	.seh_proc	__tcf_0
__tcf_0:
.LFB2037:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	leaq	_ZStL8__ioinit(%rip), %rcx
	call	_ZNSt8ios_base4InitD1Ev
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.def	_Z41__static_initialization_and_destruction_0ii;	.scl	3;	.type	32;	.endef
	.seh_proc	_Z41__static_initialization_and_destruction_0ii
_Z41__static_initialization_and_destruction_0ii:
.LFB2036:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movl	%ecx, 16(%rbp)
	movl	%edx, 24(%rbp)
	cmpl	$1, 16(%rbp)
	jne	.L17
	cmpl	$65535, 24(%rbp)
	jne	.L17
	leaq	_ZStL8__ioinit(%rip), %rcx
	call	_ZNSt8ios_base4InitC1Ev
	leaq	__tcf_0(%rip), %rcx
	call	atexit
.L17:
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.def	_GLOBAL__sub_I__ZN5Ctest5countE;	.scl	3;	.type	32;	.endef
	.seh_proc	_GLOBAL__sub_I__ZN5Ctest5countE
_GLOBAL__sub_I__ZN5Ctest5countE:
.LFB2038:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movl	$65535, %edx
	movl	$1, %ecx
	call	_Z41__static_initialization_and_destruction_0ii
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.ctors,"w"
	.align 8
	.quad	_GLOBAL__sub_I__ZN5Ctest5countE
	.ident	"GCC: (GNU) 8.2.0"
	.def	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc;	.scl	2;	.type	32;	.endef
	.def	_ZNSolsEi;	.scl	2;	.type	32;	.endef
	.def	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c;	.scl	2;	.type	32;	.endef
	.def	_Unwind_Resume;	.scl	2;	.type	32;	.endef
	.def	_ZNSt8ios_base4InitD1Ev;	.scl	2;	.type	32;	.endef
	.def	_ZNSt8ios_base4InitC1Ev;	.scl	2;	.type	32;	.endef
	.def	atexit;	.scl	2;	.type	32;	.endef
	.section	.rdata$.refptr._ZSt4cout, "dr"
	.globl	.refptr._ZSt4cout
	.linkonce	discard
.refptr._ZSt4cout:
	.quad	_ZSt4cout
