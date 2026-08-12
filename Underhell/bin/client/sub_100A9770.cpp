void __thiscall sub_100A9770(_DWORD *this, float *a2, float *a3)
{
  int v4; // ecx
  unsigned __int8 v5; // al
  double v6; // st7
  float *v7; // ecx
  float *v8; // eax
  double v9; // st7
  float *v10; // eax
  float *v11; // esi
  float v12; // [esp+0h] [ebp-Ch]

  v4 = this[1];
  v5 = *(_BYTE *)(v4 + 317);
  if ( v5 <= 1u )
  {
    if ( v5 == 1 )
      v6 = 2.0 - *(float *)(v4 + 4676);
    else
      v6 = 1.0;
    v12 = v6;
    sub_100A7980((float *)(this[2] + 64), a2 + 6, (float *)(this[2] + 64), v12);
  }
  if ( a2[8] > 0.7 )
  {
    v7 = (float *)this[2];
    if ( *(float *)(dword_10434644 + 44) * *((float *)off_103DC81C + 4) > v7[18] )
    {
      (*(void (__thiscall **)(_DWORD *, float *))(*this + 188))(this, a2);
      v7 = (float *)this[2];
      v7[18] = 0.0;
    }
    v8 = (float *)this[2];
    if ( v8[17] * v8[17] + v8[16] * v8[16] + v8[18] * v8[18] >= 900.0 && *(_BYTE *)(this[1] + 317) == 1 )
    {
      v9 = (1.0 - a2[11]) * *((float *)off_103DC81C + 4) * 0.9;
      *a3 = v7[16] * v9;
      a3[1] = v7[17] * v9;
      a3[2] = v9 * v7[18];
      sub_100A8E20(this, a3, (int)a2);
    }
    else
    {
      (*(void (__thiscall **)(_DWORD *, float *))(*this + 188))(this, a2);
      v10 = (float *)this[2];
      v10[16] = 0.0;
      v10[17] = 0.0;
      v10[18] = 0.0;
    }
    v11 = (float *)this[2];
    v11[16] = v11[16];
    v11[17] = v11[17];
    v11[18] = v11[18];
  }
}
