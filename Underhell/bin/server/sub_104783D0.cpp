void __cdecl sub_104783D0()
{
  int v0; // eax

  v0 = unk_106E896C;
  *(_DWORD *)byte_106E8948 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E8948[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E896C = 0;
  }
  *(_DWORD *)byte_106E8948 = &ConCommandBase::`vftable';
}
