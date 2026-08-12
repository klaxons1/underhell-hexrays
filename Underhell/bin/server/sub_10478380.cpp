void __cdecl sub_10478380()
{
  int v0; // eax

  v0 = unk_106E8804;
  *(_DWORD *)byte_106E87E0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E87E0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E8804 = 0;
  }
  *(_DWORD *)byte_106E87E0 = &ConCommandBase::`vftable';
}
