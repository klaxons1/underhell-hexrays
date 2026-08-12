void __cdecl sub_10476BC0()
{
  int v0; // eax

  v0 = unk_106DE56C;
  *(_DWORD *)byte_106DE548 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DE548[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106DE56C = 0;
  }
  *(_DWORD *)byte_106DE548 = &ConCommandBase::`vftable';
}
