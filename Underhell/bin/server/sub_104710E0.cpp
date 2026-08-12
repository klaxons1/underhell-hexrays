void __cdecl sub_104710E0()
{
  int v0; // eax

  v0 = unk_106B05F4;
  *(_DWORD *)byte_106B05D0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B05D0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B05F4 = 0;
  }
  *(_DWORD *)byte_106B05D0 = &ConCommandBase::`vftable';
}
