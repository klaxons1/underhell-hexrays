void __cdecl sub_10477C40()
{
  int v0; // eax

  v0 = *(_DWORD *)&algn_106E55D8[4];
  *(_DWORD *)byte_106E55B8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E55B8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&algn_106E55D8[4] = 0;
  }
  *(_DWORD *)byte_106E55B8 = &ConCommandBase::`vftable';
}
