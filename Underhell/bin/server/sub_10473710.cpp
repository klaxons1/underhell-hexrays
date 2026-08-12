void __cdecl sub_10473710()
{
  HMODULE v0; // eax

  v0 = (HMODULE)dword_106C0F6C[2];
  dword_106C0F6C[0] = &CDllDemandLoader::`vftable';
  if ( v0 )
  {
    FreeLibrary(v0);
    dword_106C0F6C[2] = 0;
  }
}
