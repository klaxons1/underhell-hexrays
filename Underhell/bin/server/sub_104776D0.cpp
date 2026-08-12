void __cdecl sub_104776D0()
{
  int v0; // eax

  v0 = unk_106E273C;
  *(_DWORD *)byte_106E2718 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E2718[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E273C = 0;
  }
  *(_DWORD *)byte_106E2718 = &ConCommandBase::`vftable';
}
