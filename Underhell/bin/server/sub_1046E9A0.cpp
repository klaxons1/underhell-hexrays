void __cdecl sub_1046E9A0()
{
  int v0; // eax

  v0 = unk_10690C84;
  *(_DWORD *)byte_10690C60 = &ConVar::`vftable';
  *(_DWORD *)&byte_10690C60[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_10690C84 = 0;
  }
  *(_DWORD *)byte_10690C60 = &ConCommandBase::`vftable';
}
