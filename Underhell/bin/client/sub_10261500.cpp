bool __cdecl sub_10261500(_DWORD *a1, _DWORD *a2)
{
  int v2; // eax
  int v3; // ecx
  int v5; // ecx
  int v6; // ecx

  v2 = dword_10480440(dword_10480434, *a1, *a2);
  if ( !v2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      a2[1] = v3;
      return 0;
    }
    v5 = a2[1];
    if ( v5 )
    {
      a1[1] = v5;
      return 0;
    }
    v6 = dword_103FD4C0;
    a2[1] = dword_103FD4C0;
    a1[1] = v6;
    dword_103FD4C0 = v6 + 1;
  }
  return v2 > 0;
}
