void __cdecl sub_10477650()
{
  int v0; // eax

  v0 = unk_106E2554;
  *(_DWORD *)byte_106E2530 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E2530[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E2554 = 0;
  }
  *(_DWORD *)byte_106E2530 = &ConCommandBase::`vftable';
}
