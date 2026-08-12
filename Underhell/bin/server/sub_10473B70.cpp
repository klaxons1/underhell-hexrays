void __cdecl sub_10473B70()
{
  int v0; // eax

  v0 = *(_DWORD *)&algn_106C2958[4];
  *(_DWORD *)byte_106C2938 = &ConVar::`vftable';
  *(_DWORD *)&byte_106C2938[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&algn_106C2958[4] = 0;
  }
  *(_DWORD *)byte_106C2938 = &ConCommandBase::`vftable';
}
