void __cdecl sub_104716B0()
{
  int v0; // eax

  v0 = unk_106B2EF4;
  *(_DWORD *)byte_106B2ED0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B2ED0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B2EF4 = 0;
  }
  *(_DWORD *)byte_106B2ED0 = &ConCommandBase::`vftable';
}
