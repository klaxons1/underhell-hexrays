void __cdecl sub_10478790()
{
  int v0; // eax

  v0 = unk_106E9DC4;
  *(_DWORD *)byte_106E9DA0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E9DA0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E9DC4 = 0;
  }
  *(_DWORD *)byte_106E9DA0 = &ConCommandBase::`vftable';
}
