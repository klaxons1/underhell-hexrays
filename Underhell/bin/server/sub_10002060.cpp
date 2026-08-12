int __cdecl sub_10002060(int a1)
{
  int v1; // eax
  int v3; // eax

  v1 = 0;
  if ( dword_10690154 <= 0 )
    return 0;
  while ( *(_DWORD *)(dword_10690148 + 8 * v1) != a1 )
  {
    if ( ++v1 >= dword_10690154 )
      return 0;
  }
  v3 = dword_10690148 + 8 * v1;
  if ( v3 )
    return sub_10244C30(*(unsigned __int16 *)(v3 + 4));
  else
    return 0;
}
