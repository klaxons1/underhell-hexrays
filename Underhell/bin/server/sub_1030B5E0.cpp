int __thiscall sub_1030B5E0(int this, float *a2, float a3, float a4, int a5)
{
  int result; // eax
  int i; // esi
  float *v8; // ebx
  float *v9; // eax
  double v10; // st7
  int v11; // eax
  double v12; // st4
  double v13; // st5
  double v14; // st7
  double v15; // st7
  float v16; // [esp+Ch] [ebp-8Ch]
  float v17; // [esp+14h] [ebp-84h]
  int v18[20]; // [esp+24h] [ebp-74h] BYREF
  _BYTE v19[12]; // [esp+74h] [ebp-24h] BYREF
  int v20[3]; // [esp+80h] [ebp-18h] BYREF
  float v21; // [esp+8Ch] [ebp-Ch]
  float v22; // [esp+90h] [ebp-8h]
  float v23; // [esp+94h] [ebp-4h]

  result = sub_1012BFF0(&dword_1069E3E0, 0, a2, a3);
  for ( i = result; result; i = result )
  {
    if ( i != a5
      && i != this
      && (*(_BYTE *)(i + 306) == 6
       || *(_DWORD *)(i + 424) && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)i + 320))(i)) )
    {
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      v8 = (float *)(this + 580);
      v9 = (float *)(*(int (__thiscall **)(int, _BYTE *, int, int))(*(_DWORD *)i + 520))(i, v19, this + 580, 1);
      v21 = *v9;
      v22 = v9[1];
      v10 = v9[2];
      v11 = *(_DWORD *)(this + 252) >> 11;
      v23 = v10;
      if ( (v11 & 1) != 0 )
        sub_100DAE60(this);
      v12 = *(float *)(this + 584) - v22;
      v13 = *(float *)(this + 588) - v23;
      v17 = v13 * v13 + v12 * v12 + (*v8 - v21) * (*v8 - v21);
      v14 = off_10689708(v17);
      if ( 0.0 == a3 || a3 >= v14 )
      {
        v15 = a4 - v14 * 0.40000001;
        if ( v15 < 1.0 )
          v15 = 1.0;
        v16 = v15;
        sub_10248110((int)v18, this, this, v16, 64, 0);
        if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
          sub_100DAE60(this);
        if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
          sub_100DAE60(this);
        *(float *)v20 = v21 - *v8;
        *(float *)&v20[1] = v22 - *(float *)(this + 584);
        *(float *)&v20[2] = v23 - *(float *)(this + 588);
        sub_102485A0((float *)v18, (float *)v20, (float *)(this + 580), 1.0);
        (*(void (__thiscall **)(int, int *))(*(_DWORD *)i + 600))(i, v18);
      }
    }
    result = sub_1012BFF0(&dword_1069E3E0, i, a2, a3);
  }
  return result;
}
