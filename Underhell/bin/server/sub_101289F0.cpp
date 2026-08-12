void __thiscall sub_101289F0(unsigned __int8 *this, float a2, float *a3, float a4)
{
  int v4; // esi
  double v6; // st7
  double v7; // st7
  double (__stdcall *v8)(_DWORD, _DWORD); // eax
  double v9; // st7
  const char *v10; // eax
  int v11; // eax
  unsigned int v12; // eax
  int *v13; // ecx
  int v14; // ebx
  float v15; // [esp+24h] [ebp-28h]
  float v16; // [esp+24h] [ebp-28h]
  float v17; // [esp+24h] [ebp-28h]
  float v18[3]; // [esp+34h] [ebp-18h] BYREF
  float v19[3]; // [esp+40h] [ebp-Ch] BYREF

  v4 = LODWORD(a2);
  if ( a2 != 0.0 )
  {
    if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
      sub_100DAE60((int)this);
    sub_100E10C0(v4, (float *)this + 145);
    v19[0] = *a3 * a4;
    v19[1] = a3[1] * a4;
    v19[2] = a4 * a3[2];
    sub_100DD660(v4, v19);
    a2 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           dword_106B31E4,
           100.0,
           200.0);
    v6 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           dword_106B31E4,
           100.0,
           300.0);
    v18[0] = a2;
    v18[1] = v6;
    v18[2] = 0.0;
    sub_100D7260((float *)v4, v18);
    v7 = sub_100E9200((_DWORD *)v4, 0);
    v8 = *(double (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)dword_106B31E4 + 4);
    a2 = v7 - *(float *)(dword_106B31C8 + 12);
    v9 = v8(0.94999999, 1.05) * *((float *)this + 210);
    *(float *)(v4 + 1132) = v9;
    if ( (*((_DWORD *)this + 62) & 4) != 0 )
    {
      v15 = v9 + *(float *)(dword_106B31C8 + 12);
      sub_100EC4A0((int *)v4, v15, 0);
      sub_100EC3F0((_DWORD *)v4, (int)sub_10166450, 0.0, 0);
    }
    if ( a2 > (double)*(float *)(v4 + 1132) )
    {
      v16 = *(float *)(dword_106B31C8 + 12) + *(float *)(v4 + 1132);
      sub_100EC4A0((int *)v4, v16, 0);
      *(float *)(v4 + 1132) = 0.0;
    }
    if ( this[857] == 1 )
    {
      if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
        sub_100DAE60(v4);
      v10 = *(const char **)(*(int (__thiscall **)(unsigned __int8 *, float *))(*(_DWORD *)this + 28))(this, &a2);
      if ( !v10 )
        v10 = String;
      v11 = sub_10243040(v10, v4 + 580, 0);
      if ( v11 )
        *(_DWORD *)(v4 + 1152) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v11 + 8))(v11);
      else
        *(_DWORD *)(v4 + 1152) = -1;
      v12 = *(_DWORD *)(v4 + 1152);
      if ( v12 != -1 )
      {
        v13 = &off_1061BE18[4 * (*(_DWORD *)(v4 + 1152) & 0xFFF) + 1];
        if ( off_1061BE18[4 * (*(_DWORD *)(v4 + 1152) & 0xFFF) + 2] == v12 >> 12 )
        {
          v14 = *v13;
          if ( *v13 )
          {
            sub_10126B10(v14, v4, 0);
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v14 + 76))(v14, v4);
            sub_102428B0(1.0, COERCE_INT(0.0));
            sub_10128950(v14, this[113], this[116], this[117], this[118], this[119], this[112]);
            v17 = *((float *)this + 210) + 1.0;
            sub_10126B80(v14, 5.0, v17);
          }
        }
      }
    }
  }
}
