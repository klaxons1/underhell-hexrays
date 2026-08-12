void __cdecl sub_10477110()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106DF7B8[36];
  *(_DWORD *)byte_106DF7B8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DF7B8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106DF7B8[36] = 0;
  }
  *(_DWORD *)byte_106DF7B8 = &ConCommandBase::`vftable';
}
