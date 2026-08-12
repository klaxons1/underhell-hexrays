void __cdecl sub_10475290()
{
  int v0; // eax

  v0 = unk_106D17A4;
  *(_DWORD *)byte_106D1780 = &ConVar::`vftable';
  *(_DWORD *)&byte_106D1780[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106D17A4 = 0;
  }
  *(_DWORD *)byte_106D1780 = &ConCommandBase::`vftable';
}
