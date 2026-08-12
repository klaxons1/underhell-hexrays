void __thiscall sub_1001EE20(float *this)
{
  double v1; // st7
  float v2; // [esp+0h] [ebp-Ch]

  v1 = this[2];
  *((_BYTE *)this + 4) = 1;
  if ( 0.0 == this[3] )
  {
    *this = v1 + *(float *)(dword_106B31C8 + 12);
  }
  else
  {
    v2 = v1;
    *this = ((double (__thiscall *)(_DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              LODWORD(v2),
              this[3])
          + *(float *)(dword_106B31C8 + 12);
  }
}
