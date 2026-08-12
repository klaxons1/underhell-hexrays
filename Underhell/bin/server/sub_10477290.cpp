void __cdecl sub_10477290()
{
  int v0; // eax

  v0 = unk_106E05D4;
  *(_DWORD *)byte_106E05B0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E05B0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E05D4 = 0;
  }
  *(_DWORD *)byte_106E05B0 = &ConCommandBase::`vftable';
}
