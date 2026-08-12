void __cdecl sub_10478040()
{
  int v0; // eax

  v0 = unk_106E6944;
  *(_DWORD *)byte_106E6920 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E6920[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E6944 = 0;
  }
  *(_DWORD *)byte_106E6920 = &ConCommandBase::`vftable';
}
