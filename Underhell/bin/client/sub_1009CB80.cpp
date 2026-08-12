int __cdecl sub_1009CB80(int a1)
{
  int v1; // eax
  _DWORD *i; // ecx
  int v4; // eax

  v1 = 0;
  if ( dword_1042D60C <= 0 )
    return -1;
  for ( i = (_DWORD *)dword_1042D600; *i != a1; i += 3 )
  {
    if ( ++v1 >= dword_1042D60C )
      return -1;
  }
  v4 = dword_1042D600 + 12 * v1;
  if ( v4 )
    return *(_DWORD *)(v4 + 4);
  else
    return -1;
}
