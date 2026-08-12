void __cdecl sub_10472480()
{
  int v0; // eax

  v0 = unk_106B7B14;
  *(_DWORD *)byte_106B7AF0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B7AF0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B7B14 = 0;
  }
  *(_DWORD *)byte_106B7AF0 = &ConCommandBase::`vftable';
}
