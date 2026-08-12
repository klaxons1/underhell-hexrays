void __cdecl sub_10479320()
{
  int v0; // eax

  v0 = unk_106EE744;
  *(_DWORD *)byte_106EE720 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EE720[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EE744 = 0;
  }
  *(_DWORD *)byte_106EE720 = &ConCommandBase::`vftable';
}
