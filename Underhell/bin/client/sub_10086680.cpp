int __thiscall sub_10086680(int this)
{
  int v2; // ecx
  int v3; // eax
  __int16 v4; // cx
  unsigned __int16 v5; // cx
  unsigned __int16 v6; // di
  int v7; // eax
  __int16 v8; // cx
  unsigned __int16 v9; // cx
  int v10; // ecx
  int result; // eax
  int v12; // edx
  int v13; // ecx

  v2 = *(unsigned __int16 *)(this + 20);
  if ( (_WORD)v2 == 0xFFFF )
  {
    v3 = *(_DWORD *)(this + 8);
    if ( *(unsigned __int16 *)(this + 22) >= v3 )
    {
      v5 = (v3 > 0) - 1;
    }
    else
    {
      v4 = *(_WORD *)(this + 22);
      if ( (unsigned __int16)(v4 + 1) >= v3 )
        v5 = -1;
      else
        v5 = v4 + 1;
    }
    v6 = v5;
    if ( v5 >= v3 )
    {
      sub_1004F360((_DWORD *)(this + 4), 1);
      v7 = *(_DWORD *)(this + 8);
      if ( *(unsigned __int16 *)(this + 22) >= v7 )
      {
        v9 = (v7 > 0) - 1;
      }
      else
      {
        v8 = *(_WORD *)(this + 22);
        if ( (unsigned __int16)(v8 + 1) >= v7 )
          v9 = -1;
        else
          v9 = v8 + 1;
      }
      v6 = v9;
      if ( v9 >= v7 )
        Error("CUtlRBTree overflow!\n");
    }
    v10 = *(_DWORD *)(this + 4);
    *(_WORD *)(this + 22) = v6;
    result = v6;
    *(_DWORD *)(this + 24) = v10;
  }
  else
  {
    v12 = 5 * v2;
    result = v2;
    v13 = *(_DWORD *)(this + 4);
    *(_WORD *)(this + 20) = *(_WORD *)(v13 + 2 * v12 + 2);
    *(_DWORD *)(this + 24) = v13;
  }
  return result;
}
