int __cdecl sub_10220FD0(int a1, float a2, float a3, float a4, int a5)
{
  unsigned int v6; // eax

  if ( !a1 )
    return 0;
  if ( *(_DWORD *)(a1 + 4 * a5 + 388) == 1 )
    return *(_DWORD *)(a1 + 4 * a5 + 4);
  v6 = (__int64)((a3 - a2) * a4);
  if ( *(_BYTE *)(a1 + a5 + 260) )
  {
    if ( v6 >= 0x3FF )
      return *(_DWORD *)(a1 + 4 * a5 + 4) + 69564;
  }
  else
  {
    v6 &= 0x3FFu;
  }
  return *(_DWORD *)(a1 + 4 * a5 + 4) + 68 * v6;
}
