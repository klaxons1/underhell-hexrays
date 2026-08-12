_DWORD *__thiscall sub_101706F0(void *this, float *a2, float *a3, float a4, _DWORD *a5, _DWORD *a6, float a7)
{
  _DWORD *result; // eax
  int v9; // esi
  int v10; // edx
  float *v11; // eax
  double v12; // st7
  double v13; // st6
  char *v14; // [esp+3Ch] [ebp-3Ch]
  float v15; // [esp+4Ch] [ebp-2Ch] BYREF
  float v16; // [esp+50h] [ebp-28h]
  float v17; // [esp+54h] [ebp-24h]
  _DWORD *v18; // [esp+58h] [ebp-20h]
  float *v19; // [esp+5Ch] [ebp-1Ch]
  float *v20; // [esp+60h] [ebp-18h]
  int v21; // [esp+64h] [ebp-14h]
  _DWORD *v22; // [esp+68h] [ebp-10h]
  _DWORD *v23; // [esp+6Ch] [ebp-Ch]
  float v24; // [esp+70h] [ebp-8h] BYREF
  float v25; // [esp+74h] [ebp-4h] BYREF
  float v26; // [esp+80h] [ebp+8h]

  result = a5;
  v21 = (int)this;
  if ( a5 )
  {
    result = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_10413178 + 4))(dword_10413178, a5);
    v22 = result;
    if ( result )
    {
      result = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_10413178 + 32))(dword_10413178, result);
      v18 = result;
      v23 = 0;
      if ( (int)a6 > 0 )
      {
        do
        {
          v15 = (float)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(
                         dword_10413198,
                         (int)*a2,
                         (int)*a3);
          v16 = (float)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(
                         dword_10413198,
                         (int)a2[1],
                         (int)a3[1]);
          v17 = (float)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(
                         dword_10413198,
                         (int)a2[2],
                         (int)a3[2]);
          result = sub_1016FF80(v21, &v15, (int)v22);
          v9 = (int)result;
          if ( !result )
            break;
          result[495] |= 1u;
          *((float *)result + 498) = v15;
          v20 = &v24;
          *((float *)result + 499) = v16;
          v10 = *(_DWORD *)dword_10413198;
          v19 = &v25;
          v26 = (float)(*(int (__thiscall **)(int, int, int))(v10 + 8))(dword_10413198, -3, 3);
          v11 = v20;
          *v19 = cos(v26);
          *v11 = sin(v26);
          v12 = (double)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 80, 140);
          v14 = (char *)v18 - 1;
          v13 = a7 * v24;
          *(float *)(v9 + 2108) = v25 * a7;
          *(float *)(v9 + 2112) = v13;
          *(float *)(v9 + 2116) = v12;
          *(float *)(v9 + 1984) = (a4 - (v17 - a2[2])) / v12 + *((float *)off_103DC81C + 3) - 0.1;
          *(float *)(v9 + 2072) = (float)(*(int (__thiscall **)(int, _DWORD, char *))(*(_DWORD *)dword_10413198 + 8))(
                                           dword_10413198,
                                           0,
                                           v14);
          *(float *)(v9 + 2060) = 1.0
                                / ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                                    dword_10413198,
                                    4.0,
                                    16.0);
          sub_10035090((_BYTE *)v9, 4, 0);
          if ( *(_DWORD *)(v9 + 88) != -1056964609 )
            *(_DWORD *)(v9 + 88) = -1056964609;
          result = (_DWORD *)((char *)v23 + 1);
          v23 = result;
        }
        while ( (int)result < (int)a6 );
      }
    }
  }
  return result;
}
