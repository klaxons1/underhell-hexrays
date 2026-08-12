int __cdecl sub_1013BCA0(int a1)
{
  int v1; // eax
  _DWORD *i; // ecx
  int v4; // eax

  v1 = 0;
  if ( dword_106B00B0 <= 0 )
    return -1;
  for ( i = (_DWORD *)dword_106B00A4; *i != a1; i += 3 )
  {
    if ( ++v1 >= dword_106B00B0 )
      return -1;
  }
  v4 = dword_106B00A4 + 12 * v1;
  if ( v4 )
    return *(_DWORD *)(v4 + 4);
  else
    return -1;
}
