void __cdecl sub_104790A0()
{
  int v0; // eax

  v0 = unk_106ED254;
  *(_DWORD *)byte_106ED230 = &ConVar::`vftable';
  *(_DWORD *)&byte_106ED230[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106ED254 = 0;
  }
  *(_DWORD *)byte_106ED230 = &ConCommandBase::`vftable';
}
