void __cdecl sub_1046F720()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_10695550[36];
  *(_DWORD *)byte_10695550 = &ConVar::`vftable';
  *(_DWORD *)&byte_10695550[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_10695550[36] = 0;
  }
  *(_DWORD *)byte_10695550 = &ConCommandBase::`vftable';
}
