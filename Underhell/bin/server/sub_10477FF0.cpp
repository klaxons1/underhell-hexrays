void __cdecl sub_10477FF0()
{
  int v0; // eax

  v0 = unk_106E678C;
  *(_DWORD *)byte_106E6768 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E6768[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E678C = 0;
  }
  *(_DWORD *)byte_106E6768 = &ConCommandBase::`vftable';
}
