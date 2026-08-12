void __cdecl sub_10475380()
{
  int v0; // eax

  v0 = unk_106D1BBC;
  *(_DWORD *)byte_106D1B98 = &ConVar::`vftable';
  *(_DWORD *)&byte_106D1B98[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106D1BBC = 0;
  }
  *(_DWORD *)byte_106D1B98 = &ConCommandBase::`vftable';
}
