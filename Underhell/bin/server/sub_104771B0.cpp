void __cdecl sub_104771B0()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106DFA88[36];
  *(_DWORD *)byte_106DFA88 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DFA88[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106DFA88[36] = 0;
  }
  *(_DWORD *)byte_106DFA88 = &ConCommandBase::`vftable';
}
