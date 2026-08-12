unsigned __int8 __thiscall sub_1017C4F0(_DWORD *this, int *a2)
{
  unsigned __int8 result; // al

  result = sub_1010D100((int)(a2 + 2), 5);
  if ( result )
  {
    result = (unsigned __int8)sub_1010DDD0(this + 214, a2[2], a2[3], a2[4], a2[5], a2[6], a2[7]);
    if ( !this[215] )
    {
      result = sub_1010C7F0((float *)dword_10614CA8, (int)this, "CompareValues", 0.0, *a2, (int)this, a2[7]);
      this[215] = 1;
    }
  }
  return result;
}
