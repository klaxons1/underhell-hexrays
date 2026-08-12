int __thiscall sub_10277020(int *this, int a2, float *a3, float *a4)
{
  int v5; // eax
  int v6; // edx
  void (__thiscall *v7)(int, _DWORD *); // edx
  double v8; // st7
  double v9; // st7
  double v10; // st7
  int v11; // eax
  int result; // eax
  int *v13; // esi
  int v14; // edi
  int *v15; // ecx
  _DWORD v16[20]; // [esp+1Ch] [ebp-58h] BYREF
  __int16 v17; // [esp+6Ch] [ebp-8h]
  char v18; // [esp+6Fh] [ebp-5h]
  __int16 v19; // [esp+70h] [ebp-4h]

  sub_102B0DF0(3);
  if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
    sub_100DAE60(a2);
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 368))(a2);
  sub_1023D4B0(2097153, (float *)(a2 + 580), 1500, 0.2, a2, 4, v5);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, this[6]);
  *(float *)&v16[17] = 1.0;
  v6 = *(_DWORD *)a2;
  *(float *)&v16[1] = *a3;
  v7 = *(void (__thiscall **)(int, _DWORD *))(v6 + 432);
  *(float *)&v16[2] = a3[1];
  *(float *)&v16[3] = a3[2];
  v8 = *a4;
  v16[19] = 0;
  *(float *)&v16[4] = v8;
  memset(&v16[13], 0, 16);
  v9 = a4[1];
  v19 = 0;
  *(float *)&v16[5] = v9;
  v18 = 0;
  v10 = a4[2];
  v16[0] = 1;
  v11 = this[298];
  *(float *)&v16[6] = v10;
  v16[11] = v11;
  *(float *)&v16[7] = flt_106F1CA8;
  *(float *)&v16[8] = flt_106F1CAC;
  v16[12] = 2;
  *(float *)&v16[9] = flt_106F1CB0;
  v16[18] = 0;
  *(float *)&v16[10] = 56755.84;
  v17 = 1;
  v7(a2, v16);
  result = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 1116))(a2);
  v13 = this + 300;
  v14 = this[300] - 1;
  if ( *v13 != v14 )
  {
    result = (int)(v13 - 300);
    if ( *((_BYTE *)v13 - 1116) )
    {
      *(_BYTE *)(result + 88) |= 1u;
      *v13 = v14;
    }
    else
    {
      v15 = *(int **)(result + 24);
      if ( v15 )
        result = sub_100194B0(v15, 1200);
      *v13 = v14;
    }
  }
  return result;
}
