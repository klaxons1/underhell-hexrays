void __thiscall sub_101EB810(int this)
{
  unsigned __int16 v2; // cx
  int v3; // eax
  unsigned __int16 v4; // di
  int v5; // eax
  unsigned __int16 v6; // [esp+4h] [ebp-4h]

  v2 = *(_WORD *)(this + 22);
  if ( v2 != 0xFFFF )
  {
    v3 = *(_DWORD *)(this + 8);
    v4 = (v3 > 0) - 1;
    v6 = v4;
    if ( v3 > 0 )
    {
      do
      {
        if ( v4 < v3 && v4 <= v2 && *sub_101EAC70((_DWORD *)this, v6) != v4 )
        {
          v5 = 12 * v4;
          *(_WORD *)(*(_DWORD *)(this + 4) + v5 + 2) = *(_WORD *)(this + 20);
          *(_WORD *)(v5 + *(_DWORD *)(this + 4)) = v4;
          *(_WORD *)(this + 20) = v4;
        }
        v2 = *(_WORD *)(this + 22);
        if ( v4 == v2 )
          break;
        v3 = *(_DWORD *)(this + 8);
        ++v4;
        if ( (unsigned __int16)(v6 + 1) >= v3 )
          v4 = -1;
        v6 = v4;
      }
      while ( v4 != 0xFFFF );
    }
    *(_WORD *)(this + 16) = -1;
    *(_WORD *)(this + 18) = 0;
  }
}
