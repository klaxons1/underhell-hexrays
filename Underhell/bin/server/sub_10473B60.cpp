void __cdecl sub_10473B60()
{
  int v0; // eax

  v0 = unk_106C2914;
  *(_DWORD *)byte_106C28F0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106C28F0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106C2914 = 0;
  }
  *(_DWORD *)byte_106C28F0 = &ConCommandBase::`vftable';
}
