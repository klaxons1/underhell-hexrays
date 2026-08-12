void __cdecl sub_10473FA0()
{
  int v0; // eax

  v0 = unk_106C4EBC;
  *(_DWORD *)byte_106C4E98 = &ConVar::`vftable';
  *(_DWORD *)&byte_106C4E98[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106C4EBC = 0;
  }
  *(_DWORD *)byte_106C4E98 = &ConCommandBase::`vftable';
}
