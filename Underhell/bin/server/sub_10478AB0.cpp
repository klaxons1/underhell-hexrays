void __cdecl sub_10478AB0()
{
  int v0; // eax

  v0 = unk_106EAEAC;
  *(_DWORD *)byte_106EAE88 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EAE88[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EAEAC = 0;
  }
  *(_DWORD *)byte_106EAE88 = &ConCommandBase::`vftable';
}
