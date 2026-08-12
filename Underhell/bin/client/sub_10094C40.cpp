__int16 __cdecl sub_10094C40(float a1)
{
  double v1; // st7
  float v2; // edx
  int v3; // eax
  int v4; // ecx
  int v5; // esi
  float v7; // [esp+8h] [ebp+8h]
  __int16 v8; // [esp+8h] [ebp+8h]

  v1 = 65504.0;
  if ( a1 <= 65504.0 )
  {
    v1 = a1;
    if ( a1 < -65504.0 )
      v1 = -65504.0;
  }
  v7 = v1;
  v2 = v7;
  v3 = LOWORD(v7) & 0x7FFF | (LODWORD(v7) >> 31 << 15);
  v4 = (unsigned __int8)(LODWORD(v7) >> 23);
  v8 = LOWORD(v7) & 0x7FFF | (LODWORD(v7) >> 31 << 15);
  if ( !v4 && (LODWORD(v2) & 0x7FFFFF) == 0 )
    goto LABEL_12;
  if ( !v4 && (LODWORD(v2) & 0x7FFFFF) != 0 )
  {
    LOWORD(v3) = v3 & 0x8000;
    return v3;
  }
  if ( v4 == 255 )
  {
    if ( (LODWORD(v2) & 0x7FFFFF) == 0 )
    {
      LOWORD(v3) = v8 & 0x8000 | 0x7BFF;
      return v3;
    }
LABEL_12:
    LOWORD(v3) = v3 & 0x8000;
    return v3;
  }
  v5 = v4 - 127;
  if ( v4 - 127 < -24 )
  {
    LOWORD(v3) = v3 & 0x8000;
    v8 = v3;
  }
  if ( v5 >= -14 )
  {
    if ( v5 <= 15 )
      return (((_WORD)v5 + 15) << 10) & 0x7C00 | (LODWORD(v2) >> 13) & 0x3FF | v8 & 0x8000;
    else
      LOWORD(v3) = v8 & 0x8000 | 0x7BFF;
  }
  else
  {
    LOWORD(v3) = v3 & 0x83FF;
    if ( (unsigned int)(113 - v4 - 1) <= 9 )
      LOWORD(v3) = (v3 ^ ((1 << (10 - (113 - v4))) + ((LODWORD(v2) & 0x7FFFFFu) >> (113 - v4 + 13)))) & 0x3FF ^ v3;
  }
  return v3;
}
