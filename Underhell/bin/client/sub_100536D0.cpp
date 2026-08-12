char __cdecl sub_100536D0(float *a1, float *a2)
{
  _DWORD *v2; // edi
  int v4; // eax
  int v5; // edi
  float *v6; // edi
  double v7; // st7
  int v8[48]; // [esp+20h] [ebp-120h] BYREF
  _BYTE v9[12]; // [esp+E0h] [ebp-60h] BYREF
  _BYTE v10[12]; // [esp+ECh] [ebp-54h] BYREF
  float v11; // [esp+F8h] [ebp-48h]
  _BYTE v12[12]; // [esp+100h] [ebp-40h] BYREF
  _BYTE v13[12]; // [esp+10Ch] [ebp-34h] BYREF
  _BYTE v14[12]; // [esp+118h] [ebp-28h] BYREF
  float v15[3]; // [esp+124h] [ebp-1Ch] BYREF
  int v16; // [esp+130h] [ebp-10h]
  int v17; // [esp+134h] [ebp-Ch]
  int v18; // [esp+138h] [ebp-8h]
  _DWORD *v19; // [esp+13Ch] [ebp-4h]

  v2 = (_DWORD *)dword_1040B9B0;
  v19 = (_DWORD *)dword_1040B9B0;
  if ( !dword_1040B9B0 )
    return 0;
  sub_101F1610((int)(a1 + 11), (int)(a1 + 14), a1[17], a1[18], a1[9], a1[22], (int)v8);
  sub_101EE040(a1 + 14, v9, 0, 0);
  while ( 1 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(v2[2] + 32))(v2 + 2) )
      goto LABEL_12;
    (*(void (__thiscall **)(_DWORD *, _BYTE *, _BYTE *))(v2[1] + 84))(v2 + 1, v12, v14);
    if ( !(unsigned __int8)sub_101F16C0(v12, v14, v8) )
    {
      v4 = (*(int (__thiscall **)(_DWORD *))(v2[1] + 36))(v2 + 1);
      v5 = (int)v19;
      v17 = v4;
      sub_10037F50((int)v19);
      v6 = (float *)(v5 + 660);
      v16 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 164))(dword_10413178, v17);
      v18 = 0;
      if ( v16 > 0 )
        break;
    }
LABEL_11:
    v2 = v19;
LABEL_12:
    v19 = (_DWORD *)v2[298];
    if ( !v19 )
      return 0;
    v2 = v19;
  }
  while ( 1 )
  {
    (*(void (__thiscall **)(int, int, int, _BYTE *, _BYTE *))(*(_DWORD *)dword_10413178 + 168))(
      dword_10413178,
      v17,
      v18,
      v10,
      v13);
    sub_101ED920(v10, v6, a2);
    v7 = (a2[1] * a2[1] + *a2 * *a2 + a2[2] * a2[2]) * v11;
    a2[3] = v7;
    a2[3] = v7 + a2[1] * v6[7] + *a2 * v6[3] + a2[2] * v6[11];
    sub_101ED860(v13, v6, v15);
    if ( a2[1] * a1[12] + a1[11] * *a2 + a2[2] * a1[13] > a2[3]
      && (v15[0] - a1[11]) * *a2 + (v15[1] - a1[12]) * a2[1] + (v15[2] - a1[13]) * a2[2] < 0.0 )
    {
      return 1;
    }
    if ( ++v18 >= v16 )
      goto LABEL_11;
  }
}
