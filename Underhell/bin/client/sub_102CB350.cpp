void __cdecl sub_102CB350()
{
  HMODULE v0; // eax

  v0 = (HMODULE)dword_104363F0[2];
  dword_104363F0[0] = &CDllDemandLoader::`vftable';
  if ( v0 )
  {
    FreeLibrary(v0);
    dword_104363F0[2] = 0;
  }
}
