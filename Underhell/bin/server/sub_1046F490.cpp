void __cdecl sub_1046F490()
{
  int v0; // eax

  v0 = unk_1069422C;
  *(_DWORD *)byte_10694208 = &ConVar::`vftable';
  *(_DWORD *)&byte_10694208[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_1069422C = 0;
  }
  *(_DWORD *)byte_10694208 = &ConCommandBase::`vftable';
}
