void __cdecl sub_10472B20()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106B9540[36];
  *(_DWORD *)byte_106B9540 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B9540[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106B9540[36] = 0;
  }
  *(_DWORD *)byte_106B9540 = &ConCommandBase::`vftable';
}
