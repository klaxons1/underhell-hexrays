void __cdecl sub_10472580()
{
  int v0; // eax

  v0 = *(_DWORD *)&algn_106B8398[4];
  *(_DWORD *)byte_106B8378 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B8378[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&algn_106B8398[4] = 0;
  }
  *(_DWORD *)byte_106B8378 = &ConCommandBase::`vftable';
}
