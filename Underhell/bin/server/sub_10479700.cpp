void __cdecl sub_10479700()
{
  int v0; // eax

  v0 = unk_106EFA34;
  *(_DWORD *)byte_106EFA10 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EFA10[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EFA34 = 0;
  }
  *(_DWORD *)byte_106EFA10 = &ConCommandBase::`vftable';
}
