void __cdecl sub_10473380()
{
  int v0; // eax

  v0 = unk_106BB96C;
  *(_DWORD *)byte_106BB948 = &ConVar::`vftable';
  *(_DWORD *)&byte_106BB948[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106BB96C = 0;
  }
  *(_DWORD *)byte_106BB948 = &ConCommandBase::`vftable';
}
