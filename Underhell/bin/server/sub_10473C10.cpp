void __cdecl sub_10473C10()
{
  int v0; // eax

  v0 = unk_106C2B7C;
  *(_DWORD *)byte_106C2B58 = &ConVar::`vftable';
  *(_DWORD *)&byte_106C2B58[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106C2B7C = 0;
  }
  *(_DWORD *)byte_106C2B58 = &ConCommandBase::`vftable';
}
