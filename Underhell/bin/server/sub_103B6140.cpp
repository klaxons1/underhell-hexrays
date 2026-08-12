float *__thiscall sub_103B6140(int this, int a2)
{
  float *result; // eax
  int v4; // esi
  float *v5; // edi
  int savedregs; // [esp+Ch] [ebp+0h] BYREF
  int v7; // [esp+14h] [ebp+8h]

  sub_100C2C60(this, (int)&savedregs, a2);
  result = *(float **)(this + 888);
  v4 = 0;
  if ( result && *((_DWORD *)result + 1020) )
  {
    v5 = result + 935;
    sub_100FFEC0(result + 935, (float *)(this + 3700));
    v7 = 0;
    do
    {
      sub_10101C70(v5, v4 + *(_DWORD *)(this + 888));
      result = (float *)sub_10100060(v5);
      if ( (_BYTE)result )
        result = sub_103B20A0((char *)(this + 3712), v7, v5 + 24);
      ++v7;
      v4 += 340;
    }
    while ( v4 < 2040 );
  }
  return result;
}
