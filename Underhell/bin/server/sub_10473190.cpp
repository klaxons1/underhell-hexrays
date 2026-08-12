void __cdecl sub_10473190()
{
  int v0; // eax

  v0 = unk_106BB42C;
  *(_DWORD *)byte_106BB408 = &ConVar::`vftable';
  *(_DWORD *)&byte_106BB408[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106BB42C = 0;
  }
  *(_DWORD *)byte_106BB408 = &ConCommandBase::`vftable';
}
