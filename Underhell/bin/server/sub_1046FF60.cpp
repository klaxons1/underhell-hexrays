void __cdecl sub_1046FF60()
{
  int v0; // eax

  v0 = unk_10698AF4;
  *(_DWORD *)byte_10698AD0 = &ConVar::`vftable';
  *(_DWORD *)&byte_10698AD0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_10698AF4 = 0;
  }
  *(_DWORD *)byte_10698AD0 = &ConCommandBase::`vftable';
}
