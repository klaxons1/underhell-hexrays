void __cdecl sub_10477100()
{
  int v0; // eax

  v0 = unk_106DF794;
  *(_DWORD *)byte_106DF770 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DF770[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106DF794 = 0;
  }
  *(_DWORD *)byte_106DF770 = &ConCommandBase::`vftable';
}
