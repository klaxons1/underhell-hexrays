void __cdecl sub_10478BC0()
{
  int v0; // eax

  v0 = unk_106EB374;
  *(_DWORD *)byte_106EB350 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EB350[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EB374 = 0;
  }
  *(_DWORD *)byte_106EB350 = &ConCommandBase::`vftable';
}
