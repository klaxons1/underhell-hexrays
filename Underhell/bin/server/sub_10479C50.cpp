void __cdecl sub_10479C50()
{
  int v0; // eax

  v0 = unk_106F0F6C;
  *(_DWORD *)byte_106F0F48 = &ConVar::`vftable';
  *(_DWORD *)&byte_106F0F48[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106F0F6C = 0;
  }
  *(_DWORD *)byte_106F0F48 = &ConCommandBase::`vftable';
}
