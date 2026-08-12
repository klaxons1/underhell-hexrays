void __cdecl sub_10473370()
{
  int v0; // eax

  v0 = unk_106BB924;
  *(_DWORD *)byte_106BB900 = &ConVar::`vftable';
  *(_DWORD *)&byte_106BB900[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106BB924 = 0;
  }
  *(_DWORD *)byte_106BB900 = &ConCommandBase::`vftable';
}
