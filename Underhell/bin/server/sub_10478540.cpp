void __cdecl sub_10478540()
{
  int v0; // eax

  v0 = unk_106E8FE4;
  *(_DWORD *)byte_106E8FC0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E8FC0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E8FE4 = 0;
  }
  *(_DWORD *)byte_106E8FC0 = &ConCommandBase::`vftable';
}
