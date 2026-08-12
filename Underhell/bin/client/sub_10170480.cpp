float *__thiscall sub_10170480(void *this, int a2, float *a3, int a4, int a5)
{
  int (__thiscall *v5)(int); // edx
  float *result; // eax
  int v7; // esi
  int v8; // edx
  int v9; // eax
  int v10; // esi
  int v11; // ebx
  float *v12; // edi
  float *v13; // esi
  double v14; // st7
  double v15; // st6
  float v16[3]; // [esp+48h] [ebp-40h] BYREF
  float v17; // [esp+54h] [ebp-34h] BYREF
  float v18; // [esp+58h] [ebp-30h]
  float v19; // [esp+5Ch] [ebp-2Ch]
  float v20; // [esp+60h] [ebp-28h] BYREF
  float v21; // [esp+64h] [ebp-24h]
  float v22; // [esp+68h] [ebp-20h]
  float v23; // [esp+6Ch] [ebp-1Ch]
  int v24; // [esp+70h] [ebp-18h]
  int v25; // [esp+74h] [ebp-14h]
  float v26; // [esp+78h] [ebp-10h]
  int v27; // [esp+7Ch] [ebp-Ch]
  float v28; // [esp+80h] [ebp-8h]
  float v29; // [esp+84h] [ebp-4h]
  int v30; // [esp+90h] [ebp+8h]
  int v31; // [esp+94h] [ebp+Ch]
  float *v32; // [esp+98h] [ebp+10h]
  float v33; // [esp+9Ch] [ebp+14h]
  int v34; // [esp+9Ch] [ebp+14h]

  v5 = *(int (__thiscall **)(int))(*(_DWORD *)(a2 + 4) + 36);
  v24 = (int)this;
  result = (float *)v5(a2 + 4);
  if ( result )
  {
    result = a3;
    if ( a3 )
    {
      result = (float *)(*(int (__thiscall **)(int, float *))(*(_DWORD *)dword_10413178 + 4))(dword_10413178, a3);
      v31 = (int)result;
      if ( result )
      {
        v7 = *(_DWORD *)dword_10413178;
        v8 = *(_DWORD *)(a2 + 4);
        v27 = a4 + 1;
        v9 = (*(int (__thiscall **)(int, float *, float *))(v8 + 36))(a2 + 4, &v20, v16);
        (*(void (__thiscall **)(int, int))(v7 + 24))(dword_10413178, v9);
        v23 = v16[2] - v22;
        v10 = (int)(v16[0] - v20);
        v11 = (int)(v16[1] - v21);
        v26 = (float)a5;
        v33 = *((float *)sub_10034AE0((char *)a2) + 1) * 3.141592653589793 * 0.005555555555555556;
        v28 = cos(v33);
        v29 = sin(v33);
        v28 = v28 * v26;
        v29 = v26 * v29;
        result = (float *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 32))(dword_10413178, v31);
        v12 = result;
        v32 = 0;
        if ( v27 > 0 )
        {
          v25 = v11 - 1;
          v34 = v10 - 1;
          do
          {
            v26 = COERCE_FLOAT((*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, v34));
            v17 = (double)SLODWORD(v26) + v20;
            v26 = COERCE_FLOAT((*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, v25));
            v18 = (double)SLODWORD(v26) + v21;
            v19 = v22;
            result = (float *)sub_1016FF80(v24, &v17, v31);
            v13 = result;
            if ( !result )
              break;
            *((_DWORD *)result + 495) |= 1u;
            result[498] = v17;
            result[499] = v18;
            v26 = COERCE_FLOAT((*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 80, 140));
            v14 = (double)SLODWORD(v26);
            v15 = v29;
            v13[527] = v28;
            v13[528] = v15;
            v13[529] = v14;
            v13[496] = v23 / v14 + *((float *)off_103DC81C + 3) - 0.1;
            v26 = COERCE_FLOAT(
                    (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(
                      dword_10413198,
                      0,
                      (int)v12 - 1));
            v13[518] = (float)SLODWORD(v26);
            v13[515] = 1.0
                     / ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                         dword_10413198,
                         2.0,
                         5.0);
            sub_10035090(v13, 4, 0);
            LOWORD(v30) = *((_DWORD *)v13 + 22);
            BYTE2(v30) = BYTE2(*((_DWORD *)v13 + 22));
            HIBYTE(v30) = -1;
            if ( *((_DWORD *)v13 + 22) != v30 )
              *((_DWORD *)v13 + 22) = v30;
            result = (float *)((char *)v32 + 1);
            v32 = result;
          }
          while ( (int)result < v27 );
        }
      }
    }
  }
  return result;
}
