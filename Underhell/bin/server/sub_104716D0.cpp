void __cdecl sub_104716D0()
{
  int v0; // eax

  v0 = unk_106B2F84;
  *(_DWORD *)byte_106B2F60 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B2F60[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B2F84 = 0;
  }
  *(_DWORD *)byte_106B2F60 = &ConCommandBase::`vftable';
}
