int __thiscall sub_10211880(float *this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int i; // ebp
  int v9; // eax
  int v10; // edx
  long double v11; // st7
  long double v12; // st5
  int result; // eax
  float v14; // [esp+Ch] [ebp+4h]
  float v15; // [esp+14h] [ebp+Ch]

  for ( i = a4; i; *(float *)(a2[1524] + 4 * result) = v14 + (v15 - v14) * v12 )
  {
    v9 = a2[1655];
    v10 = a2[1656];
    v14 = this[13];
    v15 = this[14];
    v11 = this[15];
    a2[1655] = v9 + 1;
    --i;
    v12 = pow(flt_103EE7C0[((_WORD)v9 + (_WORD)v10) & 0xFFF], v11);
    result = (a3 & 3) + a2[1588] * (a3 / 4);
    ++a3;
  }
  return result;
}
