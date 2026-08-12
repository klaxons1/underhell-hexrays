void __cdecl sub_10475180()
{
  int v0; // eax

  v0 = unk_106D12FC;
  *(_DWORD *)byte_106D12D8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106D12D8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106D12FC = 0;
  }
  *(_DWORD *)byte_106D12D8 = &ConCommandBase::`vftable';
}
