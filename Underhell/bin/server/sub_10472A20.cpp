void __cdecl sub_10472A20()
{
  int v0; // eax

  v0 = unk_106B900C;
  *(_DWORD *)byte_106B8FE8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B8FE8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B900C = 0;
  }
  *(_DWORD *)byte_106B8FE8 = &ConCommandBase::`vftable';
}
