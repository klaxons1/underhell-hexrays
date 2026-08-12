int __thiscall sub_100DD5E0(_DWORD *this, int a2, float *a3, int a4)
{
  _DWORD *v5; // edi
  int result; // eax

  if ( (this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  v5 = this + 125;
  if ( a2 )
    sub_10421CE0(this + 125, 0, a2);
  if ( a3 )
  {
    sub_10421CE0(v5, 1, a3);
    *a3 = *a3 * -1.0;
    a3[1] = a3[1] * -1.0;
    a3[2] = -1.0 * a3[2];
  }
  result = a4;
  if ( a4 )
    return sub_10421CE0(v5, 2, a4);
  return result;
}
