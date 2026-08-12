void __cdecl sub_10472390()
{
  int v0; // eax

  v0 = unk_106B76F4;
  *(_DWORD *)byte_106B76D0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B76D0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B76F4 = 0;
  }
  *(_DWORD *)byte_106B76D0 = &ConCommandBase::`vftable';
}
