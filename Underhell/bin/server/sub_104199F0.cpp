double __thiscall sub_104199F0(int this, float a2, int a3)
{
  int v4; // ecx
  double v5; // st7
  int v6; // edi
  double result; // st7
  float v8; // [esp+0h] [ebp-10h]

  v4 = *(_DWORD *)(this + 88);
  if ( !v4 || -1.0 == *(float *)(v4 + 76) || (v5 = a2, a2 < (double)*(float *)(v4 + 72)) )
  {
    v6 = a3;
    if ( a3 == 1 )
      return 0.5;
    if ( *(_BYTE *)(this + 72) )
    {
      result = *(float *)(this + 75);
    }
    else
    {
      result = 0.0;
      if ( *(float *)(this + 12) != *(float *)(this + 8) )
        result = -*(float *)(this + 8) / (*(float *)(this + 12) - *(float *)(this + 8));
    }
  }
  else
  {
    v6 = a3;
    if ( v5 <= *(float *)(v4 + 76) )
    {
      v8 = v5 - *(float *)(v4 + 72);
      result = sub_10418F30(this, v8, a3);
    }
    else
    {
      result = sub_104182A0((float *)this, a3, 0);
    }
  }
  if ( !v6 && *(float *)(this + 12) != *(float *)(this + 8) )
    return result * (*(float *)(this + 12) - *(float *)(this + 8)) + *(float *)(this + 8);
  return result;
}
