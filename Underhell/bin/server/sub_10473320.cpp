void __cdecl sub_10473320()
{
  int v0; // eax

  v0 = unk_106BB7BC;
  *(_DWORD *)byte_106BB798 = &ConVar::`vftable';
  *(_DWORD *)&byte_106BB798[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106BB7BC = 0;
  }
  *(_DWORD *)byte_106BB798 = &ConCommandBase::`vftable';
}
