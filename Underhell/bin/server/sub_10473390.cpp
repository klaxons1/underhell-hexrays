void __cdecl sub_10473390()
{
  int v0; // eax

  v0 = unk_106BB9B4;
  *(_DWORD *)byte_106BB990 = &ConVar::`vftable';
  *(_DWORD *)&byte_106BB990[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106BB9B4 = 0;
  }
  *(_DWORD *)byte_106BB990 = &ConCommandBase::`vftable';
}
