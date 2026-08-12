void __cdecl sub_10479840()
{
  int v0; // eax

  v0 = unk_106EFF04;
  *(_DWORD *)byte_106EFEE0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EFEE0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EFF04 = 0;
  }
  *(_DWORD *)byte_106EFEE0 = &ConCommandBase::`vftable';
}
