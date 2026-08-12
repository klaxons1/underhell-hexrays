void __cdecl sub_10477B90()
{
  int v0; // eax

  v0 = unk_106E5124;
  *(_DWORD *)byte_106E5100 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E5100[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E5124 = 0;
  }
  *(_DWORD *)byte_106E5100 = &ConCommandBase::`vftable';
}
