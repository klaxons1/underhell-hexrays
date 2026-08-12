void __thiscall sub_1019D7D0(float *this, float *a2, int a3)
{
  double v3; // st7
  _BYTE v4[8]; // [esp+Ch] [ebp-Ch] BYREF
  float v5; // [esp+14h] [ebp-4h]

  if ( *((float *)off_103DC81C + 4) >= 0.000001 )
  {
    sub_1019CFB0(this, a2, a3, *((float *)off_103DC81C + 4));
    sub_101EE040(a3, 0, 0, v4);
    v3 = v5;
    if ( v5 < 0.0 )
    {
      v3 = 0.0;
      v5 = 0.0;
    }
    a2[2] = v3 * *(float *)(dword_10434E24 + 44) + a2[2];
  }
  else
  {
    *a2 = this[558];
    a2[1] = this[559];
    a2[2] = this[560];
    sub_101EE040(a3, 0, 0, v4);
    if ( v5 >= 0.0 )
    {
      a2[2] = v5 * *(float *)(dword_10434E24 + 44) + a2[2];
    }
    else
    {
      v5 = 0.0;
      a2[2] = 0.0 * *(float *)(dword_10434E24 + 44) + a2[2];
    }
  }
}
