void __cdecl sub_104733B0()
{
  int v0; // eax

  v0 = unk_106BBA44;
  *(_DWORD *)byte_106BBA20 = &ConVar::`vftable';
  *(_DWORD *)&byte_106BBA20[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106BBA44 = 0;
  }
  *(_DWORD *)byte_106BBA20 = &ConCommandBase::`vftable';
}
