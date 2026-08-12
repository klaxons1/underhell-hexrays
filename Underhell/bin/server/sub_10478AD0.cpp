void __cdecl sub_10478AD0()
{
  int v0; // eax

  v0 = unk_106EAF3C;
  *(_DWORD *)byte_106EAF18 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EAF18[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EAF3C = 0;
  }
  *(_DWORD *)byte_106EAF18 = &ConCommandBase::`vftable';
}
