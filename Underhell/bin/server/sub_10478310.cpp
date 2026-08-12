void __cdecl sub_10478310()
{
  int v0; // eax

  v0 = unk_106E860C;
  *(_DWORD *)byte_106E85E8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E85E8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E860C = 0;
  }
  *(_DWORD *)byte_106E85E8 = &ConCommandBase::`vftable';
}
