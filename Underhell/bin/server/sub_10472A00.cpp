void __cdecl sub_10472A00()
{
  int v0; // eax

  v0 = unk_106B8F7C;
  *(_DWORD *)byte_106B8F58 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B8F58[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B8F7C = 0;
  }
  *(_DWORD *)byte_106B8F58 = &ConCommandBase::`vftable';
}
