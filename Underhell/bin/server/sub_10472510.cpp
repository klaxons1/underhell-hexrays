void __cdecl sub_10472510()
{
  int v0; // eax

  v0 = unk_106B7C0C;
  *(_DWORD *)byte_106B7BE8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B7BE8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B7C0C = 0;
  }
  *(_DWORD *)byte_106B7BE8 = &ConCommandBase::`vftable';
}
