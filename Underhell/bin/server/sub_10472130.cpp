void __cdecl sub_10472130()
{
  int v0; // eax

  v0 = unk_106B6E2C;
  *(_DWORD *)byte_106B6E08 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B6E08[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B6E2C = 0;
  }
  *(_DWORD *)byte_106B6E08 = &ConCommandBase::`vftable';
}
