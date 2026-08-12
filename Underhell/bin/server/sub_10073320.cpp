char __thiscall sub_10073320(int this)
{
  unsigned __int16 v2; // dx
  int v3; // eax
  unsigned __int16 v4; // bx
  unsigned __int16 v5; // di
  int v6; // edi
  unsigned __int16 v8; // [esp+8h] [ebp-4h]

  v2 = *(_WORD *)(this + 22);
  LOBYTE(v3) = -1;
  if ( v2 != 0xFFFF )
  {
    v3 = *(_DWORD *)(this + 8);
    v4 = (v3 > 0) - 1;
    v8 = v4;
    if ( v3 > 0 )
    {
      do
      {
        v5 = v4;
        if ( v4 < v3 && v4 <= v2 )
        {
          LOBYTE(v3) = sub_10070C50((_DWORD *)this, v8) != (__int16)v4;
          if ( (_BYTE)v3 )
          {
            v6 = 32 * v4;
            sub_102375F0(*(_DWORD *)(this + 4) + v6 + 12);
            *(_WORD *)(*(_DWORD *)(this + 4) + v6 + 2) = *(_WORD *)(this + 20);
            v3 = *(_DWORD *)(this + 4);
            *(_WORD *)(v6 + v3) = v4;
            v5 = v4;
            *(_WORD *)(this + 20) = v4;
          }
        }
        v2 = *(_WORD *)(this + 22);
        if ( v4 == v2 )
          break;
        v3 = *(_DWORD *)(this + 8);
        v4 = v5 + 1;
        if ( (unsigned __int16)(v8 + 1) >= v3 )
          v4 = -1;
        v8 = v4;
      }
      while ( v4 != 0xFFFF );
    }
    *(_DWORD *)(this + 16) = 0xFFFF;
  }
  return v3;
}
