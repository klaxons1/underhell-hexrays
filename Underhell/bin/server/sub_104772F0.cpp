void __cdecl sub_104772F0()
{
  int v0; // eax

  v0 = unk_106E0784;
  *(_DWORD *)byte_106E0760 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E0760[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E0784 = 0;
  }
  *(_DWORD *)byte_106E0760 = &ConCommandBase::`vftable';
}
