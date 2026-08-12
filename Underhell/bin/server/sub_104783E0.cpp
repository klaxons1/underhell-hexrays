void __cdecl sub_104783E0()
{
  int v0; // eax

  v0 = unk_106E89B4;
  *(_DWORD *)byte_106E8990 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E8990[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E89B4 = 0;
  }
  *(_DWORD *)byte_106E8990 = &ConCommandBase::`vftable';
}
