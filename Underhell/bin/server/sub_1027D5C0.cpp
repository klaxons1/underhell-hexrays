int __thiscall sub_1027D5C0(int this)
{
  int result; // eax
  float *v3; // edi
  int v4; // ecx
  int *v5; // ecx
  int *v6; // ecx
  int v7; // ecx
  int v8; // edx
  int (__thiscall *v9)(int); // eax
  double v10; // st7
  const char *v11; // esi
  float v12; // [esp+30h] [ebp-90h]
  _DWORD v13[13]; // [esp+40h] [ebp-80h] BYREF
  int v14; // [esp+74h] [ebp-4Ch]
  int v15; // [esp+78h] [ebp-48h]
  int v16; // [esp+7Ch] [ebp-44h]
  int v17; // [esp+80h] [ebp-40h]
  float v18; // [esp+84h] [ebp-3Ch]
  int v19; // [esp+88h] [ebp-38h]
  int v20; // [esp+8Ch] [ebp-34h]
  __int16 v21; // [esp+90h] [ebp-30h]
  bool v22; // [esp+93h] [ebp-2Dh]
  __int16 v23; // [esp+94h] [ebp-2Ch]
  float v24[3]; // [esp+98h] [ebp-28h] BYREF
  float v25[3]; // [esp+A4h] [ebp-1Ch] BYREF
  float v26[3]; // [esp+B0h] [ebp-10h] BYREF
  float v27; // [esp+BCh] [ebp-4h]

  result = sub_100D1940((_DWORD *)this);
  v3 = (float *)result;
  if ( result )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 320))(result);
    if ( (_BYTE)result )
    {
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)this + 1132))(this, 1, 0.0);
      (*(void (__thiscall **)(float *))(*(_DWORD *)v3 + 1116))(v3);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 944))(this, 181);
      (*(void (__thiscall **)(float *, int))(*(_DWORD *)v3 + 1300))(v3, 5);
      sub_100D18C0(this);
      v4 = *(_DWORD *)(this + 1132);
      v27 = *(float *)(dword_106B31C8 + 12) + 0.0;
      if ( v4 != LODWORD(v27) )
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
        *(float *)(this + 1132) = v27;
      }
      LODWORD(v27) = *(_DWORD *)(this + 1200) - 1;
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v6 = *(int **)(this + 24);
        if ( v6 )
          sub_100194B0(v6, 1200);
      }
      *(float *)(this + 1200) = v27;
      (*(void (__thiscall **)(float *, float *))(*(_DWORD *)v3 + 968))(v3, v26);
      (*(void (__thiscall **)(float *, float *, _DWORD))(*(_DWORD *)v3 + 1504))(v3, v25, 1.0);
      v3[1043] = *(float *)(dword_106B31C8 + 12) + 1.0;
      v7 = *(_DWORD *)(this + 1192);
      v8 = *(_DWORD *)this;
      *(float *)&v13[7] = 0.0;
      v9 = *(int (__thiscall **)(int))(v8 + 852);
      *(float *)&v13[8] = 0.0;
      v13[11] = v7;
      *(float *)&v13[9] = 0.0;
      v16 = 0;
      v18 = 1.0;
      *(float *)&v13[1] = v26[0];
      v20 = 0;
      *(float *)&v13[2] = v26[1];
      v14 = 0;
      v23 = 0;
      *(float *)&v13[3] = v26[2];
      v22 = 0;
      v13[0] = 1;
      *(float *)&v13[4] = v25[0];
      v13[12] = 0;
      *(float *)&v13[5] = v25[1];
      *(float *)&v13[6] = v25[2];
      *(float *)&v13[10] = 56755.84;
      v15 = v9(this);
      v19 = 0;
      v17 = 0;
      v21 = 1;
      v22 = *(_DWORD *)(sub_100D0CC0((__int16 *)this) + 52) != 0;
      v14 = *(_DWORD *)(sub_100D0CC0((__int16 *)this) + 52);
      v17 = 1;
      (*(void (__thiscall **)(float *, _DWORD *))(*(_DWORD *)v3 + 432))(v3, v13);
      v27 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              -2.0,
              -1.0);
      v10 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              -2.0,
              2.0);
      v24[0] = v27;
      v24[1] = v10;
      v24[2] = 0.0;
      sub_100F7A60(v3, v24);
      LODWORD(v27) = *(_DWORD *)this + 960;
      sub_100D18C0(this);
      v12 = *(float *)(dword_106B31C8 + 12) + 0.0;
      (*(void (__thiscall **)(int, _DWORD))LODWORD(v27))(this, LODWORD(v12));
      ++*(_DWORD *)(this + 1372);
      v11 = *(const char **)(this + 92);
      if ( !v11 )
        v11 = String;
      return (*(int (__thiscall **)(int, float *, int, const char *))(*(_DWORD *)off_10627F88 + 116))(
               off_10627F88,
               v3,
               1,
               v11);
    }
  }
  return result;
}
