void __cdecl sub_1046E6C0()
{
  int v0; // eax

  v0 = unk_106900B4;
  *(_DWORD *)byte_10690090 = &ConVar::`vftable';
  *(_DWORD *)&byte_10690090[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106900B4 = 0;
  }
  *(_DWORD *)byte_10690090 = &ConCommandBase::`vftable';
}
