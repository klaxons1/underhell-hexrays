void __cdecl sub_10479BE0()
{
  int v0; // eax

  v0 = unk_106F0E7C;
  *(_DWORD *)byte_106F0E58 = &ConVar::`vftable';
  *(_DWORD *)&byte_106F0E58[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106F0E7C = 0;
  }
  *(_DWORD *)byte_106F0E58 = &ConCommandBase::`vftable';
}
