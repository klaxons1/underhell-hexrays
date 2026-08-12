void __cdecl sub_10474F70()
{
  int v0; // eax

  v0 = unk_106D097C;
  *(_DWORD *)byte_106D0958 = &ConVar::`vftable';
  *(_DWORD *)&byte_106D0958[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106D097C = 0;
  }
  *(_DWORD *)byte_106D0958 = &ConCommandBase::`vftable';
}
