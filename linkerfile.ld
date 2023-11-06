SECTIONS
{
	.vectors 0x7e1000:
    {
        __code_start = .;
        KEEP(*(StartUp))
    }
	
    .text :
    {
        *(.text*)
    }
   
   .rodata :
    {
        *(.rodata .rodata.* .gnu.linkonce.r.*)
    }
   

}