void __cdecl sub_10478BE0()
{
  int v0; // eax

  v0 = unk_106EB404;
  *(_DWORD *)byte_106EB3E0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EB3E0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EB404 = 0;
  }
  *(_DWORD *)byte_106EB3E0 = &ConCommandBase::`vftable';
}
