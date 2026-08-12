void __cdecl sub_104782A0()
{
  int v0; // eax

  v0 = unk_106E828C;
  *(_DWORD *)byte_106E8268 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E8268[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E828C = 0;
  }
  *(_DWORD *)byte_106E8268 = &ConCommandBase::`vftable';
}
