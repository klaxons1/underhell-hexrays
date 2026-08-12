void __cdecl sub_104733C0()
{
  int v0; // eax

  v0 = unk_106BBA8C;
  *(_DWORD *)byte_106BBA68 = &ConVar::`vftable';
  *(_DWORD *)&byte_106BBA68[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106BBA8C = 0;
  }
  *(_DWORD *)byte_106BBA68 = &ConCommandBase::`vftable';
}
