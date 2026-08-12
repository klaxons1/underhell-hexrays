int __usercall sub_102E35E0@<eax>(int a1@<ecx>, int a2@<edi>)
{
  int result; // eax

  if ( *(_BYTE *)(a1 + 5216) )
    return sub_102E0CB0(a1);
  sub_102E0B40(a1, a2);
  *(_BYTE *)(a1 + 5197) = 1;
  result = dword_106B31C8;
  *(float *)(a1 + 5200) = *(float *)(dword_106B31C8 + 12) + 1.5;
  return result;
}
