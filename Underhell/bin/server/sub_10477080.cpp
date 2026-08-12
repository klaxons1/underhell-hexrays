void __cdecl sub_10477080()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106DF530[36];
  *(_DWORD *)byte_106DF530 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DF530[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106DF530[36] = 0;
  }
  *(_DWORD *)byte_106DF530 = &ConCommandBase::`vftable';
}
