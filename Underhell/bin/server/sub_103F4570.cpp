int __thiscall sub_103F4570(int this, float a2, float a3)
{
  double v4; // st7
  int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // ebx
  float *v9; // edi
  float *v10; // eax
  void (__thiscall *v11)(int, _DWORD, float *, _DWORD); // edx
  double v12; // st7
  float v14; // [esp+4h] [ebp-24h]
  float v15[3]; // [esp+10h] [ebp-18h] BYREF
  float v16; // [esp+1Ch] [ebp-Ch]
  float v17; // [esp+20h] [ebp-8h]
  float v18; // [esp+24h] [ebp-4h]
  int v19; // [esp+34h] [ebp+Ch]

  v4 = a3;
  if ( a3 >= (double)*(float *)(this + 1212) )
  {
    *(float *)(this + 1408) = 0.0;
  }
  else
  {
    if ( 0.0 == *(float *)(this + 1408) )
      *(float *)(this + 1408) = *(float *)(dword_106B31C8 + 12);
    if ( *(float *)(dword_106B31C8 + 12) - *(float *)(this + 1408) > 1.0 )
      v4 = *(float *)(this + 1212) + 1.0;
  }
  v14 = v4;
  v5 = sub_102B1060(this, a2, v14);
  v19 = v5;
  v6 = sub_100D1940((_DWORD *)this);
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 1088))(v6) )
    return v5;
  v7 = sub_100D1940((_DWORD *)this);
  v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 368))(v7);
  v9 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 576))(this);
  v10 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 576))(v8);
  v11 = *(void (__thiscall **)(int, _DWORD, float *, _DWORD))(*(_DWORD *)this + 528);
  v16 = *v10 - *v9;
  v17 = v10[1] - v9[1];
  v18 = v10[2] - v9[2];
  v11(this, 0, v15, 0);
  v12 = 0.0;
  if ( v16 * v15[0] + v15[1] * v17 + v15[2] * v18 > 0.0 )
    v12 = -0.69999999;
  if ( v19 == 40 && v12 <= a2 )
    return 21;
  else
    return v19;
}
