double __thiscall sub_100C1460(_DWORD *this, int a2, char *String2, float a4)
{
  int v5; // eax
  double result; // st7
  int v7; // esi
  float v8; // [esp+1Ch] [ebp+8h]

  v5 = sub_100BD5F0(a2, String2);
  result = a4;
  v7 = v5;
  if ( a2 )
  {
    if ( v5 < 0 )
    {
      return a4;
    }
    else
    {
      sub_10100260(a2, v5, a4, (int)&String2);
      v8 = result;
      sub_100BD990(this + 228, v7, (float *)&String2);
      return v8;
    }
  }
  return result;
}
