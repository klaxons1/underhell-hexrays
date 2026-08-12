void __cdecl sub_10478AA0()
{
  int v0; // eax

  v0 = unk_106EAE64;
  *(_DWORD *)byte_106EAE40 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EAE40[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EAE64 = 0;
  }
  *(_DWORD *)byte_106EAE40 = &ConCommandBase::`vftable';
}
