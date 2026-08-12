char __thiscall sub_102CB240(void *this, int a2)
{
  double v4; // st4
  double v5; // st6
  double v6; // st4
  double v7; // st5
  double v8; // st6
  double v9; // st7
  bool v10; // c0
  double v11; // st7
  float *v13; // eax
  double v14; // st7
  long double v15; // st7
  float v16[3]; // [esp+18h] [ebp-24h] BYREF
  float v17[3]; // [esp+24h] [ebp-18h] BYREF
  float v18[3]; // [esp+30h] [ebp-Ch] BYREF
  float v19; // [esp+44h] [ebp+8h]
  float v20; // [esp+44h] [ebp+8h]

  (*(void (__thiscall **)(void *, float *))(*(_DWORD *)this + 744))(this, v18);
  if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
    sub_100DAE60(a2);
  v4 = *(float *)(a2 + 584) - v18[1];
  v5 = v4 * v4;
  v6 = *(float *)(a2 + 580) - v18[0];
  v7 = v5;
  v8 = *(float *)(a2 + 588) - v18[2];
  v9 = v6 * v6 + v7 + v8 * v8;
  v19 = v9;
  if ( (*((_DWORD *)this + 62) & 0x2000) != 0 )
    goto LABEL_9;
  if ( *((float *)this + 252) > v9 )
    return 0;
  if ( *((float *)this + 253) <= 0.0 )
  {
LABEL_9:
    v11 = 0.0;
  }
  else
  {
    v10 = *((float *)this + 253) < v9;
    v11 = 0.0;
    if ( v10 )
      return 0;
  }
  if ( *((float *)this + 265) != v11
    && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2)
    && *(float *)(dword_106B31C8 + 12) - *((float *)this + 268) < *((float *)this + 265)
    && *((float *)this + 266) < (double)v19 )
  {
    return 0;
  }
  if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
    sub_100DAE60(a2);
  sub_100D5C50((float *)this + 209, v17, (float *)(a2 + 580));
  v13 = sub_102CAC30((int)this, v16, v17);
  v17[0] = *v13;
  v14 = v13[1];
  sub_10424C60(v13[1], *((float *)this + 235));
  v20 = v14;
  v15 = v17[0];
  sub_10424C60(v17[0], *((float *)this + 240));
  if ( *((float *)this + 239) + *((float *)this + 238) < fabs(v20)
    || *((float *)this + 244) + *((float *)this + 243) < fabs(v15) )
  {
    return 0;
  }
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2) )
    *((float *)this + 268) = *(float *)(dword_106B31C8 + 12);
  return 1;
}
