void __cdecl sub_10479250()
{
  int v0; // eax

  v0 = unk_106EE264;
  *(_DWORD *)byte_106EE240 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EE240[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EE264 = 0;
  }
  *(_DWORD *)byte_106EE240 = &ConCommandBase::`vftable';
}
