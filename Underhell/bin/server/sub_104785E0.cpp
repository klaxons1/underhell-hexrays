void __cdecl sub_104785E0()
{
  int v0; // eax

  v0 = unk_106E92B4;
  *(_DWORD *)byte_106E9290 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E9290[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E92B4 = 0;
  }
  *(_DWORD *)byte_106E9290 = &ConCommandBase::`vftable';
}
