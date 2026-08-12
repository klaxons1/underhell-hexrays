void __cdecl sub_104785A0()
{
  int v0; // eax

  v0 = unk_106E9194;
  *(_DWORD *)byte_106E9170 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E9170[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E9194 = 0;
  }
  *(_DWORD *)byte_106E9170 = &ConCommandBase::`vftable';
}
