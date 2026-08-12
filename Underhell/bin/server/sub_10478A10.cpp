void __cdecl sub_10478A10()
{
  int v0; // eax

  v0 = unk_106EAAD4;
  *(_DWORD *)byte_106EAAB0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EAAB0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EAAD4 = 0;
  }
  *(_DWORD *)byte_106EAAB0 = &ConCommandBase::`vftable';
}
