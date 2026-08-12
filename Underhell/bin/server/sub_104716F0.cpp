void __cdecl sub_104716F0()
{
  int v0; // eax

  v0 = unk_106B3014;
  *(_DWORD *)byte_106B2FF0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B2FF0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B3014 = 0;
  }
  *(_DWORD *)byte_106B2FF0 = &ConCommandBase::`vftable';
}
