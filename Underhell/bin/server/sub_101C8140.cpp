char __thiscall sub_101C8140(int this)
{
  unsigned __int16 v2; // dx
  int v3; // eax
  unsigned __int16 v4; // bx
  unsigned __int16 v5; // di
  int v6; // edi
  unsigned __int16 v7; // di
  unsigned __int16 v9; // [esp+8h] [ebp-4h]

  v2 = *(_WORD *)(this + 22);
  LOBYTE(v3) = -1;
  if ( v2 != 0xFFFF )
  {
    v3 = *(_DWORD *)(this + 8);
    v4 = (v3 > 0) - 1;
    v9 = v4;
    if ( v3 > 0 )
    {
      do
      {
        v5 = v4;
        if ( v4 < v3 && v4 <= v2 )
        {
          LOBYTE(v3) = sub_101C54A0((_DWORD *)this, v9) != (__int16)v4;
          if ( (_BYTE)v3 )
          {
            v6 = 36 * v4;
            sub_102375F0(*(_DWORD *)(this + 4) + v6 + 16);
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
        v7 = (unsigned __int16)(v9 + 1) >= v3 ? -1 : v5 + 1;
        v4 = v7;
        v9 = v7;
      }
      while ( v7 != 0xFFFF );
    }
    *(_DWORD *)(this + 16) = 0xFFFF;
  }
  return v3;
}
