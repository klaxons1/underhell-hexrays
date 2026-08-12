void __cdecl sub_104749C0()
{
  int v0; // eax

  v0 = unk_106CE764;
  *(_DWORD *)byte_106CE740 = &ConVar::`vftable';
  *(_DWORD *)&byte_106CE740[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106CE764 = 0;
  }
  *(_DWORD *)byte_106CE740 = &ConCommandBase::`vftable';
}
