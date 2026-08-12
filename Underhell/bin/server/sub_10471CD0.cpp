void __cdecl sub_10471CD0()
{
  int v0; // eax

  v0 = unk_106B5794;
  *(_DWORD *)byte_106B5770 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B5770[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B5794 = 0;
  }
  *(_DWORD *)byte_106B5770 = &ConCommandBase::`vftable';
}
