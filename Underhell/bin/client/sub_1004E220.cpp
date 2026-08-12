int __thiscall sub_1004E220(char *this, int a2)
{
  int v3; // esi
  int v4; // ecx
  double v5; // st7
  float v7; // [esp+14h] [ebp-8h]
  int v8; // [esp+18h] [ebp-4h]

  v3 = sub_101422C0();
  v7 = *((float *)sub_10034A00(this - 4) + 2) - *(float *)(v3 + 8);
  off_103EDFEC();
  LOBYTE(v4) = 0;
  v5 = v7;
  if ( v7 >= -0.85000002 )
  {
    if ( v5 >= -0.64999998 )
    {
      if ( v5 <= 0.75 )
      {
        if ( v5 > 0.55000001 )
          v4 = (int)((v5 - 0.55000001) * 5.0 * 255.0);
      }
      else
      {
        LOBYTE(v4) = -1;
      }
    }
    else
    {
      v4 = (int)((v5 + 0.64999998) * 5.0 * -255.0);
    }
  }
  else
  {
    LOBYTE(v4) = -1;
  }
  LOBYTE(v8) = v4;
  BYTE1(v8) = v4;
  BYTE2(v8) = v4;
  HIBYTE(v8) = HIBYTE(*((_DWORD *)this + 21));
  if ( *((_DWORD *)this + 21) != v8 )
    *((_DWORD *)this + 21) = v8;
  return sub_10123B40(a2);
}
