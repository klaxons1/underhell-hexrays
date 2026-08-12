void __cdecl sub_104777B0()
{
  int v0; // eax

  v0 = unk_106E2B74;
  *(_DWORD *)byte_106E2B50 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E2B50[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E2B74 = 0;
  }
  *(_DWORD *)byte_106E2B50 = &ConCommandBase::`vftable';
}
