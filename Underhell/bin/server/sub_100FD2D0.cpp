int __thiscall sub_100FD2D0(float *this, int a2, int a3, int a4, int a5)
{
  int result; // eax
  double v7; // st7
  float v8; // [esp+0h] [ebp-8h]

  if ( !a3 || (result = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 320))(a3), !(_BYTE)result) )
  {
    v7 = 0.0;
    if ( 0.0 == this[27] )
      v7 = this[207];
    v8 = v7;
    return sub_100FD1D0((int)this, v8);
  }
  return result;
}
