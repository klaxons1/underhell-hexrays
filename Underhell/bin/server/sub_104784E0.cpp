void __cdecl sub_104784E0()
{
  int v0; // eax

  v0 = unk_106E8E34;
  *(_DWORD *)byte_106E8E10 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E8E10[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E8E34 = 0;
  }
  *(_DWORD *)byte_106E8E10 = &ConCommandBase::`vftable';
}
