void __cdecl sub_104783A0()
{
  int v0; // eax

  v0 = unk_106E8894;
  *(_DWORD *)byte_106E8870 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E8870[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E8894 = 0;
  }
  *(_DWORD *)byte_106E8870 = &ConCommandBase::`vftable';
}
