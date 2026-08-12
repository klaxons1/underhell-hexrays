int __thiscall sub_101EAFC0(int this)
{
  unsigned __int16 v2; // cx
  int v3; // eax
  unsigned __int16 *v4; // ebp
  unsigned __int16 v5; // cx
  unsigned __int16 v6; // di
  int v7; // ebx
  unsigned __int16 *v8; // eax
  int v9; // ecx
  int result; // eax
  int v11; // edx
  int v12; // ecx
  unsigned __int16 v13; // [esp+6h] [ebp-2h] BYREF

  v2 = *(_WORD *)(this + 20);
  if ( v2 == 0xFFFF )
  {
    v3 = *(_DWORD *)(this + 8);
    v4 = (unsigned __int16 *)(this + 22);
    if ( *(unsigned __int16 *)(this + 22) >= v3 )
    {
      v5 = (v3 > 0) - 1;
    }
    else if ( (unsigned __int16)(*v4 + 1) >= v3 )
    {
      v5 = -1;
    }
    else
    {
      v5 = *v4 + 1;
    }
    v13 = v5;
    v6 = v5;
    if ( v5 >= v3 )
    {
      sub_101EACD0((_DWORD *)(this + 4), 1);
      v7 = *(_DWORD *)(this + 8);
      if ( *v4 >= v7 )
      {
        v13 = (v7 > 0) - 1;
        v8 = &v13;
      }
      else
      {
        v8 = sub_101EAC30((int *)(this + 4), &v13, (_WORD *)(this + 22));
      }
      v6 = *v8;
      if ( *v8 >= v7 )
        Error("CUtlRBTree overflow!\n");
    }
    v9 = *(_DWORD *)(this + 4);
    *v4 = v6;
    result = v6;
    *(_DWORD *)(this + 24) = v9;
  }
  else
  {
    result = v2;
    v11 = 3 * v2;
    v12 = *(_DWORD *)(this + 4);
    *(_WORD *)(this + 20) = *(_WORD *)(v12 + 4 * v11 + 2);
    *(_DWORD *)(this + 24) = v12;
  }
  return result;
}
