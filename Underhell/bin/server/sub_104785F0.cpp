void __cdecl sub_104785F0()
{
  int v0; // eax

  v0 = unk_106E92FC;
  *(_DWORD *)byte_106E92D8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E92D8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E92FC = 0;
  }
  *(_DWORD *)byte_106E92D8 = &ConCommandBase::`vftable';
}
