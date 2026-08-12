void __cdecl sub_104711B0()
{
  int v0; // eax

  v0 = unk_106B0D3C;
  *(_DWORD *)byte_106B0D18 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B0D18[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B0D3C = 0;
  }
  *(_DWORD *)byte_106B0D18 = &ConCommandBase::`vftable';
}
