void __cdecl sub_10479820()
{
  int v0; // eax

  v0 = unk_106EFE74;
  *(_DWORD *)byte_106EFE50 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EFE50[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EFE74 = 0;
  }
  *(_DWORD *)byte_106EFE50 = &ConCommandBase::`vftable';
}
