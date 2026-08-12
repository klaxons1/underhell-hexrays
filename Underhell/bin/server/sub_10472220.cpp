void __cdecl sub_10472220()
{
  int v0; // eax

  v0 = unk_106B707C;
  *(_DWORD *)byte_106B7058 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B7058[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B707C = 0;
  }
  *(_DWORD *)byte_106B7058 = &ConCommandBase::`vftable';
}
