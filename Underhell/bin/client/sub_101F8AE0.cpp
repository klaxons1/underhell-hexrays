void __stdcall sub_101F8AE0(int a1)
{
  int v1; // ecx
  int v2; // eax

  v1 = *(_DWORD *)(a1 + 6668);
  if ( v1 )
  {
    v2 = 0;
    while ( dword_10465680[v2] != v1 )
    {
      if ( (unsigned int)++v2 >= 0x10 )
        return;
    }
    *(_DWORD *)(a1 + 6668) = 0;
    dword_104656C0[v2] = 0;
  }
}
