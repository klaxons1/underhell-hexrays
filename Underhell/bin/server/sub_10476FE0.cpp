void __cdecl sub_10476FE0()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106DF260[36];
  *(_DWORD *)byte_106DF260 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DF260[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106DF260[36] = 0;
  }
  *(_DWORD *)byte_106DF260 = &ConCommandBase::`vftable';
}
