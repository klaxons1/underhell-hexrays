void __cdecl sub_10476DB0()
{
  int v0; // eax

  v0 = unk_106DEA2C;
  *(_DWORD *)byte_106DEA08 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DEA08[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106DEA2C = 0;
  }
  *(_DWORD *)byte_106DEA08 = &ConCommandBase::`vftable';
}
