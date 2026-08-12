int __stdcall sub_101C14D0(int *a1, int a2, float *a3, int a4)
{
  float *v4; // eax
  int v5; // edx
  double v6; // st6
  double v7; // st6
  double v8; // st7
  int v9; // edx
  int result; // eax
  _BYTE v11[12]; // [esp+Ch] [ebp-3Ch] BYREF
  float v12[3]; // [esp+18h] [ebp-30h] BYREF
  float v13[3]; // [esp+24h] [ebp-24h] BYREF
  float v14[3]; // [esp+30h] [ebp-18h] BYREF
  float v15; // [esp+3Ch] [ebp-Ch] BYREF
  float v16; // [esp+40h] [ebp-8h]
  float v17; // [esp+44h] [ebp-4h]

  v4 = (float *)(*(int (__thiscall **)(int *))(a1[80] + 32))(a1 + 80);
  v15 = *v4;
  v16 = v4[1];
  v5 = *(_DWORD *)(a4 + 320);
  v17 = v4[2];
  if ( (*(int (__thiscall **)(int))(v5 + 44))(a4 + 320) == 6 )
  {
    sub_10111910((_BYTE *)a1 + 320, (float *)a1 + 82, (float *)a1 + 85, v13, v14);
    if ( *a3 >= 0.0 )
      v6 = v13[0];
    else
      v6 = v14[0];
    v15 = v6;
    if ( a3[1] >= 0.0 )
      v7 = v13[1];
    else
      v7 = v14[1];
    v16 = v7;
    if ( a3[2] >= 0.0 )
      v8 = v13[2];
    else
      v8 = v14[2];
    v9 = *a1;
    v17 = v8;
    if ( (*(unsigned __int8 (__thiscall **)(int *))(v9 + 320))(a1) )
      sub_101E2830(32, 1);
  }
  sub_10421BA0(&v15, a2 + 12, v11);
  result = sub_10421B40(v11, a2 + 60, v12);
  *a3 = v12[0] - v15;
  a3[1] = v12[1] - v16;
  a3[2] = v12[2] - v17;
  return result;
}
