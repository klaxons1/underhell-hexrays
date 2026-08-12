void __cdecl sub_10472B30()
{
  int v0; // eax

  v0 = unk_106B95AC;
  *(_DWORD *)byte_106B9588 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B9588[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B95AC = 0;
  }
  *(_DWORD *)byte_106B9588 = &ConCommandBase::`vftable';
}
