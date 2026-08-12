int __thiscall sub_102C91E0(float *this, int a2, int a3, int a4)
{
  int result; // eax
  float v5; // edx

  if ( 0.0 == this[200] )
  {
    result = dword_106B31C8;
    this[200] = *(float *)(dword_106B31C8 + 12);
  }
  else
  {
    result = (int)((*(float *)(dword_106B31C8 + 12) - this[200]) * this[201]);
    if ( result > 0 )
    {
      v5 = *this;
      this[200] = *(float *)(dword_106B31C8 + 12);
      return (*(int (__thiscall **)(float *, int, int, int, int, _DWORD))(LODWORD(v5) + 752))(
               this,
               result,
               a2,
               a3,
               a4,
               0);
    }
  }
  return result;
}
