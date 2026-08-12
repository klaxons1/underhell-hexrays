void __cdecl sub_10472560()
{
  int v0; // eax

  v0 = unk_106B8324;
  *(_DWORD *)byte_106B8300 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B8300[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B8324 = 0;
  }
  *(_DWORD *)byte_106B8300 = &ConCommandBase::`vftable';
}
