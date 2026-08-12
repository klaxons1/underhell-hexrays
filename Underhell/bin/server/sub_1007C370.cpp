char __thiscall sub_1007C370(int this, float *a2, int a3, int a4, int a5, char a6, float a7, int a8)
{
  double v9; // st6
  double v11; // st5
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // edi
  float v17; // [esp+0h] [ebp-30h]
  float v18; // [esp+0h] [ebp-30h]
  float v19; // [esp+8h] [ebp-28h]
  int v20[3]; // [esp+18h] [ebp-18h] BYREF
  int v21[3]; // [esp+24h] [ebp-Ch] BYREF
  float v22; // [esp+38h] [ebp+8h]
  float v23; // [esp+38h] [ebp+8h]
  bool v24; // [esp+3Fh] [ebp+Fh]

  v9 = *(float *)(a3 + 4) - a2[1];
  v11 = *(float *)a3 - *a2;
  v19 = v11 * v11 + v9 * v9;
  *(float *)(a8 + 32) = off_10689708(v19);
  v22 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(this + 4) + 1724))(*(_DWORD *)(this + 4));
  v17 = sub_10042670((_DWORD *)*(_DWORD *)(this + 4)) * v22;
  if ( sub_1007A2B0((_DWORD *)this, a2, a4, v17, -720.0, (float *)v20) )
  {
    if ( (a6 & 4) != 0 )
    {
      v21[0] = *(int *)a3;
      v21[1] = *(int *)(a3 + 4);
      v21[2] = *(int *)(a3 + 8);
    }
    else
    {
      v23 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(this + 4) + 1724))(*(_DWORD *)(this + 4));
      v18 = sub_10042670((_DWORD *)*(_DWORD *)(this + 4)) * v23;
      sub_1007A2B0((_DWORD *)this, (float *)a3, a4, v18, -720.0, (float *)v21);
    }
    LOBYTE(v14) = sub_1007BA50((_DWORD *)this, (float *)v20, (float *)v21, a4, a7, a6, (float *)a8);
    v24 = 0;
    if ( a5 )
    {
      v14 = (*(int (__thiscall **)(int))(*(_DWORD *)a5 + 288))(a5);
      v15 = v14;
      if ( v14 )
      {
        LOBYTE(v14) = (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 1088))(v14);
        if ( (_BYTE)v14 )
        {
          v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 1096))(v15);
          v24 = v14 == *(_DWORD *)(a8 + 28);
        }
      }
      if ( a5 == *(_DWORD *)(a8 + 28) || v24 )
      {
        *(_DWORD *)(a8 + 28) = 0;
        *(float *)(a8 + 36) = 0.0;
        *(float *)(a8 + 16) = flt_106F1CA8;
        *(float *)(a8 + 20) = flt_106F1CAC;
        *(float *)(a8 + 24) = flt_106F1CB0;
        *(_DWORD *)a8 = 0;
      }
    }
  }
  else
  {
    *(float *)(a8 + 36) = *(float *)(a8 + 32);
    v12 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0);
    if ( v12 && (v13 = *(_DWORD *)(v12 + 12)) != 0 )
      v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 20))(v13);
    else
      v14 = 0;
    *(_DWORD *)(a8 + 28) = v14;
    *(float *)(a8 + 16) = flt_106F1CA8;
    *(float *)(a8 + 20) = flt_106F1CAC;
    *(float *)(a8 + 24) = flt_106F1CB0;
    *(_DWORD *)a8 = -2;
    *(float *)(a8 + 4) = *a2;
    *(float *)(a8 + 8) = a2[1];
    *(float *)(a8 + 12) = a2[2];
  }
  return v14;
}
