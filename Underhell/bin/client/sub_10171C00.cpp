float *__thiscall sub_10171C00(_DWORD *this, float *a2, int a3, float *a4, int a5)
{
  float *result; // eax
  int v6; // esi
  double v7; // st7
  double v8; // st7
  double v9; // st7
  float v10; // [esp+48h] [ebp-18h]
  float v11; // [esp+4Ch] [ebp-14h]
  float v12; // [esp+54h] [ebp-Ch]
  float v13; // [esp+54h] [ebp-Ch]
  float v14; // [esp+58h] [ebp-8h]
  float v15; // [esp+58h] [ebp-8h]
  float v16; // [esp+5Ch] [ebp-4h]
  float v17; // [esp+5Ch] [ebp-4h]

  result = (float *)dword_10443C6C;
  if ( *(_DWORD *)(dword_10443C6C + 48) )
  {
    result = (float *)this[a5 + 34];
    if ( result )
    {
      result = (float *)sub_1016FF80((int)this, a2, (int)result);
      v6 = (int)result;
      if ( result )
      {
        *((_DWORD *)result + 495) |= 0xA6u;
        *((_DWORD *)result + 502) = a5 != 2 ? 32 : 128;
        result[300] = 0.0;
        result[508] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                        dword_10413198,
                        -1024.0,
                        1024.0);
        *(float *)(v6 + 2036) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                                  dword_10413198,
                                  -1024.0,
                                  1024.0);
        *(float *)(v6 + 2040) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                                  dword_10413198,
                                  -1024.0,
                                  1024.0);
        sub_10037CA0(v6, a4);
        sub_10035090((_BYTE *)v6, 0, 0);
        *(_DWORD *)(v6 + 2044) = 255;
        sub_101EDFB0(a3);
        v7 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
               dword_10413198,
               150.0,
               200.0);
        v13 = v12 * v7;
        v15 = v14 * v7;
        v17 = v7 * v16;
        v10 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                dword_10413198,
                -64.0,
                64.0)
            + v13;
        v11 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                dword_10413198,
                -64.0,
                64.0)
            + v15;
        v8 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
               dword_10413198,
               0.0,
               64.0)
           + v17;
        *(float *)(v6 + 2108) = v10;
        *(float *)(v6 + 2112) = v11;
        *(float *)(v6 + 2116) = v8;
        v9 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
               dword_10413198,
               0.0,
               1.0);
        result = (float *)off_103DC81C;
        *(float *)(v6 + 1984) = v9 + *((float *)off_103DC81C + 3) + 1.0;
      }
    }
  }
  return result;
}
