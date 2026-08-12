void __cdecl sub_1046E990()
{
  int v0; // eax

  v0 = unk_10690C3C;
  *(_DWORD *)byte_10690C18 = &ConVar::`vftable';
  *(_DWORD *)&byte_10690C18[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_10690C3C = 0;
  }
  *(_DWORD *)byte_10690C18 = &ConCommandBase::`vftable';
}
