void __cdecl sub_1046FF10()
{
  int v0; // eax

  v0 = unk_1069858C;
  *(_DWORD *)byte_10698568 = &ConVar::`vftable';
  *(_DWORD *)&byte_10698568[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_1069858C = 0;
  }
  *(_DWORD *)byte_10698568 = &ConCommandBase::`vftable';
}
