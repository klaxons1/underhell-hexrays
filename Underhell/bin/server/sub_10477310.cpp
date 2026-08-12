void __cdecl sub_10477310()
{
  int v0; // eax

  v0 = unk_106E0814;
  *(_DWORD *)byte_106E07F0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E07F0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E0814 = 0;
  }
  *(_DWORD *)byte_106E07F0 = &ConCommandBase::`vftable';
}
