unsigned __int8 __thiscall sub_1007E8B0(int *this, unsigned __int16 a2, int a3)
{
  int v3; // ebx
  int v5; // esi
  int v6; // eax
  char v7; // cl
  unsigned __int8 result; // al

  v3 = a3;
  v5 = this[8] + 36 * a2;
  if ( a3 == 9 )
  {
    *(_BYTE *)(v5 + 24) |= 1u;
    v3 = 8;
  }
  else
  {
    *(_BYTE *)(v5 + 24) &= ~1u;
  }
  v6 = *(unsigned __int8 *)(v5 + 25);
  v7 = v6 == 11 || v6 == 10;
  result = v3 == 11 || v3 == 10;
  if ( v7 != result )
  {
    if ( v7 )
    {
      result = sub_1007E120(this, a2);
      *(_BYTE *)(v5 + 25) = v3;
      return result;
    }
    result = (unsigned __int8)sub_1007E840(this, a2);
  }
  *(_BYTE *)(v5 + 25) = v3;
  return result;
}
