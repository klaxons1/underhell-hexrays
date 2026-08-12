void __cdecl sub_104789A0()
{
  int v0; // eax

  v0 = unk_106EA754;
  *(_DWORD *)byte_106EA730 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EA730[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EA754 = 0;
  }
  *(_DWORD *)byte_106EA730 = &ConCommandBase::`vftable';
}
