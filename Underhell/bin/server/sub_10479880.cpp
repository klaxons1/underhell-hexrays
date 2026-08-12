void __cdecl sub_10479880()
{
  int v0; // eax

  v0 = unk_106F0024;
  *(_DWORD *)byte_106F0000 = &ConVar::`vftable';
  *(_DWORD *)&byte_106F0000[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106F0024 = 0;
  }
  *(_DWORD *)byte_106F0000 = &ConCommandBase::`vftable';
}
