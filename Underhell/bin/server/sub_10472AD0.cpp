void __cdecl sub_10472AD0()
{
  int v0; // eax

  v0 = unk_106B9374;
  *(_DWORD *)byte_106B9350 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B9350[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B9374 = 0;
  }
  *(_DWORD *)byte_106B9350 = &ConCommandBase::`vftable';
}
