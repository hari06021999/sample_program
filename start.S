.section StartUp, "ax"
    .balign 4

.globl loop
.global GetMPIDR
.global start64
    .type start64, "function"
start64:

    mrs x0, mpidr_el1
    and x0,x0,#0xFF
    bic x0,x0,x1
    cbz x0,core_zero_dispatch
    sub x1,x0,#1
    cbz x1,core_one_dispatch
    sub x1,x0,#2
    cbz x1,core_two_dispatch
    sub x1,x0,#3
    cbz x1,core_three_dispatch

    b processor_hang

core_zero_dispatch:
    ldr x2, =0x00910100
    mov sp, x2
    bl core_0
    b hang
    b processor_hang

core_one_dispatch:
    ldr x2, =0x00910200
    mov sp, x2
    bl core_1
    b hang
    b processor_hang

core_two_dispatch:
    ldr x2, =0x00910300
    mov sp, x2
    bl core_2
    b hang
    b processor_hang

core_three_dispatch:
    ldr x2, =0x00910400
    mov sp, x2
    bl core_3
    b hang
    b processor_hang

hang:
    nop
    b hang

processor_hang:
    wfe
    b processor_hang
