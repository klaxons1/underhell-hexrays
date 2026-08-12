double __thiscall sub_1023DA30(void *this, int a2, int a3, int a4, int a5)
{
  int v6; // edi
  double v7; // st7
  float *v8; // esi
  double result; // st7
  float v10; // [esp+30h] [ebp-Ch]
  float v11; // [esp+34h] [ebp-8h]
  float v12; // [esp+38h] [ebp-4h]

  v10 = 0.0;
  v11 = 0.0;
  v12 = 0.0;
  (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 16))(this, a2);
  v6 = 0;
  if ( a5 > 0 )
  {
    while ( 1 )
    {
      v7 = -1.0;
      v8 = (float *)(a4 + 16 * v6);
      if ( -1.0 == *v8 && -1.0 == v8[1] )
      {
        if ( v6 )
          goto LABEL_8;
        Msg("Invalid starting amplitude value in envelope!  (Cannot be -1)\n");
      }
      else
      {
        v10 = ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(*v8, v8[1]);
      }
      v7 = -1.0;
LABEL_8:
      if ( v7 == v8[2] && v8[3] == v7 )
      {
        if ( !v6 )
          Msg("Invalid starting duration value in envelope! (Cannot be -1)\n");
      }
      else
      {
        v11 = ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(v8[2], v8[3]);
      }
      (*(void (__thiscall **)(void *, int, float, int, float, float))(*(_DWORD *)this + 12))(
        this,
        a2,
        COERCE_FLOAT(LODWORD(v12)),
        a3,
        COERCE_FLOAT(LODWORD(v11)),
        COERCE_FLOAT(LODWORD(v10)));
      result = v12 + v11;
      ++v6;
      v12 = result;
      if ( v6 >= a5 )
        return result;
    }
  }
  return v12;
}
