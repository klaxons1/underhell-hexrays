float *__thiscall sub_103083D0(int *this, int a2, float a3, float *a4)
{
  float *v5; // eax
  int v6; // edx
  int v7; // eax
  float *v8; // esi
  float v9; // ecx
  float v10; // edx
  float v11; // ebx
  double v12; // st7
  double v13; // st6
  double v14; // st5
  float *v15; // eax
  double v16; // st5
  double v17; // rt1
  double v18; // st5
  double v19; // rt2
  double v20; // st5
  double v21; // st7
  float *result; // eax
  float v23; // [esp+4h] [ebp-4Ch]
  float v24; // [esp+10h] [ebp-40h]
  float v25[3]; // [esp+20h] [ebp-30h] BYREF
  float v26; // [esp+2Ch] [ebp-24h] BYREF
  float v27; // [esp+30h] [ebp-20h]
  float v28; // [esp+34h] [ebp-1Ch]
  float v29; // [esp+38h] [ebp-18h]
  float v30; // [esp+3Ch] [ebp-14h]
  float v31; // [esp+40h] [ebp-10h]
  float v32; // [esp+44h] [ebp-Ch] BYREF
  float v33; // [esp+48h] [ebp-8h]
  float v34; // [esp+4Ch] [ebp-4h]
  int savedregs; // [esp+50h] [ebp+0h] BYREF
  int v36; // [esp+58h] [ebp+8h]
  float v37; // [esp+5Ch] [ebp+Ch]

  v5 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 576))(a2);
  v26 = *v5;
  v27 = v5[1];
  v6 = *this;
  v28 = v5[2];
  v7 = (*(int (__thiscall **)(int *))(v6 + 368))(this);
  v8 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 576))(v7);
  v9 = v8[1];
  v10 = v8[2];
  v29 = *v8;
  v11 = v29;
  v30 = v9;
  v31 = v10;
  *(float *)&v36 = sub_10134630(a3, 0.0, 150.0, 1600.0, 800.0);
  sub_101695D0((int)&savedregs, (int)this, (int)v8, &v32, (int)this, &v26, v29, v8[1], v8[2], *(float *)&v36, 1.0, 0, 0);
  v12 = v32;
  if ( v32 == flt_106F1CA8 )
  {
    v13 = v33;
    if ( v33 == flt_106F1CAC )
    {
      v14 = v34;
      if ( v34 == flt_106F1CB0 )
      {
        v23 = *(float *)&v36 * 1.25;
        v15 = sub_101695D0((int)&savedregs, (int)this, (int)v8, v25, (int)this, &v26, v11, v30, v31, v23, 1.0, 0, 0);
        v12 = *v15;
        v32 = *v15;
        v13 = v15[1];
        v33 = v15[1];
        v14 = v15[2];
        v34 = v15[2];
        if ( v12 == flt_106F1CA8 && v13 == flt_106F1CAC && v14 == flt_106F1CB0 )
        {
          v37 = *(float *)(dword_106B6F0C + 44);
          v16 = v29 - v26;
          v32 = v16;
          v17 = v16;
          v18 = v30 - v27;
          v33 = v18;
          v19 = v18;
          v20 = v31 - v28;
          v34 = v20;
          v24 = v19 * v19 + v17 * v17 + v20 * v20;
          v21 = off_10689708(v24) / *(float *)&v36;
          v13 = v33 * (1.0 / v21);
          v14 = 1.0 / v21 * v34 + v21 * v37 * 0.5;
          v12 = v32 * (1.0 / v21);
        }
      }
    }
    else
    {
      v14 = v34;
    }
  }
  else
  {
    v14 = v34;
    v13 = v33;
  }
  result = a4;
  if ( a4 )
  {
    *a4 = v12;
    a4[1] = v13;
    a4[2] = v14;
  }
  return result;
}
