int __thiscall sub_100EC3F0(_DWORD *this, int a2, float a3, int a4)
{
  int result; // eax
  int v6; // eax
  double v7; // st7
  int v8; // edi
  int v9; // eax

  if ( a4 )
  {
    v6 = sub_100E91A0(this, a4);
    if ( v6 == -1 )
      v6 = sub_100EC390(this, a4);
    v7 = a3;
    v8 = 16 * v6;
    *(_DWORD *)(16 * v6 + this[36]) = a2;
    if ( 0.0 == a3 )
    {
      return a2;
    }
    else
    {
      if ( -1.0 == v7 )
        v9 = -1;
      else
        v9 = (int)(v7 / *(float *)(dword_106B31C8 + 28) + 0.5);
      *(_DWORD *)(this[36] + v8 + 8) = v9;
      sub_100E9380(this, v9 != -1);
      return a2;
    }
  }
  else
  {
    result = a2;
    this[2] = a2;
  }
  return result;
}
