void __cdecl sub_10477A50()
{
  int v0; // eax

  v0 = unk_106E38EC;
  *(_DWORD *)byte_106E38C8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E38C8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E38EC = 0;
  }
  *(_DWORD *)byte_106E38C8 = &ConCommandBase::`vftable';
}
