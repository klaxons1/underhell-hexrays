void __cdecl sub_10472B50()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106B9618[36];
  *(_DWORD *)byte_106B9618 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B9618[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106B9618[36] = 0;
  }
  *(_DWORD *)byte_106B9618 = &ConCommandBase::`vftable';
}
