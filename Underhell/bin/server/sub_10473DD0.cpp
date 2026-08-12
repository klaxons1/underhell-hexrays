void __cdecl sub_10473DD0()
{
  int v0; // eax

  v0 = unk_106C461C;
  *(_DWORD *)byte_106C45F8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106C45F8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106C461C = 0;
  }
  *(_DWORD *)byte_106C45F8 = &ConCommandBase::`vftable';
}
