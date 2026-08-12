int __thiscall sub_1036A900(void *this, float *a2)
{
  int result; // eax
  _DWORD *i; // esi
  float *v6; // eax
  double v7; // st7
  double v8; // st6
  int v9; // ecx
  _DWORD v10[514]; // [esp+24h] [ebp-844h] BYREF
  _BYTE v11[12]; // [esp+82Ch] [ebp-3Ch] BYREF
  float v12[3]; // [esp+838h] [ebp-30h] BYREF
  float v13[3]; // [esp+844h] [ebp-24h] BYREF
  float v14[3]; // [esp+850h] [ebp-18h] BYREF
  float v15; // [esp+85Ch] [ebp-Ch]
  float v16; // [esp+860h] [ebp-8h]
  float v17; // [esp+864h] [ebp-4h]
  float v18; // [esp+870h] [ebp+8h]

  sub_10261B70(a2, 1.0, 80.0, 1.0, 256.0, 0, 0);
  sub_10261520(v10, (int)a2, 128.0, 0);
  result = sub_1025EEE0(v10);
  for ( i = (_DWORD *)result; result; i = (_DWORD *)result )
  {
    if ( *((_BYTE *)i + 225) && (*(int (__thiscall **)(_DWORD *))(*i + 220))(i) != 1 && i[106] )
    {
      v6 = (float *)(*(int (__thiscall **)(_DWORD *, _BYTE *, float *, int))(*i + 520))(i, v11, a2, 1);
      v7 = v6[1] - a2[1];
      v8 = v6[2] - a2[2] + 16.0;
      v15 = *v6 - *a2;
      v16 = v7;
      v17 = v8;
      v18 = off_10689714();
      v13[0] = 1.0;
      v13[1] = 1.0;
      v13[2] = 1.0;
      sub_10111860((int)this + 320, &flt_106F1CA8, v13, v12);
      if ( v18 <= 128.0 )
      {
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)i[106] + 96))(i[106]);
        v9 = i[106];
        v14[0] = v15 * 250.0;
        v14[1] = v16 * 250.0;
        v14[2] = 250.0 * v17;
        (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)v9 + 240))(v9, v14, v12);
      }
    }
    ++v10[0];
    result = sub_1025EEE0(v10);
  }
  return result;
}
