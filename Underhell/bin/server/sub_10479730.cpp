void __cdecl sub_10479730()
{
  int v0; // eax

  v0 = unk_106EFAFC;
  *(_DWORD *)byte_106EFAD8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EFAD8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EFAFC = 0;
  }
  *(_DWORD *)byte_106EFAD8 = &ConCommandBase::`vftable';
}
