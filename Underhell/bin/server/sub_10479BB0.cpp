void __cdecl sub_10479BB0()
{
  int v0; // eax

  v0 = unk_106F0CC4;
  *(_DWORD *)byte_106F0CA0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106F0CA0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106F0CC4 = 0;
  }
  *(_DWORD *)byte_106F0CA0 = &ConCommandBase::`vftable';
}
