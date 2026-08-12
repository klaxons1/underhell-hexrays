float *__thiscall sub_101514F0(_DWORD *this)
{
  int v1; // esi
  int v3; // eax
  double v4; // st7
  int v5; // edx
  float *result; // eax
  float *v7; // esi
  double v8; // st7
  int v9; // eax
  double v10; // st7
  double v11; // st6
  double v12; // st5
  double v13; // st7
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  float v17; // [esp+3Ch] [ebp-4Ch]
  float v18; // [esp+3Ch] [ebp-4Ch]
  float v19; // [esp+40h] [ebp-48h]
  float v20; // [esp+40h] [ebp-48h]
  float v21; // [esp+40h] [ebp-48h]
  float v22[3]; // [esp+50h] [ebp-38h] BYREF
  float v23[3]; // [esp+5Ch] [ebp-2Ch] BYREF
  _DWORD v24[3]; // [esp+68h] [ebp-20h] BYREF
  _DWORD v25[3]; // [esp+74h] [ebp-14h] BYREF
  int v26; // [esp+80h] [ebp-8h]
  int v27; // [esp+84h] [ebp-4h]

  v1 = *(_DWORD *)dword_10413178;
  v3 = (*(int (__thiscall **)(_DWORD *, _DWORD *, _DWORD *))(this[1] + 36))(this + 1, v24, v25);
  (*(void (__thiscall **)(int, int))(v1 + 24))(dword_10413178, v3);
  v23[0] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
             dword_10413198,
             v24[0],
             v25[0]);
  v23[1] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
             dword_10413198,
             v24[1],
             v25[1]);
  v4 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
         dword_10413198,
         v24[2],
         v25[2]);
  v5 = this[302];
  v23[2] = v4;
  result = sub_100F2B60(this[305], v1, 60, v5, v23);
  v7 = result;
  if ( result )
  {
    v8 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
           dword_10413198,
           0.75,
           1.0);
    v7[11] = 0.0;
    v7[10] = (float)(int)this[299];
    v27 = *((unsigned __int8 *)this + 88);
    v26 = (int)((double)v27 * v8);
    *((_BYTE *)v7 + 48) = v26;
    v26 = *((unsigned __int8 *)this + 89);
    v26 = (int)((double)v26 * v8);
    *((_BYTE *)v7 + 49) = v26;
    v26 = *((unsigned __int8 *)this + 90);
    *(_DWORD *)((char *)v7 + 51) = 65791;
    v26 = (int)(v8 * (double)v26);
    *((_BYTE *)v7 + 50) = v26;
    v7[14] = 0.0;
    v7[9] = 0.0;
    v9 = (*(int (__thiscall **)(_DWORD *, float *))(*this + 40))(this, v22);
    sub_101EDFB0(v9);
    v10 = (double)(int)this[300];
    v11 = v22[0] * v10;
    v12 = v22[1] * v10;
    v13 = v10 * v22[2];
    v7[6] = v11;
    v7[7] = v12;
    v7[8] = v13;
    v14 = this[300];
    v27 = *(_DWORD *)dword_10413198;
    v26 = v14 / -8;
    v19 = (float)(v14 / -8);
    v7[6] = ((double (__thiscall *)(int, _DWORD))*(_DWORD *)(v27 + 4))(dword_10413198, LODWORD(v19)) + v7[6];
    v15 = this[300];
    v27 = *(_DWORD *)dword_10413198;
    v20 = (float)(v15 / 8);
    v26 = v15 / -8;
    v17 = (float)(v15 / -8);
    v7[7] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(v27 + 4))(
              dword_10413198,
              LODWORD(v17),
              LODWORD(v20))
          + v7[7];
    v16 = this[300];
    v27 = *(_DWORD *)dword_10413198;
    v21 = (float)(v16 / 8);
    v26 = v16 / -8;
    v18 = (float)(v16 / -8);
    v7[8] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(v27 + 4))(
              dword_10413198,
              LODWORD(v18),
              LODWORD(v21))
          + v7[8];
    return (float *)sub_10039310((int)this);
  }
  return result;
}
