BITS 32

section .text
  global add_numbers
  global sub_numbers
  global mul_numbers

add_numbers:
   push ebp
   mov ebp, esp 
   mov eax, edi
   add eax, esi
   pop ebp
   ret

sub_numbers:
   push ebp
   mov ebp, esp 
   mov eax, edi 
   sub eax, esi
   pop ebp
   ret 

mul_numbers:
   push ebp 
   mov ebp, esp 
   mov eax, edi 
   mul esi
   pop ebp 
   ret
