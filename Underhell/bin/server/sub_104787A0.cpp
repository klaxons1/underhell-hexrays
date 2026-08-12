void __cdecl sub_104787A0()
{
  int v0; // eax

  v0 = unk_106E9E0C;
  *(_DWORD *)byte_106E9DE8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E9DE8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E9E0C = 0;
  }
  *(_DWORD *)byte_106E9DE8 = &ConCommandBase::`vftable';
}
