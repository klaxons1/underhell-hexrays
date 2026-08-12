void __cdecl sub_10477AD0()
{
  int v0; // eax

  v0 = unk_106E3B2C;
  *(_DWORD *)byte_106E3B08 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E3B08[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E3B2C = 0;
  }
  *(_DWORD *)byte_106E3B08 = &ConCommandBase::`vftable';
}
