// bad sp value at call has been detected, the output may be wrong!
float *__userpurge sub_10349B00@<eax>(
        int a1@<ebp>,
        int a2@<esi>,
        float *a3,
        float a4,
        float a5,
        float a6,
        int a7,
        float a8,
        float a9,
        float a10,
        float a11,
        float a12,
        float a13)
{
  int v13; // esi
  float *v14; // eax
  float *v15; // eax
  float *result; // eax
  float v17; // edx
  float v18; // ecx
  int v19; // [esp+Ch] [ebp-E4h]
  float v21[20]; // [esp+24h] [ebp-CCh] BYREF
  _BYTE v22[12]; // [esp+74h] [ebp-7Ch] BYREF
  float v23[10]; // [esp+80h] [ebp-70h] BYREF
  char v24; // [esp+ABh] [ebp-45h]
  _DWORD v25[3]; // [esp+CCh] [ebp-24h] BYREF
  float v26[2]; // [esp+D8h] [ebp-18h] BYREF
  int v27; // [esp+E0h] [ebp-10h]
  _DWORD v28[3]; // [esp+E4h] [ebp-Ch] BYREF
  _UNKNOWN *retaddr; // [esp+F0h] [ebp+0h]

  v28[0] = a1;
  v28[1] = retaddr;
  v13 = a7;
  if ( a7 )
  {
    v14 = (float *)sub_10073710(*(_DWORD *)(a7 + 1676));
    a8 = *v14;
    a9 = v14[1];
    v19 = *(_DWORD *)(v13 + 1676);
    a10 = v14[2];
    v15 = (float *)sub_10073730(v19);
    a11 = *v15;
    a12 = v15[1];
    a13 = v15[2];
  }
  v26[0] = a4;
  v26[1] = a5;
  *(float *)&v27 = a6 + 32.0;
  sub_1001F200(v21, v26, &a4, &a8, &a11);
  sub_10265570(v25, v13, 0);
  (*(void (__thiscall **)(int, float *, int, _DWORD *, _BYTE *, int))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v21,
    33570827,
    v25,
    v22,
    a2);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v22, (int)v23, 255, 255, 0, 1, -1.0);
  if ( v23[8] >= 1.0 )
  {
    if ( *(_DWORD *)(dword_106E673C + 48) == 1 )
      sub_1011BB20((int)&a4, (int)&a8, (int)&a11, 0, 255, 0, 8, 4.0);
  }
  else
  {
    if ( *(_DWORD *)(dword_106E673C + 48) == 1 )
      sub_1011BB20((int)&a4, (int)&a8, (int)&a11, 255, 0, 0, 8, 4.0);
    *(float *)&v27 = a6 + 32.0;
    sub_100231A0((int)v28, v13, v26, &a4, &a8, &a11, 33570827, v13, SLODWORD(a5), v27);
    if ( !v24 )
    {
      result = a3;
      *a3 = v23[0];
      a3[1] = v23[1];
      a3[2] = v23[2] + 1.0;
      return result;
    }
  }
  result = a3;
  v17 = a5;
  *a3 = a4;
  v18 = a6;
  a3[1] = v17;
  a3[2] = v18;
  return result;
}
