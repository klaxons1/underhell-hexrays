void __cdecl sub_104733A0()
{
  int v0; // eax

  v0 = unk_106BB9FC;
  *(_DWORD *)byte_106BB9D8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106BB9D8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106BB9FC = 0;
  }
  *(_DWORD *)byte_106BB9D8 = &ConCommandBase::`vftable';
}
