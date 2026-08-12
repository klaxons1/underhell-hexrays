void __cdecl sub_10471950()
{
  int v0; // eax

  v0 = unk_106B390C;
  *(_DWORD *)byte_106B38E8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B38E8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B390C = 0;
  }
  *(_DWORD *)byte_106B38E8 = &ConCommandBase::`vftable';
}
