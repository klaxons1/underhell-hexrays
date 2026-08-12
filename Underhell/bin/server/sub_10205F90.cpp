char *__thiscall sub_10205F90(int this)
{
  char *v2; // eax
  _DWORD *v3; // eax
  int v4; // edi
  _DWORD *v6; // eax
  const char *v7; // eax
  const char *v8; // eax
  const char *v9; // eax
  const char *v10; // [esp-8h] [ebp-10h]
  const char *v11; // [esp-4h] [ebp-Ch]
  const char *v12; // [esp-4h] [ebp-Ch]

  byte_106C1B24 = 0;
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  *(float *)(this + 800) = *(float *)(this + 580);
  *(float *)(this + 804) = *(float *)(this + 584);
  *(float *)(this + 808) = *(float *)(this + 588);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  *(float *)(this + 812) = *(float *)(this + 704);
  *(float *)(this + 816) = *(float *)(this + 708);
  *(float *)(this + 820) = *(float *)(this + 712);
  flt_106C1B28 = 0.0;
  flt_106C1B2C = 0.0;
  flt_106C1B30 = 0.0;
  if ( (*(_BYTE *)(this + 248) & 1) == 0 )
    return sub_100E38F0((float *)this);
  v2 = *(char **)(this + 212);
  if ( !v2 )
    v2 = (char *)String;
  v3 = sub_1012BF20(&dword_1069E3E0, 0, v2, 0, 0, 0, 0);
  v4 = (int)v3;
  if ( v3 )
  {
    if ( sub_10205F20(v3) )
    {
      if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
        sub_100DAE60(v4);
      *(float *)(this + 800) = *(float *)(v4 + 580);
      *(float *)(this + 804) = *(float *)(v4 + 584);
      *(float *)(this + 808) = *(float *)(v4 + 588);
      if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
        sub_100DAE60(v4);
      *(float *)(this + 812) = *(float *)(v4 + 704);
      *(float *)(this + 816) = *(float *)(v4 + 708);
      *(float *)(this + 820) = *(float *)(v4 + 712);
      return sub_100E38F0((float *)this);
    }
    v6 = (_DWORD *)sub_100233D0((_DWORD *)v4);
    v11 = sub_100D6390(v6);
    v10 = sub_100D6390((_DWORD *)v4);
    v7 = sub_100D6390((_DWORD *)this);
    Warning("ERROR: (%s) can't teleport object (%s) as it has a parent (%s)!\n", v7, v10, v11);
    return sub_100E38F0((float *)this);
  }
  v8 = *(const char **)(this + 212);
  if ( !v8 )
    v8 = String;
  v12 = v8;
  v9 = sub_100D6390((_DWORD *)this);
  Warning("ERROR: (%s) target '%s' not found. Deleting.\n", v9, v12);
  return (char *)sub_1025FAC0(this);
}
