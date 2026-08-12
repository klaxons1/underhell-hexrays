void __cdecl sub_104710C0()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106B0540[36];
  *(_DWORD *)byte_106B0540 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B0540[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106B0540[36] = 0;
  }
  *(_DWORD *)byte_106B0540 = &ConCommandBase::`vftable';
}
