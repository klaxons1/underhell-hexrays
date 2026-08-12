void __cdecl sub_10472240()
{
  int v0; // eax

  v0 = unk_106B710C;
  *(_DWORD *)byte_106B70E8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B70E8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B710C = 0;
  }
  *(_DWORD *)byte_106B70E8 = &ConCommandBase::`vftable';
}
