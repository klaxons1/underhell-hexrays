void __cdecl sub_10473400()
{
  int v0; // eax

  v0 = unk_106BBBAC;
  *(_DWORD *)byte_106BBB88 = &ConVar::`vftable';
  *(_DWORD *)&byte_106BBB88[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106BBBAC = 0;
  }
  *(_DWORD *)byte_106BBB88 = &ConCommandBase::`vftable';
}
