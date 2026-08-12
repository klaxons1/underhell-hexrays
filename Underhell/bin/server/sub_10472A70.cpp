void __cdecl sub_10472A70()
{
  int v0; // eax

  v0 = unk_106B91C4;
  *(_DWORD *)byte_106B91A0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B91A0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B91C4 = 0;
  }
  *(_DWORD *)byte_106B91A0 = &ConCommandBase::`vftable';
}
