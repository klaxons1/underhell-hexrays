bool __thiscall sub_100621B0(_DWORD *this, int a2)
{
  float v5; // eax
  float *v6; // edi
  float v7; // edx
  char v8; // al
  float v9; // [esp+8h] [ebp-Ch]
  float v10; // [esp+Ch] [ebp-8h]
  float v11; // [esp+10h] [ebp-4h]
  char v12; // [esp+1Fh] [ebp+Bh]

  if ( ((1 << a2) & this[484]) == 0 )
    return 0;
  v5 = *(float *)&this[3 * a2 + 304];
  v6 = (float *)&this[3 * a2 + 304];
  v7 = *(float *)&this[3 * a2 + 306];
  v12 = *((_BYTE *)this + a2 + 1212);
  v10 = *(float *)&this[3 * a2 + 305];
  v9 = v5;
  v11 = v7;
  v8 = sub_10061020((int)this, (int)this, a2, (float *)&this[3 * a2 + 304]);
  *((_BYTE *)this + a2 + 1212) = v8;
  return !v12 && !v8
      || fabs(v9 - *v6) > 0.1
      || fabs(v10 - *(float *)&this[3 * a2 + 305]) > 0.1
      || fabs(v11 - *(float *)&this[3 * a2 + 306]) > 0.1;
}
