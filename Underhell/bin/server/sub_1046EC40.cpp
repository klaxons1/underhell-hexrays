void __cdecl sub_1046EC40()
{
  int v0; // eax

  v0 = unk_106921BC;
  *(_DWORD *)byte_10692198 = &ConVar::`vftable';
  *(_DWORD *)&byte_10692198[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106921BC = 0;
  }
  *(_DWORD *)byte_10692198 = &ConCommandBase::`vftable';
}
