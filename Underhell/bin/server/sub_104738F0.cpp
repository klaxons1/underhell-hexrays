void __cdecl sub_104738F0()
{
  int v0; // eax

  v0 = *(_DWORD *)&algn_106C1CD8[4];
  *(_DWORD *)byte_106C1CB8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106C1CB8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&algn_106C1CD8[4] = 0;
  }
  *(_DWORD *)byte_106C1CB8 = &ConCommandBase::`vftable';
}
