int __thiscall sub_10409E70(int this)
{
  int result; // eax
  float *v3; // esi
  int v4; // ecx
  int *v5; // ecx
  float v6; // ecx
  int *v7; // ecx
  int v8; // edx
  float *v9; // eax
  int v10; // edx
  void (__thiscall *v11)(float *, _DWORD *); // edx
  double v12; // st7
  double v13; // st7
  const char *v14; // edi
  _DWORD v15[20]; // [esp+44h] [ebp-80h] BYREF
  __int16 v16; // [esp+94h] [ebp-30h]
  char v17; // [esp+97h] [ebp-2Dh]
  __int16 v18; // [esp+98h] [ebp-2Ch]
  float v19[3]; // [esp+9Ch] [ebp-28h] BYREF
  float v20[3]; // [esp+A8h] [ebp-1Ch] BYREF
  float v21[3]; // [esp+B4h] [ebp-10h] BYREF
  float v22; // [esp+C0h] [ebp-4h]

  result = sub_100D1940((_DWORD *)this);
  v3 = (float *)result;
  if ( result )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 320))(result);
    if ( (_BYTE)result )
    {
      *((_DWORD *)v3 + 823) &= ~0x800u;
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)this + 1132))(this, 4, 0.0);
      (*(void (__thiscall **)(float *))(*(_DWORD *)v3 + 1116))(v3);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 944))(this, 182);
      (*(void (__thiscall **)(float *, int))(*(_DWORD *)v3 + 1300))(v3, 5);
      sub_100D18C0(this);
      v4 = *(_DWORD *)(this + 1132);
      v22 = *(float *)(dword_106B31C8 + 12) + 0.0;
      if ( v4 != LODWORD(v22) )
      {
        if ( *(_BYTE *)(this + 84) )
        {
          *(_BYTE *)(this + 88) |= 1u;
        }
        else
        {
          v5 = *(int **)(this + 24);
          if ( v5 )
            sub_100194B0(v5, 1132);
        }
        *(float *)(this + 1132) = v22;
      }
      LODWORD(v6) = *(_DWORD *)(this + 1200) - 2;
      v22 = v6;
      if ( *(_DWORD *)(this + 1200) != LODWORD(v6) )
      {
        if ( *(_BYTE *)(this + 84) )
        {
          *(_BYTE *)(this + 88) |= 1u;
        }
        else
        {
          v7 = *(int **)(this + 24);
          if ( v7 )
            sub_100194B0(v7, 1200);
          v6 = v22;
        }
        *(float *)(this + 1200) = v6;
      }
      (*(void (__thiscall **)(float *, float *))(*(_DWORD *)v3 + 968))(v3, v21);
      (*(void (__thiscall **)(float *, float *, _DWORD))(*(_DWORD *)v3 + 1504))(v3, v20, 1.0);
      v8 = *(_DWORD *)this;
      v22 = *(float *)(this + 1192);
      v9 = (float *)(*(int (__thiscall **)(int))(v8 + 1100))(this);
      *(float *)&v15[17] = 1.0;
      v10 = *(_DWORD *)v3;
      *(float *)&v15[1] = v21[0];
      v11 = *(void (__thiscall **)(float *, _DWORD *))(v10 + 432);
      *(float *)&v15[11] = v22;
      *(float *)&v15[2] = v21[1];
      *(float *)&v15[3] = v21[2];
      v15[19] = 0;
      *(float *)&v15[4] = v20[0];
      v18 = 0;
      v17 = 0;
      *(float *)&v15[5] = v20[1];
      v15[0] = 12;
      memset(&v15[12], 0, 20);
      *(float *)&v15[6] = v20[2];
      v12 = *v9;
      v15[18] = 0;
      *(float *)&v15[7] = v12;
      v13 = v9[1];
      v16 = 0;
      *(float *)&v15[8] = v13;
      *(float *)&v15[9] = v9[2];
      *(float *)&v15[10] = 56755.84;
      v11(v3, v15);
      v19[0] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                 dword_106B31E4,
                 -5.0,
                 5.0);
      v19[1] = 0.0;
      v19[2] = 0.0;
      sub_100F7A60(v3, v19);
      v3[1043] = *(float *)(dword_106B31C8 + 12) + 1.0;
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      sub_1023D4B0(1, (float *)(this + 580), 1700, 0.2, 0, 0, 0);
      if ( *(_DWORD *)(this + 1200) )
        goto LABEL_22;
      if ( sub_100CF5D0(v3, *(_DWORD *)(this + 1192)) <= 0 )
        sub_101E8F80((int)v3, (int)"!HEV_AMO0", 0, 0);
      if ( *(_DWORD *)(this + 1200) )
LABEL_22:
        *(_BYTE *)(this + 1392) = 1;
      ++*(_DWORD *)(this + 1376);
      v14 = *(const char **)(this + 92);
      if ( !v14 )
        v14 = String;
      return (*(int (__thiscall **)(int, float *, _DWORD, const char *))(*(_DWORD *)off_10627F88 + 116))(
               off_10627F88,
               v3,
               0,
               v14);
    }
  }
  return result;
}
