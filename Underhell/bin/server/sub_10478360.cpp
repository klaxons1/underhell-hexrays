void __cdecl sub_10478360()
{
  int v0; // eax

  v0 = unk_106E8774;
  *(_DWORD *)byte_106E8750 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E8750[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E8774 = 0;
  }
  *(_DWORD *)byte_106E8750 = &ConCommandBase::`vftable';
}
