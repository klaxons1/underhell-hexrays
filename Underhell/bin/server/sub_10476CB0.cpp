void __cdecl sub_10476CB0()
{
  int v0; // eax

  v0 = unk_106DE674;
  *(_DWORD *)byte_106DE650 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DE650[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106DE674 = 0;
  }
  *(_DWORD *)byte_106DE650 = &ConCommandBase::`vftable';
}
