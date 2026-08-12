char __thiscall sub_102291D0(int this)
{
  unsigned __int16 v2; // dx
  int v3; // eax
  unsigned __int16 v4; // di
  unsigned __int16 v6; // [esp+4h] [ebp-4h]

  v2 = *(_WORD *)(this + 22);
  LOBYTE(v3) = -1;
  if ( v2 != 0xFFFF )
  {
    v3 = *(_DWORD *)(this + 8);
    v4 = (v3 > 0) - 1;
    v6 = v4;
    if ( v3 > 0 )
    {
      do
      {
        if ( v4 < v3 && v4 <= v2 )
        {
          LOBYTE(v3) = sub_102276C0((_DWORD *)this, v6) != (__int16)v4;
          if ( (_BYTE)v3 )
          {
            v3 = 2 * v4;
            *(_WORD *)(*(_DWORD *)(this + 4) + 8 * v3 + 2) = *(_WORD *)(this + 20);
            *(_WORD *)(*(_DWORD *)(this + 4) + 8 * v3) = v4;
            *(_WORD *)(this + 20) = v4;
          }
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
    *(_DWORD *)(this + 16) = 0xFFFF;
  }
  return v3;
}
