float *__thiscall sub_100D3560(int this, int a2, float a3)
{
  int v4; // edi
  float *result; // eax
  int *v6; // ecx
  double v7; // st7
  double v8; // [esp+Ch] [ebp-8h] BYREF

  v4 = sub_100BDCE0(this, a2);
  if ( v4 != -1 || (result = (float *)sub_100BDCE0(this, 174), v4 = (int)result, result != (float *)-1) )
  {
    sub_100C1170(this, v4);
    *(_DWORD *)(this + 1160) = a2;
    if ( *(_DWORD *)(this + 904) != COERCE_INT(0.0) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v6 = *(int **)(this + 24);
        if ( v6 )
          sub_100194B0(v6, 904);
      }
      *(float *)(this + 904) = 0.0;
    }
    sub_100C2AB0(this);
    if ( a3 <= 0.0 )
    {
      v7 = 1.0;
    }
    else
    {
      sub_10019B30((_DWORD *)this, v4);
      a3 = 0.0 / a3;
      sub_10045790((float *)(this + 864), &a3);
      if ( *(float *)(this + 864) >= 12.0 )
        v7 = 12.0;
      else
        v7 = *(float *)(this + 864);
    }
    v8 = v7;
    return sub_10045730((float *)(this + 864), &v8);
  }
  return result;
}
