void __cdecl sub_104770D0()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106DF698[36];
  *(_DWORD *)byte_106DF698 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DF698[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106DF698[36] = 0;
  }
  *(_DWORD *)byte_106DF698 = &ConCommandBase::`vftable';
}
