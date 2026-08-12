void __cdecl sub_104784A0()
{
  int v0; // eax

  v0 = unk_106E8D14;
  *(_DWORD *)byte_106E8CF0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E8CF0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E8D14 = 0;
  }
  *(_DWORD *)byte_106E8CF0 = &ConCommandBase::`vftable';
}
