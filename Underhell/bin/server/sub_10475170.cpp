void __cdecl sub_10475170()
{
  int v0; // eax

  v0 = unk_106D12B4;
  *(_DWORD *)byte_106D1290 = &ConVar::`vftable';
  *(_DWORD *)&byte_106D1290[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106D12B4 = 0;
  }
  *(_DWORD *)byte_106D1290 = &ConCommandBase::`vftable';
}
