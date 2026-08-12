void __cdecl sub_104732D0()
{
  int v0; // eax

  v0 = unk_106BB654;
  *(_DWORD *)byte_106BB630 = &ConVar::`vftable';
  *(_DWORD *)&byte_106BB630[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106BB654 = 0;
  }
  *(_DWORD *)byte_106BB630 = &ConCommandBase::`vftable';
}
