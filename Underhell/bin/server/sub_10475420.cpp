void __cdecl sub_10475420()
{
  int v0; // eax

  v0 = unk_106D1E6C;
  *(_DWORD *)byte_106D1E48 = &ConVar::`vftable';
  *(_DWORD *)&byte_106D1E48[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106D1E6C = 0;
  }
  *(_DWORD *)byte_106D1E48 = &ConCommandBase::`vftable';
}
