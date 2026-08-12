void __cdecl sub_10472DF0()
{
  int v0; // eax

  v0 = unk_106BA22C;
  *(_DWORD *)byte_106BA208 = &ConVar::`vftable';
  *(_DWORD *)&byte_106BA208[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106BA22C = 0;
  }
  *(_DWORD *)byte_106BA208 = &ConCommandBase::`vftable';
}
