void __cdecl sub_104738B0()
{
  int v0; // eax

  v0 = unk_106C1BBC;
  *(_DWORD *)byte_106C1B98 = &ConVar::`vftable';
  *(_DWORD *)&byte_106C1B98[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106C1BBC = 0;
  }
  *(_DWORD *)byte_106C1B98 = &ConCommandBase::`vftable';
}
