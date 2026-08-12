int __thiscall sub_103F84A0(_DWORD *this, float a2, float a3)
{
  int v3; // eax
  int v4; // edi
  int result; // eax
  int v6; // esi
  float *v7; // eax
  int v8; // edx
  double (__stdcall *v9)(_DWORD, _DWORD); // eax
  double v10; // st7
  double v11; // st7
  float *v12; // eax
  int v13; // edx
  double v14; // st7
  int (__thiscall *v15)(int); // eax
  float *v16; // eax
  double v17; // st7
  float v18[3]; // [esp+14h] [ebp-28h] BYREF
  float v19; // [esp+20h] [ebp-1Ch] BYREF
  float v20; // [esp+24h] [ebp-18h]
  float v21; // [esp+28h] [ebp-14h]
  float v22; // [esp+2Ch] [ebp-10h] BYREF
  float v23; // [esp+30h] [ebp-Ch]
  float v24; // [esp+34h] [ebp-8h]
  float v25; // [esp+38h] [ebp-4h]

  v3 = sub_100D1940(this);
  v4 = sub_100D7680(v3);
  result = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 368))(v4);
  v6 = result;
  if ( result )
  {
    v7 = (float *)(*(int (__thiscall **)(int, float *))(*(_DWORD *)result + 536))(result, &v19);
    v22 = *v7;
    v8 = *(_DWORD *)dword_106B31E4;
    v23 = v7[1];
    v24 = v7[2];
    v9 = *(double (__stdcall **)(_DWORD, _DWORD))(v8 + 4);
    v25 = *(float *)(dword_106EFAF4 + 44);
    v10 = v9(-0.30000001, 0.2);
    v11 = v10 + v25;
    v25 = v11;
    if ( v11 < 0.0 )
      v25 = 0.0;
    v12 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 576))(v6);
    v13 = *(_DWORD *)v4;
    v19 = v22 * v25 + *v12;
    v20 = v23 * v25 + v12[1];
    v14 = v25 * v24 + v12[2];
    v15 = *(int (__thiscall **)(int))(v13 + 576);
    v21 = v14;
    v16 = (float *)v15(v4);
    v22 = v19 - *v16;
    v23 = v20 - v16[1];
    if ( fabs(v21 - v16[2]) <= 70.0
      && (((*(void (__thiscall **)(int, float *))(*(_DWORD *)v4 + 904))(v4, v18),
           v24 = 0.0,
           v17 = sub_10018C80(&v22),
           a3 <= 64.0)
       || v17 <= 64.0) )
    {
      if ( a2 >= 0.7 || v18[1] * v23 + v18[0] * v22 >= 0.7 )
        return 23;
      else
        return 40;
    }
    else
    {
      return 39;
    }
  }
  return result;
}
