void __cdecl sub_10477030()
{
  int v0; // eax

  v0 = unk_106DF3EC;
  *(_DWORD *)byte_106DF3C8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DF3C8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106DF3EC = 0;
  }
  *(_DWORD *)byte_106DF3C8 = &ConCommandBase::`vftable';
}
