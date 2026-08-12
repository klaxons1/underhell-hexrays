void __cdecl sub_10479B10()
{
  int v0; // eax

  v0 = unk_106F09F4;
  *(_DWORD *)byte_106F09D0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106F09D0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106F09F4 = 0;
  }
  *(_DWORD *)byte_106F09D0 = &ConCommandBase::`vftable';
}
