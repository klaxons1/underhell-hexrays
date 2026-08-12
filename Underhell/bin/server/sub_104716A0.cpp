void __cdecl sub_104716A0()
{
  int v0; // eax

  v0 = unk_106B2EAC;
  *(_DWORD *)byte_106B2E88 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B2E88[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B2EAC = 0;
  }
  *(_DWORD *)byte_106B2E88 = &ConCommandBase::`vftable';
}
