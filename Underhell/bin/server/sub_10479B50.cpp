void __cdecl sub_10479B50()
{
  int v0; // eax

  v0 = unk_106F0B14;
  *(_DWORD *)byte_106F0AF0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106F0AF0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106F0B14 = 0;
  }
  *(_DWORD *)byte_106F0AF0 = &ConCommandBase::`vftable';
}
