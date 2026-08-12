char __thiscall sub_102EBC20(_DWORD *this, int a2, float a3)
{
  _DWORD *v3; // esi
  int v4; // eax
  _DWORD *v5; // edx
  int v6; // ecx
  int v7; // esi
  float *v8; // eax
  double v9; // st4
  double v10; // st7
  double v11; // st4
  double v12; // st5
  float *v13; // eax
  int (__thiscall *v14)(int); // eax
  float *v15; // eax
  int v17; // ecx
  int v18; // eax
  float *v19; // [esp-14h] [ebp-90h]
  float v20; // [esp+4h] [ebp-78h]
  _BYTE v21[12]; // [esp+14h] [ebp-68h] BYREF
  int v22[8]; // [esp+20h] [ebp-5Ch] BYREF
  float v23; // [esp+40h] [ebp-3Ch]
  _BYTE v24[12]; // [esp+68h] [ebp-14h] BYREF
  float v25; // [esp+74h] [ebp-8h]
  _DWORD *v26; // [esp+78h] [ebp-4h]
  int savedregs; // [esp+7Ch] [ebp+0h] BYREF
  int v28; // [esp+88h] [ebp+Ch]

  v3 = this;
  v4 = this[6] - 1;
  v25 = a3 * a3;
  v26 = this;
  v28 = v4;
  if ( v4 < 0 )
    return 0;
  while ( 1 )
  {
    v5 = (_DWORD *)(v3[3] + 8 * v4 + 4);
    if ( *v5 == -1
      || off_1061BE18[4 * (*v5 & 0xFFF) + 2] != *v5 >> 12
      || !off_1061BE18[4 * (*v5 & 0xFFF) + 1]
      || (*v5 == -1 || off_1061BE18[4 * (*v5 & 0xFFF) + 2] != *v5 >> 12
        ? (v6 = 0)
        : (v6 = off_1061BE18[4 * (*v5 & 0xFFF) + 1]),
          (*(_BYTE *)(v6 + 252) & 1) != 0) )
    {
      v17 = v3[6];
      if ( v17 > 0 )
      {
        v18 = v3[3];
        *(_DWORD *)(v18 + 8 * v28) = *(_DWORD *)(v18 + 8 * v17 - 8);
        *(_DWORD *)(v18 + 8 * v28 + 4) = *(_DWORD *)(v18 + 8 * v17 - 4);
        --v3[6];
      }
      goto LABEL_27;
    }
    if ( *v5 == -1 || off_1061BE18[4 * (*v5 & 0xFFF) + 2] != *v5 >> 12 )
      v7 = 0;
    else
      v7 = off_1061BE18[4 * (*v5 & 0xFFF) + 1];
    if ( (*(_DWORD *)(v7 + 252) & 0x800) != 0 )
      sub_100DAE60(v7);
    v8 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 576))(a2);
    v9 = *v8 - *(float *)(v7 + 580);
    v10 = v9 * v9;
    v11 = v8[1] - *(float *)(v7 + 584);
    v12 = v8[2] - *(float *)(v7 + 588);
    if ( v12 * v12 + v11 * v11 + v10 < v25 )
    {
      if ( (*(_DWORD *)(v7 + 252) & 0x800) != 0 )
        sub_100DAE60(v7);
      v13 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a2 + 504))(a2, v24);
      sub_1002A5F0((int)&savedregs, v7, v13, (float *)(v7 + 580), 16395, a2, 0, (int)v21);
      if ( *(_DWORD *)(dword_106E1CAC + 48) )
      {
        v20 = 0.1;
        v14 = *(int (__thiscall **)(int))(*(_DWORD *)a2 + 576);
        if ( 1.0 == v23 )
        {
          v15 = (float *)v14(a2);
          sub_1011BC50(v15, (float *)v22, 0, 255, 0, 1, v20);
          if ( (*(_DWORD *)(v7 + 252) & 0x800) != 0 )
            sub_100DAE60(v7);
          sub_1011BC50((float *)(v7 + 580), (float *)v22, 255, 0, 0, 1, 0.1);
        }
        else
        {
          v19 = (float *)v14(a2);
          sub_1011BC50(v19, (float *)v22, 255, 0, 0, 1, v20);
        }
      }
      if ( 1.0 == v23 )
        return 1;
    }
    v3 = v26;
LABEL_27:
    v4 = --v28;
    if ( v28 < 0 )
      return 0;
  }
}
