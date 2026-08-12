void __cdecl sub_104723E0()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106B7860[36];
  *(_DWORD *)byte_106B7860 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B7860[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106B7860[36] = 0;
  }
  *(_DWORD *)byte_106B7860 = &ConCommandBase::`vftable';
}
