int __thiscall sub_1009B7F0(int this)
{
  int v2; // ecx
  __int16 v3; // cx
  int v4; // eax
  __int16 v5; // cx
  __int16 v6; // cx
  unsigned __int16 v7; // di
  __int16 v8; // cx
  int v9; // eax
  __int16 v10; // cx
  __int16 v11; // cx
  int v12; // ecx
  int result; // eax
  int v14; // edx
  int v15; // ecx

  v2 = *(unsigned __int16 *)(this + 20);
  if ( (_WORD)v2 == 0xFFFF )
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
      sub_1009AB40((_DWORD *)(this + 4), 1);
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
    v12 = *(_DWORD *)(this + 4);
    *(_WORD *)(this + 22) = v7;
    result = v7;
    *(_DWORD *)(this + 24) = v12;
  }
  else
  {
    v14 = (__int16)v2;
    result = v2;
    v15 = *(_DWORD *)(this + 4);
    *(_WORD *)(this + 20) = *(_WORD *)(v15 + 16 * v14 + 2);
    *(_DWORD *)(this + 24) = v15;
  }
  return result;
}
