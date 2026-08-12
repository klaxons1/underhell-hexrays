void __cdecl sub_104749D0()
{
  int v0; // eax

  v0 = unk_106CE7AC;
  *(_DWORD *)byte_106CE788 = &ConVar::`vftable';
  *(_DWORD *)&byte_106CE788[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106CE7AC = 0;
  }
  *(_DWORD *)byte_106CE788 = &ConCommandBase::`vftable';
}
