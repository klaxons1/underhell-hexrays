void __cdecl sub_10476EB0()
{
  int v0; // eax

  v0 = unk_106DED2C;
  *(_DWORD *)byte_106DED08 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DED08[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106DED2C = 0;
  }
  *(_DWORD *)byte_106DED08 = &ConCommandBase::`vftable';
}
