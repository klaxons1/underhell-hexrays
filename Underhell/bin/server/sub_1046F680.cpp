void __cdecl sub_1046F680()
{
  int v0; // eax

  v0 = unk_106953AC;
  *(_DWORD *)byte_10695388 = &ConVar::`vftable';
  *(_DWORD *)&byte_10695388[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106953AC = 0;
  }
  *(_DWORD *)byte_10695388 = &ConCommandBase::`vftable';
}
