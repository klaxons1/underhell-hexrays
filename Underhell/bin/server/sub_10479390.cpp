void __cdecl sub_10479390()
{
  int v0; // eax

  v0 = unk_106EEAA4;
  *(_DWORD *)byte_106EEA80 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EEA80[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EEAA4 = 0;
  }
  *(_DWORD *)byte_106EEA80 = &ConCommandBase::`vftable';
}
