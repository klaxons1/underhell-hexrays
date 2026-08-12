char __cdecl sub_103960A0(int a1)
{
  int *v2; // ecx
  const char *v3; // eax
  const char *v4; // ecx

  if ( !a1 )
    return 0;
  if ( *(_DWORD *)(a1 + 300) != -1 )
  {
    v2 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 300) & 0xFFF) + 1];
    if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 300) & 0xFFF) + 2] == *(_DWORD *)(a1 + 300) >> 12 )
    {
      if ( *v2 )
      {
        v3 = *(const char **)(*v2 + 92);
        if ( !v3 )
          v3 = String;
        v4 = dword_106EA244;
        if ( !dword_106EA244 )
          v4 = String;
        if ( v3 == v4 )
          return 1;
      }
    }
  }
  return 0;
}
