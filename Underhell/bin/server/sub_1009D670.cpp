void __thiscall sub_1009D670(int this)
{
  __int16 v2; // cx
  __int16 v3; // si
  int v4; // ebx
  __int16 v5; // [esp+4h] [ebp-4h]

  v2 = *(_WORD *)(this + 22);
  if ( v2 != -1 )
  {
    v3 = (*(_DWORD *)(this + 8) > 0) - 1;
    v5 = v3;
    if ( *(int *)(this + 8) > 0 )
    {
      do
      {
        if ( v3 >= 0 && v3 < *(_DWORD *)(this + 8) && v3 <= v2 && sub_1009B360((_DWORD *)this, v5) != v3 )
        {
          v4 = 2 * v3;
          *(_WORD *)(*(_DWORD *)(this + 4) + 8 * v4 + 2) = *(_WORD *)(this + 20);
          *(_WORD *)(*(_DWORD *)(this + 4) + 8 * v4) = v3;
          *(_WORD *)(this + 20) = v3;
        }
        v2 = *(_WORD *)(this + 22);
        if ( v3 == v2 )
          break;
        if ( (__int16)(v5 + 1) < 0 || (__int16)(v5 + 1) >= *(_DWORD *)(this + 8) )
          v3 = -1;
        else
          ++v3;
        v5 = v3;
      }
      while ( v3 != -1 );
    }
    *(_WORD *)(this + 16) = -1;
    *(_WORD *)(this + 18) = 0;
  }
}
