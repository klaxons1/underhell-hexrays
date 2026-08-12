void __cdecl sub_10476FB0()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106DF188[36];
  *(_DWORD *)byte_106DF188 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DF188[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106DF188[36] = 0;
  }
  *(_DWORD *)byte_106DF188 = &ConCommandBase::`vftable';
}
