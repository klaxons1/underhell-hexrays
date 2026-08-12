int __thiscall sub_10206AD0(float *this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int i; // ebp
  int v9; // eax
  int v10; // edx
  long double v11; // st7
  long double v12; // st5
  int result; // eax
  float v14; // [esp+Ch] [ebp+4h]
  float v15; // [esp+14h] [ebp+Ch]

  for ( i = a4; i; *(float *)(a2[1518] + 4 * result) = v14 + (v15 - v14) * v12 )
  {
    v9 = a2[1655];
    v10 = a2[1656];
    v14 = this[11];
    v15 = this[12];
    v11 = this[13];
    a2[1655] = v9 + 1;
    --i;
    v12 = pow(flt_103EE7C0[((_WORD)v9 + (_WORD)v10) & 0xFFF], v11);
    result = (a3 & 3) + a2[1582] * (a3 / 4);
    ++a3;
  }
  return result;
}
