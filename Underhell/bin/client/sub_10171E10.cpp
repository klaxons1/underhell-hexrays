float *__thiscall sub_10171E10(void *this, int a2, float *a3, float *a4, float *a5, float a6, int a7)
{
  float *result; // eax
  float *v8; // esi

  result = (float *)sub_1016FF80((int)this, a3, a2);
  v8 = result;
  if ( result )
  {
    sub_10037CA0((int)result, a4);
    *((_DWORD *)v8 + 495) |= a7;
    v8[300] = 0.0;
    v8[508] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                dword_10413198,
                -255.0,
                255.0);
    v8[509] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                dword_10413198,
                -255.0,
                255.0);
    v8[510] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                dword_10413198,
                -255.0,
                255.0);
    sub_10035090(v8, 0, 0);
    *((_DWORD *)v8 + 511) = 255;
    v8[527] = *a5;
    v8[528] = a5[1];
    result = v8;
    v8[529] = a5[2];
    v8[496] = *((float *)off_103DC81C + 3) + a6;
  }
  return result;
}
