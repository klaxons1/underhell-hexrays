void __thiscall sub_102C9880(float *this, float a2)
{
  float v2; // [esp+0h] [ebp-Ch]

  if ( this[354] <= 0.09 )
  {
    this[231] = a2;
  }
  else
  {
    v2 = -this[354];
    this[231] = ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                  LODWORD(v2),
                  this[354])
              + a2;
  }
}
