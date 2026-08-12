void __cdecl sub_1046FF50()
{
  int v0; // eax

  v0 = unk_10698AAC;
  *(_DWORD *)byte_10698A88 = &ConVar::`vftable';
  *(_DWORD *)&byte_10698A88[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_10698AAC = 0;
  }
  *(_DWORD *)byte_10698A88 = &ConCommandBase::`vftable';
}
