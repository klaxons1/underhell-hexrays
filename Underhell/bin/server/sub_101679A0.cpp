int __cdecl sub_101679A0(int a1)
{
  int v1; // ecx
  int result; // eax
  _WORD *i; // ecx
  int v4; // [esp+0h] [ebp-4h] BYREF

  v4 = v1;
  sub_1042F670(&v4, a1);
  if ( (_WORD)v4 == 0xFFFF )
    return -1;
  result = dword_106B4FEC - 1;
  if ( dword_106B4FEC - 1 < 0 )
    return -1;
  for ( i = (_WORD *)(dword_106B4FE0 + 12 * result); *i != (_WORD)v4; i -= 6 )
  {
    if ( --result < 0 )
      return -1;
  }
  return result;
}
