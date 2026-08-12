void __cdecl sub_10478AE0()
{
  int v0; // eax

  v0 = unk_106EAF84;
  *(_DWORD *)byte_106EAF60 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EAF60[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EAF84 = 0;
  }
  *(_DWORD *)byte_106EAF60 = &ConCommandBase::`vftable';
}
