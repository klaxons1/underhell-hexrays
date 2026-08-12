void __cdecl sub_104766A0()
{
  int v0; // eax

  v0 = unk_106DB6EC;
  *(_DWORD *)byte_106DB6C8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DB6C8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106DB6EC = 0;
  }
  *(_DWORD *)byte_106DB6C8 = &ConCommandBase::`vftable';
}
