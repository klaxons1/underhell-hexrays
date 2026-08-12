void __cdecl sub_104710A0()
{
  int v0; // eax

  v0 = unk_106B04D4;
  *(_DWORD *)byte_106B04B0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B04B0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B04D4 = 0;
  }
  *(_DWORD *)byte_106B04B0 = &ConCommandBase::`vftable';
}
