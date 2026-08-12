void __cdecl sub_10476EF0()
{
  int v0; // eax

  v0 = unk_106DEE4C;
  *(_DWORD *)byte_106DEE28 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DEE28[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106DEE4C = 0;
  }
  *(_DWORD *)byte_106DEE28 = &ConCommandBase::`vftable';
}
