void __cdecl sub_10474410()
{
  int v0; // eax

  v0 = *(_DWORD *)&algn_106C6898[4];
  *(_DWORD *)byte_106C6878 = &ConVar::`vftable';
  *(_DWORD *)&byte_106C6878[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&algn_106C6898[4] = 0;
  }
  *(_DWORD *)byte_106C6878 = &ConCommandBase::`vftable';
}
