int __thiscall sub_10075430(_DWORD *this, float *a2, float a3)
{
  int v4; // ebx
  int v5; // eax
  float *v6; // esi
  long double v7; // st7
  long double v8; // st7
  long double v9; // st7
  float *v10; // eax
  double v11; // st7
  int result; // eax
  float v13; // [esp+0h] [ebp-2Ch]
  float v14; // [esp+8h] [ebp-24h]
  float v15; // [esp+Ch] [ebp-20h]
  int v16[3]; // [esp+1Ch] [ebp-10h] BYREF
  float v17; // [esp+28h] [ebp-4h]
  int v18; // [esp+34h] [ebp+8h]
  float v19; // [esp+38h] [ebp+Ch]

  if ( !LOBYTE(a3) || (LOBYTE(a3) = 1, *(_DWORD *)(this[51] + 68)) )
    LOBYTE(a3) = 0;
  v4 = sub_100752B0(this, (int)a2, a3);
  if ( a2[10] < (double)a2[11] )
    a2[11] = a2[10];
  if ( v4 )
    return v4;
  v5 = this[1];
  v17 = *(float *)(*(_DWORD *)(v5 + 2604) + 16);
  v6 = a2 + 6;
  v19 = (double)(unsigned __int16)(int)(*(float *)(v5 + 732) * 182.04445) * 0.0054931641;
  v7 = sub_10265030(a2 + 6);
  *(float *)&v18 = v7;
  v14 = v7;
  sub_10424C10(v14, v19);
  v8 = fabs(v7);
  if ( v8 <= 15.0 )
    return v4;
  v9 = v8 * 4.0;
  v13 = v9;
  sub_100785E0(v13, v19, *(float *)&v18, v17);
  if ( *(float *)&v18 == v9 )
    return v4;
  v15 = v9;
  v10 = (float *)sub_102650F0((int)v16, v15);
  *v6 = *v10;
  v6[1] = v10[1];
  v11 = v10[2];
  result = 0;
  v6[2] = v11;
  return result;
}
