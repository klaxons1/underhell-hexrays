void __cdecl sub_10478520()
{
  int v0; // eax

  v0 = unk_106E8F54;
  *(_DWORD *)byte_106E8F30 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E8F30[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E8F54 = 0;
  }
  *(_DWORD *)byte_106E8F30 = &ConCommandBase::`vftable';
}
