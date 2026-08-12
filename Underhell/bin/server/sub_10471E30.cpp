void __cdecl sub_10471E30()
{
  int v0; // eax

  v0 = unk_106B5CB4;
  *(_DWORD *)byte_106B5C90 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B5C90[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B5CB4 = 0;
  }
  *(_DWORD *)byte_106B5C90 = &ConCommandBase::`vftable';
}
