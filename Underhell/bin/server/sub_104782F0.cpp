void __cdecl sub_104782F0()
{
  int v0; // eax

  v0 = unk_106E857C;
  *(_DWORD *)byte_106E8558 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E8558[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E857C = 0;
  }
  *(_DWORD *)byte_106E8558 = &ConCommandBase::`vftable';
}
