int __thiscall sub_100605E0(int this, float *a2, float a3, float a4)
{
  int v4; // edi
  int v6; // eax
  double v7; // st4
  double v8; // st5
  double v9; // st7
  int result; // eax
  float v11; // [esp+0h] [ebp-14h]
  int v12; // [esp+10h] [ebp-4h]

  v4 = 0;
  v12 = 0;
  if ( *(int *)(this + 1904) > 0 )
  {
    do
    {
      v6 = *(_DWORD *)(this + 1264);
      v7 = *(float *)(v6 + v4 + 4) - a2[1];
      v8 = *(float *)(v6 + v4 + 8) - a2[2];
      v11 = v8 * v8 + v7 * v7 + (*(float *)(v6 + v4) - *a2) * (*(float *)(v6 + v4) - *a2);
      v9 = 1.0 - off_103EDFE0(v11) / a3;
      if ( v9 >= 0.0 )
        *(float *)(this + 1972) = v9 * a4 + *(float *)(this + 1972);
      result = v12 + 1;
      v4 += 36;
      v12 = result;
    }
    while ( result < *(_DWORD *)(this + 1904) );
  }
  return result;
}
