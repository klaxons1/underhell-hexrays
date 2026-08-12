void __cdecl sub_1046EC20()
{
  int v0; // eax

  v0 = unk_1069212C;
  *(_DWORD *)byte_10692108 = &ConVar::`vftable';
  *(_DWORD *)&byte_10692108[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_1069212C = 0;
  }
  *(_DWORD *)byte_10692108 = &ConCommandBase::`vftable';
}
