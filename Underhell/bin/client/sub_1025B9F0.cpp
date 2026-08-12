_DWORD *__thiscall sub_1025B9F0(int this, _DWORD *a2)
{
  _DWORD *result; // eax
  long double v4; // st6
  int v5; // [esp+8h] [ebp-8h]

  if ( (*(_WORD *)(this + 292) & 0x200) != 0 )
  {
    if ( (*(_WORD *)(this + 292) & 2) != 0 )
    {
      v5 = *(_DWORD *)(this + 336);
    }
    else if ( (*(_BYTE *)(this + 292) & 1) != 0 )
    {
      v5 = *(_DWORD *)(this + 328);
    }
    else
    {
      v5 = *(_DWORD *)(this + 320);
    }
    v4 = (sin((double)(*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA80 + 24))(dword_1047CA80) * 0.0099999998) + 1.0)
       * 0.5;
    if ( (*(_WORD *)(this + 292) & 0x200) != 0 )
    {
      LOBYTE(v5) = (int)((double)*(unsigned __int8 *)(this + 348) * (1.0 - v4) + (double)(unsigned __int8)v5 * v4);
      BYTE1(v5) = (int)((double)*(unsigned __int8 *)(this + 349) * (1.0 - v4) + (double)BYTE1(v5) * v4);
      BYTE2(v5) = (int)((double)*(unsigned __int8 *)(this + 350) * (1.0 - v4) + (double)BYTE2(v5) * v4);
      HIBYTE(v5) = (int)((1.0 - v4) * (double)*(unsigned __int8 *)(this + 351) + v4 * (double)HIBYTE(v5));
    }
    result = a2;
    *a2 = v5;
  }
  else
  {
    result = a2;
    if ( (*(_WORD *)(this + 292) & 2) != 0 )
    {
      *a2 = *(_DWORD *)(this + 336);
    }
    else if ( (*(_BYTE *)(this + 292) & 1) != 0 )
    {
      *a2 = *(_DWORD *)(this + 328);
    }
    else
    {
      *a2 = *(_DWORD *)(this + 320);
    }
  }
  return result;
}
