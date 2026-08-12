__int16 __thiscall sub_100A32A0(int this)
{
  __int16 v2; // ax
  __int16 v3; // cx
  int v4; // eax
  __int16 v5; // cx
  __int16 v6; // cx
  __int16 v7; // di
  __int16 v8; // cx
  int v9; // eax
  __int16 v10; // cx
  __int16 v11; // cx
  __int16 result; // ax

  v2 = *(_WORD *)(this + 20);
  if ( v2 == -1 )
  {
    v3 = *(_WORD *)(this + 22);
    if ( v3 < 0 || (v4 = *(_DWORD *)(this + 8), v3 >= v4) )
    {
      v4 = *(_DWORD *)(this + 8);
      v6 = (v4 > 0) - 1;
    }
    else
    {
      v5 = *(_WORD *)(this + 22);
      if ( (__int16)(v5 + 1) < 0 || (__int16)(v5 + 1) >= v4 )
        v6 = -1;
      else
        v6 = v5 + 1;
    }
    v7 = v6;
    if ( v6 < 0 || v6 >= v4 )
    {
      sub_1009AA80((_DWORD *)(this + 4), 1);
      v8 = *(_WORD *)(this + 22);
      if ( v8 < 0 || (v9 = *(_DWORD *)(this + 8), v8 >= v9) )
      {
        v9 = *(_DWORD *)(this + 8);
        v11 = (v9 > 0) - 1;
      }
      else
      {
        v10 = *(_WORD *)(this + 22);
        if ( (__int16)(v10 + 1) < 0 || (__int16)(v10 + 1) >= v9 )
          v11 = -1;
        else
          v11 = v10 + 1;
      }
      v7 = v11;
      if ( v11 < 0 || v11 >= v9 )
        Error("CUtlRBTree overflow!\n");
    }
    *(_WORD *)(this + 22) = v7;
  }
  else
  {
    v7 = *(_WORD *)(this + 20);
    *(_WORD *)(this + 20) = *(_WORD *)(*(_DWORD *)(this + 4) + 60 * v2 + 2);
  }
  if ( *(_DWORD *)(this + 4) + 60 * v7 != -8 )
    sub_100A0F60((char *)(*(_DWORD *)(this + 4) + 60 * v7 + 12));
  result = v7;
  *(_DWORD *)(this + 24) = *(_DWORD *)(this + 4);
  return result;
}
