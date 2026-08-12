void __cdecl sub_10478AF0()
{
  int v0; // eax

  v0 = unk_106EAFCC;
  *(_DWORD *)byte_106EAFA8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EAFA8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EAFCC = 0;
  }
  *(_DWORD *)byte_106EAFA8 = &ConCommandBase::`vftable';
}
