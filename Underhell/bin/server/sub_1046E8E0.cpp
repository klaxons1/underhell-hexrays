void __cdecl sub_1046E8E0()
{
  int v0; // eax

  v0 = unk_10690924;
  *(_DWORD *)byte_10690900 = &ConVar::`vftable';
  *(_DWORD *)&byte_10690900[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_10690924 = 0;
  }
  *(_DWORD *)byte_10690900 = &ConCommandBase::`vftable';
}
