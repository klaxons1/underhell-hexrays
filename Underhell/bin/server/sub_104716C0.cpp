void __cdecl sub_104716C0()
{
  int v0; // eax

  v0 = unk_106B2F3C;
  *(_DWORD *)byte_106B2F18 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B2F18[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B2F3C = 0;
  }
  *(_DWORD *)byte_106B2F18 = &ConCommandBase::`vftable';
}
