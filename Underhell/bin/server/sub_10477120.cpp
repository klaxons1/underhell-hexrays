void __cdecl sub_10477120()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106DF800[36];
  *(_DWORD *)byte_106DF800 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DF800[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106DF800[36] = 0;
  }
  *(_DWORD *)byte_106DF800 = &ConCommandBase::`vftable';
}
