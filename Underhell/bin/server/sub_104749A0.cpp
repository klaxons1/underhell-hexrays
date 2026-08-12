void __cdecl sub_104749A0()
{
  int v0; // eax

  v0 = unk_106CE6D4;
  *(_DWORD *)byte_106CE6B0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106CE6B0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106CE6D4 = 0;
  }
  *(_DWORD *)byte_106CE6B0 = &ConCommandBase::`vftable';
}
