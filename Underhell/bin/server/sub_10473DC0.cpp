void __cdecl sub_10473DC0()
{
  int v0; // eax

  v0 = unk_106C45D4;
  *(_DWORD *)byte_106C45B0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106C45B0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106C45D4 = 0;
  }
  *(_DWORD *)byte_106C45B0 = &ConCommandBase::`vftable';
}
