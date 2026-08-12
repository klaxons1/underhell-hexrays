void __cdecl sub_10477570()
{
  int v0; // eax

  v0 = unk_106E1CFC;
  *(_DWORD *)byte_106E1CD8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E1CD8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E1CFC = 0;
  }
  *(_DWORD *)byte_106E1CD8 = &ConCommandBase::`vftable';
}
