void __cdecl sub_10472290()
{
  int v0; // eax

  v0 = unk_106B7274;
  *(_DWORD *)byte_106B7250 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B7250[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B7274 = 0;
  }
  *(_DWORD *)byte_106B7250 = &ConCommandBase::`vftable';
}
