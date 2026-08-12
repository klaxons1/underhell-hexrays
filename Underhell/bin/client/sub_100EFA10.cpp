int __thiscall sub_100EFA10(int this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // edi
  int result; // eax
  unsigned __int16 i; // di
  int v7; // ecx
  int j; // edi
  int v9; // ecx

  v2 = *(unsigned __int16 *)(this + 52);
  if ( v2 != 0xFFFF )
  {
    do
    {
      v3 = *(_DWORD *)(this + 40);
      v4 = *(unsigned __int16 *)(v3 + 8 * (unsigned __int16)v2 + 6);
      sub_100EF970((_DWORD *)this, *(_DWORD *)(v3 + 8 * (unsigned __int16)v2));
      LOWORD(v2) = v4;
    }
    while ( v4 != 0xFFFF );
  }
  sub_100ED8D0((_DWORD *)this);
  result = sub_100EDD20(this + 180);
  for ( i = result; (unsigned __int16)result != 0xFFFF; i = result )
  {
    v7 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 184) + 16 * i + 12) + 24);
    if ( v7 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 52))(v7);
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 184) + 16 * i + 12) + 24) = 0;
    result = sub_100EDDF0((_DWORD *)(this + 180), i);
  }
  for ( j = *(_DWORD *)(this + 172) - 1; j >= 0; **(_DWORD **)(*(_DWORD *)(this + 160) + 4 * j + 4) = 0 )
  {
    result = *(_DWORD *)(this + 160);
    v9 = **(_DWORD **)(result + 4 * j);
    if ( v9 )
      result = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 52))(v9);
    --j;
  }
  return result;
}
