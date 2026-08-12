void __cdecl sub_10477AC0()
{
  int v0; // eax

  v0 = unk_106E3AE4;
  *(_DWORD *)byte_106E3AC0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E3AC0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E3AE4 = 0;
  }
  *(_DWORD *)byte_106E3AC0 = &ConCommandBase::`vftable';
}
