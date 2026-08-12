void __cdecl sub_104783C0()
{
  int v0; // eax

  v0 = unk_106E8924;
  *(_DWORD *)byte_106E8900 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E8900[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E8924 = 0;
  }
  *(_DWORD *)byte_106E8900 = &ConCommandBase::`vftable';
}
