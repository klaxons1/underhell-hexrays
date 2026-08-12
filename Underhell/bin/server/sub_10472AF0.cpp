void __cdecl sub_10472AF0()
{
  int v0; // eax

  v0 = unk_106B9464;
  *(_DWORD *)byte_106B9440 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B9440[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B9464 = 0;
  }
  *(_DWORD *)byte_106B9440 = &ConCommandBase::`vftable';
}
