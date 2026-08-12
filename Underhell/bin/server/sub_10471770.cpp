void __cdecl sub_10471770()
{
  int v0; // eax

  v0 = unk_106B3314;
  *(_DWORD *)byte_106B32F0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B32F0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B3314 = 0;
  }
  *(_DWORD *)byte_106B32F0 = &ConCommandBase::`vftable';
}
