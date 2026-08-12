void __cdecl sub_104771A0()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106DFA40[36];
  *(_DWORD *)byte_106DFA40 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DFA40[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106DFA40[36] = 0;
  }
  *(_DWORD *)byte_106DFA40 = &ConCommandBase::`vftable';
}
