void __thiscall sub_10204FF0(int this, unsigned int *a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  int v5; // eax
  int v6; // eax
  double v7; // st7
  float v8; // [esp+4h] [ebp-8h]
  float v9; // [esp+8h] [ebp-4h]

  v3 = *(_DWORD *)(this + 800);
  if ( v3 == -1 || (v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 1], v4[1] != v3 >> 12) )
    v5 = 0;
  else
    v5 = *v4;
  v8 = *(float *)(this + 804);
  if ( v5 )
  {
    v7 = sub_10204A80(this, v5);
    if ( *(_DWORD *)(dword_106C1ACC + 48) )
    {
      sub_10204670(this);
      v9 = v7;
      v7 = v9;
    }
    if ( v8 < v7 )
    {
      v6 = 1;
      goto LABEL_13;
    }
    if ( v8 != v7 )
    {
      v6 = -1;
      goto LABEL_13;
    }
  }
  v6 = 0;
LABEL_13:
  sub_10204340((_DWORD *)this, v6, *a2);
}
