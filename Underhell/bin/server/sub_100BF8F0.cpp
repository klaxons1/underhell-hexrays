float *__thiscall sub_100BF8F0(int this, float *a2)
{
  int v2; // edi
  _DWORD *v4; // eax
  int v5; // ebx
  float *result; // eax
  float v7; // edx
  float v8; // ecx
  double v9; // st7
  double v10; // st7
  double v11; // st6
  double v12; // st7
  double v13; // rt0
  float v14[3]; // [esp+8h] [ebp-18h] BYREF
  float v15; // [esp+14h] [ebp-Ch] BYREF
  float v16; // [esp+18h] [ebp-8h]
  float v17; // [esp+1Ch] [ebp-4h]

  v2 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240(this) )
    sub_100BD750((volatile signed __int32 *)this);
  v4 = *(_DWORD **)(this + 1100);
  if ( v4 && *v4 )
    v5 = *(_DWORD *)(this + 1100);
  else
    v5 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 104))(v2);
  if ( v5 )
  {
    v9 = sub_100BE070(this, *(_DWORD *)(this + 908));
    v14[0] = 0.0;
    v14[2] = 0.0;
    v14[1] = v9 + *(float *)(this + 732);
    sub_10422220(v14, &v15);
    v10 = *(float *)(this + 800);
    result = a2;
    v11 = v15 * v10;
    v12 = v10 * v17;
    v13 = *(float *)(this + 800) * v16;
    v15 = v11;
    *a2 = v15;
    v16 = v13;
    a2[1] = v16;
    v17 = v12;
    a2[2] = v17;
  }
  else
  {
    result = a2;
    v7 = flt_106F1CAC;
    *a2 = flt_106F1CA8;
    v8 = flt_106F1CB0;
    a2[1] = v7;
    a2[2] = v8;
  }
  return result;
}
