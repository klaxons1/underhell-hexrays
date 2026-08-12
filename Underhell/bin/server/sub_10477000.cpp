void __cdecl sub_10477000()
{
  int v0; // eax

  v0 = unk_106DF314;
  *(_DWORD *)byte_106DF2F0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DF2F0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106DF314 = 0;
  }
  *(_DWORD *)byte_106DF2F0 = &ConCommandBase::`vftable';
}
