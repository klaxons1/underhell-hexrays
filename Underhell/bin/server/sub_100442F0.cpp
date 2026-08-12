double __thiscall sub_100442F0(float *this)
{
  int v2; // ecx
  int v3; // eax
  int v4; // edi
  int v5; // ecx
  _DWORD *v6; // eax
  int v7; // eax
  int v8; // edi
  double v9; // st6
  double v10; // st5
  double result; // st7
  float v12; // [esp+0h] [ebp-Ch]

  v2 = *((_DWORD *)this + 531);
  v3 = *((_DWORD *)this + 533);
  if ( !v2 )
    return 60.0;
  if ( v3 < 0 )
    return 60.0;
  v4 = *(_DWORD *)(v2 + 8);
  if ( v3 >= v4 )
    return 60.0;
  v5 = *(_DWORD *)(v2 + 4);
  if ( !(v5 + 8 * v3) )
    return 60.0;
  v6 = v3 >= v4 ? 0 : (_DWORD *)(v5 + 8 * v3);
  if ( *v6 != 66 )
    return 60.0;
  if ( !(*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this) )
    return 42.0;
  if ( ((_DWORD)this[63] & 0x800) != 0 )
    sub_100DAE60(this);
  v7 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this);
  v8 = v7;
  if ( (*(_DWORD *)(v7 + 252) & 0x800) != 0 )
    sub_100DAE60(v7);
  v9 = *(float *)(v8 + 584) - this[146];
  v10 = *(float *)(v8 + 580) - this[145];
  v12 = v10 * v10 + v9 * v9;
  result = off_10689708(v12) - 1.0;
  if ( result >= 42.0 )
    return 42.0;
  return result;
}
