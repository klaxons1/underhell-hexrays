void __cdecl sub_10472D60()
{
  int v0; // eax

  v0 = unk_106B9F14;
  *(_DWORD *)byte_106B9EF0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B9EF0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B9F14 = 0;
  }
  *(_DWORD *)byte_106B9EF0 = &ConCommandBase::`vftable';
}
