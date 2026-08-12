void __cdecl sub_10478420()
{
  int v0; // eax

  v0 = unk_106E8AD4;
  *(_DWORD *)byte_106E8AB0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E8AB0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E8AD4 = 0;
  }
  *(_DWORD *)byte_106E8AB0 = &ConCommandBase::`vftable';
}
