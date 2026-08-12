void __thiscall sub_103E0AB0(float *this, float *a2, int a3)
{
  double v3; // st7
  _BYTE v4[8]; // [esp+Ch] [ebp-Ch] BYREF
  float v5; // [esp+14h] [ebp-4h]

  if ( *(float *)(dword_106B31C8 + 16) >= 0.000001 )
  {
    sub_103DFD20(this, a2, a3, *(float *)(dword_106B31C8 + 16));
    sub_104222B0(a3, 0, 0, v4);
    v3 = v5;
    if ( v5 < 0.0 )
    {
      v3 = 0.0;
      v5 = 0.0;
    }
    a2[2] = v3 * *(float *)(dword_106B76EC + 44) + a2[2];
  }
  else
  {
    *a2 = this[431];
    a2[1] = this[432];
    a2[2] = this[433];
    sub_104222B0(a3, 0, 0, v4);
    if ( v5 >= 0.0 )
    {
      a2[2] = v5 * *(float *)(dword_106B76EC + 44) + a2[2];
    }
    else
    {
      v5 = 0.0;
      a2[2] = 0.0 * *(float *)(dword_106B76EC + 44) + a2[2];
    }
  }
}
