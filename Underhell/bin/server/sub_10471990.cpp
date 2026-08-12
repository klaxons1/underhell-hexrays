void __cdecl sub_10471990()
{
  int v0; // eax

  v0 = unk_106B3CB4;
  *(_DWORD *)byte_106B3C90 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B3C90[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B3CB4 = 0;
  }
  *(_DWORD *)byte_106B3C90 = &ConCommandBase::`vftable';
}
