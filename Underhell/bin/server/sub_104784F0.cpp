void __cdecl sub_104784F0()
{
  int v0; // eax

  v0 = unk_106E8E7C;
  *(_DWORD *)byte_106E8E58 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E8E58[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E8E7C = 0;
  }
  *(_DWORD *)byte_106E8E58 = &ConCommandBase::`vftable';
}
