void __cdecl sub_10475010()
{
  int v0; // eax

  v0 = unk_106D0C94;
  *(_DWORD *)byte_106D0C70 = &ConVar::`vftable';
  *(_DWORD *)&byte_106D0C70[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106D0C94 = 0;
  }
  *(_DWORD *)byte_106D0C70 = &ConCommandBase::`vftable';
}
