void __cdecl sub_10479890()
{
  int v0; // eax

  v0 = unk_106F006C;
  *(_DWORD *)byte_106F0048 = &ConVar::`vftable';
  *(_DWORD *)&byte_106F0048[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106F006C = 0;
  }
  *(_DWORD *)byte_106F0048 = &ConCommandBase::`vftable';
}
