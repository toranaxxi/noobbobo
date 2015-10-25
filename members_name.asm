section .text
  global _start

section .data
  msg db "Kritsanapong Wongnoon", 0xA
  msg1 db "Chanunthorn Piromrak" , 0xA
  msg2 db "Rapeepat Rungrengsamlankul" , 0xA
  msg3 db "Wachirasak Khumprasit" , 0xA
  msg4 db "Sikarin Sirirak" , 0xA 
  len equ $ -msg

_start:
  
  mov ecx, msg
  mov edx, len
  mov ebx, 1
  mov eax, 4
  int 0x80

  mov ebx, 0
  mov eax, 1
  int 0x80
