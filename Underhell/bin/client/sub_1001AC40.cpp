int __thiscall sub_1001AC40(int *this, int *a2)
{
  int v3; // edi
  int v5; // [esp-8h] [ebp-14h]
  int v6; // [esp-8h] [ebp-14h]
  int v7; // [esp-4h] [ebp-10h]
  int v8; // [esp-4h] [ebp-10h]

  if ( ((unsigned __int8)a2 & 7) != 0 )
  {
    Error("CTSListBase: Misaligned node\n");
    __debugbreak();
  }
  v3 = *this;
  v7 = this[1];
  v5 = *this;
  *a2 = *this;
  if ( !(unsigned __int8)ThreadInterlockedAssignIf64(this, a2, v7 + 65537, v5, v7) )
  {
    do
    {
      _mm_pause();
      v3 = *this;
      v8 = this[1];
      v6 = *this;
      *a2 = *this;
    }
    while ( !(unsigned __int8)ThreadInterlockedAssignIf64(this, a2, v8 + 65537, v6, v8) );
  }
  return v3;
}
