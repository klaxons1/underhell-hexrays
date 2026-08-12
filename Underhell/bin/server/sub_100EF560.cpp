char __thiscall sub_100EF560(int this)
{
  unsigned __int16 v2; // dx
  int v3; // eax
  unsigned __int16 v4; // bx
  unsigned __int16 v5; // di
  int v6; // eax
  int v7; // edi
  unsigned __int16 v8; // di
  int v10; // [esp+8h] [ebp-8h]
  unsigned __int16 v11; // [esp+Ch] [ebp-4h]

  v2 = *(_WORD *)(this + 22);
  LOBYTE(v3) = -1;
  if ( v2 != 0xFFFF )
  {
    v3 = *(_DWORD *)(this + 8);
    v4 = (v3 > 0) - 1;
    v11 = v4;
    if ( v3 > 0 )
    {
      do
      {
        v5 = v4;
        if ( v4 < v3 && v4 <= v2 )
        {
          LOBYTE(v3) = sub_100EE950((_DWORD *)this, v11) != (__int16)v4;
          if ( (_BYTE)v3 )
          {
            v6 = *(_DWORD *)(this + 4);
            v7 = 20 * v4;
            v10 = v6 + v7 + 8;
            sub_10184660(*(_DWORD *)(v6 + v7 + 16));
            *(_DWORD *)(v10 + 4) = 0;
            *(_DWORD *)(v10 + 8) = 0;
            LOWORD(v3) = *(_WORD *)(this + 20);
            *(_WORD *)(*(_DWORD *)(this + 4) + v7 + 2) = v3;
            *(_WORD *)(v7 + *(_DWORD *)(this + 4)) = v4;
            v5 = v4;
            *(_WORD *)(this + 20) = v4;
          }
        }
        v2 = *(_WORD *)(this + 22);
        if ( v4 == v2 )
          break;
        v3 = *(_DWORD *)(this + 8);
        v8 = (unsigned __int16)(v11 + 1) >= v3 ? -1 : v5 + 1;
        v4 = v8;
        v11 = v8;
      }
      while ( v8 != 0xFFFF );
    }
    *(_DWORD *)(this + 16) = 0xFFFF;
  }
  return v3;
}
