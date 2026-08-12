void __cdecl sub_1046E970()
{
  int v0; // eax

  v0 = unk_10690BAC;
  *(_DWORD *)byte_10690B88 = &ConVar::`vftable';
  *(_DWORD *)&byte_10690B88[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_10690BAC = 0;
  }
  *(_DWORD *)byte_10690B88 = &ConCommandBase::`vftable';
}
