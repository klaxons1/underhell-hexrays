void __cdecl sub_10479B90()
{
  int v0; // eax

  v0 = unk_106F0C34;
  *(_DWORD *)byte_106F0C10 = &ConVar::`vftable';
  *(_DWORD *)&byte_106F0C10[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106F0C34 = 0;
  }
  *(_DWORD *)byte_106F0C10 = &ConCommandBase::`vftable';
}
