void __cdecl sub_10472330()
{
  int v0; // eax

  v0 = unk_106B7544;
  *(_DWORD *)byte_106B7520 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B7520[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B7544 = 0;
  }
  *(_DWORD *)byte_106B7520 = &ConCommandBase::`vftable';
}
