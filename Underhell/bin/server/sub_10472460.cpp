void __cdecl sub_10472460()
{
  int v0; // eax

  v0 = unk_106B7A84;
  *(_DWORD *)byte_106B7A60 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B7A60[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B7A84 = 0;
  }
  *(_DWORD *)byte_106B7A60 = &ConCommandBase::`vftable';
}
