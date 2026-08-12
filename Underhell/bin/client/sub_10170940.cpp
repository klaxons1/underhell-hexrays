_DWORD *__thiscall sub_10170940(void *this, float *a2, float *a3, float a4, _DWORD *a5, _DWORD *a6, float a7)
{
  _DWORD *result; // eax
  int v8; // esi
  double v9; // st7
  int v10; // esi
  double v11; // st7
  int (__thiscall *v12)(int, int, int); // eax
  double v13; // st7
  long double v14; // st4
  char *v15; // [esp+2Ch] [ebp-30h]
  float v16; // [esp+3Ch] [ebp-20h] BYREF
  float v17; // [esp+40h] [ebp-1Ch]
  float v18; // [esp+44h] [ebp-18h]
  _DWORD *v19; // [esp+48h] [ebp-14h]
  float v20; // [esp+4Ch] [ebp-10h]
  int v21; // [esp+50h] [ebp-Ch]
  _DWORD *v22; // [esp+54h] [ebp-8h]
  _DWORD *v23; // [esp+58h] [ebp-4h]

  result = a5;
  v21 = (int)this;
  if ( a5 )
  {
    result = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_10413178 + 4))(dword_10413178, a5);
    v8 = (int)result;
    v22 = result;
    if ( result )
    {
      result = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_10413178 + 32))(dword_10413178, result);
      v19 = result;
      v23 = 0;
      if ( (int)a6 > 0 )
      {
        while ( 1 )
        {
          v9 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                 dword_10413198,
                 0.0,
                 1.0);
          v16 = (*a3 - *a2) * v9 + *a2;
          v17 = (a3[1] - a2[1]) * v9 + a2[1];
          v18 = v9 * (a3[2] - a2[2]) + a2[2];
          result = sub_1016FF80(v21, &v16, v8);
          v10 = (int)result;
          if ( !result )
            break;
          result[495] |= 1u;
          *((float *)result + 498) = v16;
          *((float *)result + 499) = v17;
          v11 = (double)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, -3, 3);
          v12 = *(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8);
          v20 = v11;
          v13 = (double)v12(dword_10413198, 80, 140);
          v15 = (char *)v19 - 1;
          v14 = sin(v20);
          *(float *)(v10 + 2108) = cos(v20) * a7;
          *(float *)(v10 + 2112) = a7 * v14;
          *(float *)(v10 + 2116) = v13;
          *(float *)(v10 + 1984) = (a4 - v18) / v13 + *((float *)off_103DC81C + 3) - 0.1;
          *(float *)(v10 + 2072) = (float)(*(int (__thiscall **)(int, _DWORD, char *))(*(_DWORD *)dword_10413198 + 8))(
                                            dword_10413198,
                                            0,
                                            v15);
          *(float *)(v10 + 2060) = 1.0
                                 / ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                                     dword_10413198,
                                     4.0,
                                     8.0);
          sub_10035090((_BYTE *)v10, 4, 0);
          if ( *(_DWORD *)(v10 + 88) != -1056964609 )
            *(_DWORD *)(v10 + 88) = -1056964609;
          result = (_DWORD *)((char *)v23 + 1);
          v23 = result;
          if ( (int)result >= (int)a6 )
            break;
          v8 = (int)v22;
        }
      }
    }
  }
  return result;
}
