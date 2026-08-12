void __cdecl sub_10478DF0()
{
  int v0; // eax

  v0 = unk_106EC0FC;
  *(_DWORD *)byte_106EC0D8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EC0D8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EC0FC = 0;
  }
  *(_DWORD *)byte_106EC0D8 = &ConCommandBase::`vftable';
}
