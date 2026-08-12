void __cdecl sub_10477510()
{
  int v0; // eax

  v0 = unk_106E177C;
  *(_DWORD *)byte_106E1758 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E1758[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E177C = 0;
  }
  *(_DWORD *)byte_106E1758 = &ConCommandBase::`vftable';
}
