void __cdecl sub_10479BD0()
{
  int v0; // eax

  v0 = unk_106F0E34;
  *(_DWORD *)byte_106F0E10 = &ConVar::`vftable';
  *(_DWORD *)&byte_106F0E10[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106F0E34 = 0;
  }
  *(_DWORD *)byte_106F0E10 = &ConCommandBase::`vftable';
}
