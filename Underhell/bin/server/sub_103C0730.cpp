int __thiscall sub_103C0730(int this, int a2, int *a3, float a4, float *a5, float *a6)
{
  int result; // eax
  int v8; // eax
  double v9; // st7
  int v10; // edx
  void (__thiscall *v11)(int, _DWORD, int *); // edx
  double v12; // st6
  float *v13; // eax
  double v14; // st7
  float v15; // [esp+Ch] [ebp-80h]
  float v16; // [esp+10h] [ebp-7Ch]
  _BYTE v17[48]; // [esp+28h] [ebp-64h] BYREF
  int v18[3]; // [esp+58h] [ebp-34h] BYREF
  int v19[3]; // [esp+64h] [ebp-28h] BYREF
  int v20; // [esp+70h] [ebp-1Ch] BYREF
  float v21; // [esp+74h] [ebp-18h]
  float v22; // [esp+78h] [ebp-14h]
  float v23; // [esp+7Ch] [ebp-10h] BYREF
  float v24; // [esp+80h] [ebp-Ch]
  float v25; // [esp+84h] [ebp-8h]
  float v26; // [esp+88h] [ebp-4h]

  if ( *(float *)(dword_106B31C8 + 12) < (double)*(float *)(this + 8) )
    return 0;
  if ( !*(_BYTE *)(this + 4) )
    return 0;
  v8 = *(_DWORD *)(this + 44);
  if ( *(_BYTE *)(v8 + 3764) )
    return 0;
  v9 = *(float *)(this + 40);
  v26 = *(float *)(this + 40);
  if ( *(float *)(dword_106B31C8 + 12) < (double)*(float *)(v8 + 3768) )
  {
    v26 = v9 + 20.0;
LABEL_9:
    v10 = *a3;
    *a5 = 0.0;
    v11 = *(void (__thiscall **)(int, _DWORD, int *))(v10 + 204);
    a5[1] = 0.0;
    a5[2] = 0.0;
    v11((int)a3, 0, v19);
    (*(void (__thiscall **)(int *, _BYTE *))(*a3 + 192))(a3, v17);
    sub_10421C60(this + 12, v17, v18);
    v12 = 1.0 / a4;
    v16 = v26 * v12;
    v15 = v12 * v12;
    v13 = sub_101AE040((float *)&v20, (float *)(this + 24), (float *)v18, (float *)v19, 1.0, v15, v16);
    *a6 = *v13;
    a6[1] = v13[1];
    v14 = v13[2];
    result = 1;
    a6[2] = v14;
    return result;
  }
  (*(void (__thiscall **)(int *, float *, int *))(*a3 + 204))(a3, &v23, &v20);
  if ( v24 * v24 + v23 * v23 + v25 * v25 <= flt_1067BB70
    && v21 * v21 + *(float *)&v20 * *(float *)&v20 + v22 * v22 <= flt_1067BB74 )
  {
    goto LABEL_9;
  }
  return 0;
}
