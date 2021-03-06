.class public test_load_store_conflict_by_exception_not_thrown
.super java/lang/Object

; ======================================================================

.method public <init>()V
   aload_0
   invokenonvirtual java/lang/Object/<init>()V
   return
.end method

; ======================================================================

.method public static checkI(I)V
	.limit locals 1
	.limit stack 10
	getstatic java/lang/System/out Ljava/io/PrintStream;
	iload_0
	invokevirtual java/io/PrintStream/println(I)V
	return
.end method

; ======================================================================

.method public static main([Ljava/lang/String;)V
	.limit stack 3
	.limit locals 3

	.catch java/lang/Exception from test_start to test_end using handler

	ldc 35
	istore 1
	ldc 777
	istore 2

	aload 0
	ifnull force_basic_block_boundary

	; --------------------------------------------------

test_start:
	ldc 42
	aload 0
	arraylength    ; may throw, but does not in this case
	pop
	istore 1
test_end:

	; --------------------------------------------------

force_basic_block_boundary:

	iload 1
	invokestatic test_load_store_conflict_by_exception_not_thrown/checkI(I)V
	; OUTPUT: 42

	iload 2
	invokestatic test_load_store_conflict_by_exception_not_thrown/checkI(I)V
	; OUTPUT: 777
	
	return

handler:
	pop

	; output magic number to show we reached the handler
	ldc 88888
	invokestatic test_load_store_conflict_by_exception_not_thrown/checkI(I)V

	iload 1
	invokestatic test_load_store_conflict_by_exception_not_thrown/checkI(I)V

	iload 2
	invokestatic test_load_store_conflict_by_exception_not_thrown/checkI(I)V

	return
.end method

