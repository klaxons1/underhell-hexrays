void __cdecl sub_104770F0()
{
  int v0; // eax

  v0 = unk_106DF74C;
  *(_DWORD *)byte_106DF728 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DF728[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106DF74C = 0;
  }
  *(_DWORD *)byte_106DF728 = &ConCommandBase::`vftable';
}
