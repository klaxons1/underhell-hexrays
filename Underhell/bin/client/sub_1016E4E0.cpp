int __thiscall sub_1016E4E0(unsigned __int16 *this, int a2)
{
  int v2; // eax
  int v3; // esi
  int v4; // edi
  int v5; // ecx
  int v6; // eax
  int v7; // edx
  int v8; // eax

  v2 = this[6];
  v3 = 0;
  v4 = 0;
  if ( v2 == 0xFFFF )
    return 0;
  v5 = *(_DWORD *)this;
  while ( 1 )
  {
    v6 = 3 * (unsigned __int16)v2;
    v7 = *(_DWORD *)(v5 + 4 * v6);
    v8 = v5 + 4 * v6;
    if ( v7 != v3 )
    {
      v4 = *(_DWORD *)(v8 + 4);
      v3 = v7;
    }
    if ( *(_DWORD *)(v8 + 4) == a2 )
      break;
    v2 = *(unsigned __int16 *)(v8 + 10);
    if ( v2 == 0xFFFF )
      return 0;
  }
  if ( !v4 )
    return 0;
  else
    return (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 36))(v4);
}
