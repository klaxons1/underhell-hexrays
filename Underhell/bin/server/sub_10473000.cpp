void __cdecl sub_10473000()
{
  int v0; // eax

  v0 = unk_106BA76C;
  *(_DWORD *)byte_106BA748 = &ConVar::`vftable';
  *(_DWORD *)&byte_106BA748[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106BA76C = 0;
  }
  *(_DWORD *)byte_106BA748 = &ConCommandBase::`vftable';
}
