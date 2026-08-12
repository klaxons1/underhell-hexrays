void __cdecl sub_104733D0()
{
  int v0; // eax

  v0 = unk_106BBAD4;
  *(_DWORD *)byte_106BBAB0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106BBAB0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106BBAD4 = 0;
  }
  *(_DWORD *)byte_106BBAB0 = &ConCommandBase::`vftable';
}
