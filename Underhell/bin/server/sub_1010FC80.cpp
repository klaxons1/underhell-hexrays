BOOL __usercall sub_1010FC80@<eax>(int a1@<esi>)
{
  _BYTE v2[84]; // [esp+0h] [ebp-54h] BYREF

  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  sub_102659D0(a1, a1 + 580, a1 + 580, 33636363, v2);
  return v2[55] == 0;
}
