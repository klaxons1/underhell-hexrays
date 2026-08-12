int __thiscall sub_102744A0(_DWORD *this)
{
  _DWORD *v2; // eax
  int v3; // esi
  int v4; // edx
  int v5; // edi
  int v6; // ebp
  int v7; // eax
  _DWORD *v8; // eax
  int v9; // eax
  bool v10; // zf
  int v11; // eax
  int v13; // [esp+8h] [ebp-Ch]
  int v14; // [esp+10h] [ebp-4h]

  v2 = (_DWORD *)this[67];
  v3 = this[53];
  v13 = 1;
  if ( v3 < 0 )
    return 1;
  if ( v3 >= v2[54] )
    return 1;
  if ( v3 > v2[60] )
    return 1;
  v4 = v2[53];
  if ( *(_DWORD *)(v4 + 12 * v3 + 4) == v3 && *(_DWORD *)(v4 + 12 * v3 + 8) != v3 )
    return 1;
  v14 = *(_DWORD *)(v4 + 12 * v3);
  if ( !v14 )
    return 1;
  v5 = 0;
  v6 = *(_DWORD *)(sub_10273C00(this) + 232);
  if ( v6 > 0 )
  {
    do
    {
      if ( *(_DWORD **)(*(_DWORD *)(sub_10273C00(this) + 220) + 4 * v5) == this )
        break;
      v7 = sub_10273C00(this);
      v13 += sub_10273E60(*(_DWORD *)(*(_DWORD *)(v7 + 220) + 4 * v5++));
    }
    while ( v5 < v6 );
  }
  v8 = (_DWORD *)this[67];
  if ( v3 >= v8[54] )
    return v13 + sub_102744A0(0);
  if ( v3 > v8[60] )
    return v13 + sub_102744A0(0);
  v9 = v8[53];
  v10 = *(_DWORD *)(v9 + 12 * v3 + 4) == v3;
  v11 = v9 + 12 * v3;
  if ( v10 && *(_DWORD *)(v11 + 8) != v3 )
    return v13 + sub_102744A0(0);
  else
    return v13 + sub_102744A0(v14);
}
