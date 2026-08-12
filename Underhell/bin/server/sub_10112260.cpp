int __thiscall sub_10112260(int *this)
{
  int result; // eax
  int *v3; // ebx
  int *v4; // esi
  int v5; // [esp-Ch] [ebp-18h]
  int v6; // [esp-Ch] [ebp-18h]
  int v7; // [esp-8h] [ebp-14h]
  int v8; // [esp-8h] [ebp-14h]
  int *v9; // [esp+8h] [ebp-4h]

  result = sub_100FE140(this);
  v3 = (int *)result;
  if ( result )
  {
    v4 = this + 2;
    do
    {
      v9 = (int *)*v3;
      if ( ((unsigned __int8)v3 & 7) != 0 )
      {
        Error("CTSListBase: Misaligned node\n");
        __debugbreak();
      }
      v7 = v4[1];
      v5 = *v4;
      *v3 = *v4;
      for ( result = ThreadInterlockedAssignIf64(v4, v3, v7 + 65537, v5, v7);
            !(_BYTE)result;
            result = ThreadInterlockedAssignIf64(v4, v3, v8 + 65537, v6, v8) )
      {
        _mm_pause();
        v8 = v4[1];
        v6 = *v4;
        *v3 = *v4;
      }
      v3 = v9;
    }
    while ( v9 );
  }
  return result;
}
