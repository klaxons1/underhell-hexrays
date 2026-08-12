void __cdecl sub_104700F0()
{
  int v0; // eax

  v0 = unk_1069920C;
  *(_DWORD *)byte_106991E8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106991E8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_1069920C = 0;
  }
  *(_DWORD *)byte_106991E8 = &ConCommandBase::`vftable';
}
