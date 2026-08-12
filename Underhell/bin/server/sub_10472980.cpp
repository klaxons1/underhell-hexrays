void __cdecl sub_10472980()
{
  int v0; // eax

  v0 = unk_106B8D64;
  *(_DWORD *)byte_106B8D40 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B8D40[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B8D64 = 0;
  }
  *(_DWORD *)byte_106B8D40 = &ConCommandBase::`vftable';
}
