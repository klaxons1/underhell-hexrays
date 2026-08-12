void __cdecl sub_10478290()
{
  int v0; // eax

  v0 = unk_106E8244;
  *(_DWORD *)byte_106E8220 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E8220[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E8244 = 0;
  }
  *(_DWORD *)byte_106E8220 = &ConCommandBase::`vftable';
}
