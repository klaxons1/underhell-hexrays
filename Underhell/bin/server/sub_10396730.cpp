char __usercall sub_10396730@<al>(_DWORD **a1@<ecx>, int a2@<edi>)
{
  char result; // al

  if ( sub_1007E000(a1[647]) == 7 && sub_10394DD0(a1) )
    dword_106EA24C = 1;
  result = sub_10042DE0(a1, a2);
  dword_106EA24C = 0;
  return result;
}
