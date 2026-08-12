int __thiscall sub_10277810(_DWORD *this, float a2, float a3)
{
  int v4; // eax
  int v5; // edi
  int result; // eax
  int v7; // esi
  float *v8; // eax
  int v9; // edx
  double (__stdcall *v10)(_DWORD, _DWORD); // eax
  double v11; // st7
  double v12; // st7
  float *v13; // eax
  int v14; // edx
  double v15; // st7
  int (__thiscall *v16)(int); // eax
  float *v17; // eax
  int v18; // edx
  long double v19; // st7
  double (__thiscall *v20)(_DWORD *); // eax
  double v21; // st7
  double v22; // st7
  float v23[3]; // [esp+18h] [ebp-28h] BYREF
  float v24; // [esp+24h] [ebp-1Ch] BYREF
  float v25; // [esp+28h] [ebp-18h]
  float v26; // [esp+2Ch] [ebp-14h]
  float v27; // [esp+30h] [ebp-10h] BYREF
  float v28; // [esp+34h] [ebp-Ch]
  float v29; // [esp+38h] [ebp-8h]
  float v30; // [esp+3Ch] [ebp-4h]

  v4 = sub_100D1940(this);
  v5 = sub_100D7680(v4);
  result = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 368))(v5);
  v7 = result;
  if ( result )
  {
    v8 = (float *)(*(int (__thiscall **)(int, float *))(*(_DWORD *)result + 536))(result, &v24);
    v27 = *v8;
    v9 = *(_DWORD *)dword_106B31E4;
    v28 = v8[1];
    v29 = v8[2];
    v10 = *(double (__stdcall **)(_DWORD, _DWORD))(v9 + 4);
    v30 = *(float *)(dword_106D028C + 44);
    v11 = v10(-0.30000001, 0.2);
    v12 = v11 + v30;
    v30 = v12;
    if ( v12 < 0.0 )
      v30 = 0.0;
    v13 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 576))(v7);
    v14 = *(_DWORD *)v5;
    v24 = v27 * v30 + *v13;
    v25 = v28 * v30 + v13[1];
    v15 = v30 * v29 + v13[2];
    v16 = *(int (__thiscall **)(int))(v14 + 576);
    v26 = v15;
    v17 = (float *)v16(v5);
    v18 = *this;
    v27 = v24 - *v17;
    v28 = v25 - v17[1];
    v19 = v26 - v17[2];
    v20 = *(double (__thiscall **)(_DWORD *))(v18 + 1448);
    v30 = fabs(v19);
    v21 = v20(this);
    if ( v21 + 20.0 < v30 )
      return 39;
    (*(void (__thiscall **)(int, float *))(*(_DWORD *)v5 + 904))(v5, v23);
    v29 = 0.0;
    v30 = sub_10018C80(&v27);
    if ( ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*this + 1448))(this) + 16.0 < a3
      && (v22 = ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*this + 1448))(this), v22 + 16.0 < v30) )
    {
      return 39;
    }
    else if ( a2 >= 0.7 || v23[1] * v28 + v23[0] * v27 >= 0.7 )
    {
      return 23;
    }
    else
    {
      return 40;
    }
  }
  return result;
}
