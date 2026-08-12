void __cdecl sub_104778E0()
{
  int v0; // eax

  v0 = unk_106E310C;
  *(_DWORD *)byte_106E30E8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E30E8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E310C = 0;
  }
  *(_DWORD *)byte_106E30E8 = &ConCommandBase::`vftable';
}
