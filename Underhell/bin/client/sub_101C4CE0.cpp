int __cdecl sub_101C4CE0(_DWORD *a1)
{
  int v2; // esi
  int v3; // edx
  unsigned int v4; // ecx

  if ( !a1 || *a1 != 28 )
    return 0;
  v2 = a1[1];
  if ( v2 && (v3 = a1[2]) != 0 && (v4 = a1[4], v4 <= 0x11) )
    return sub_101C4480(v4, v2, v3, a1[3]);
  else
    return 0;
}
