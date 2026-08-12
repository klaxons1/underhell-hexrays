void __cdecl sub_10477DA0()
{
  int v0; // eax

  v0 = unk_106E5C34;
  *(_DWORD *)byte_106E5C10 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E5C10[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E5C34 = 0;
  }
  *(_DWORD *)byte_106E5C10 = &ConCommandBase::`vftable';
}
