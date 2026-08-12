void __thiscall sub_100A31B0(int this)
{
  __int16 v2; // cx
  __int16 v3; // bx
  int v4; // ecx
  int v5; // esi
  int v6; // [esp+4h] [ebp-8h]
  __int16 v7; // [esp+8h] [ebp-4h]

  v2 = *(_WORD *)(this + 22);
  if ( v2 != -1 )
  {
    v3 = (*(_DWORD *)(this + 8) > 0) - 1;
    v7 = v3;
    if ( *(int *)(this + 8) > 0 )
    {
      do
      {
        if ( v3 >= 0 && v3 < *(_DWORD *)(this + 8) && v3 <= v2 && *sub_1009A8F0((_DWORD *)this, v7) != v3 )
        {
          v4 = *(_DWORD *)(this + 4);
          v5 = 60 * v3;
          v6 = v5 + v4 + 12;
          sub_10184660(*(_DWORD *)(v5 + v4 + 52));
          sub_102375F0(v6 + 20);
          sub_102375F0(v6);
          *(_WORD *)(v5 + *(_DWORD *)(this + 4) + 2) = *(_WORD *)(this + 20);
          *(_WORD *)(v5 + *(_DWORD *)(this + 4)) = v3;
          *(_WORD *)(this + 20) = v3;
        }
        v2 = *(_WORD *)(this + 22);
        if ( v3 == v2 )
          break;
        if ( (__int16)(v7 + 1) < 0 || (__int16)(v7 + 1) >= *(_DWORD *)(this + 8) )
          v3 = -1;
        else
          ++v3;
        v7 = v3;
      }
      while ( v3 != -1 );
    }
    *(_WORD *)(this + 16) = -1;
    *(_WORD *)(this + 18) = 0;
  }
}
