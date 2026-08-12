int __thiscall sub_100DA680(int *this, char a2)
{
  int v3; // ecx
  int v4; // eax
  __int16 v5; // cx
  unsigned __int16 v6; // cx
  unsigned __int16 v7; // di
  int v8; // eax
  __int16 v9; // cx
  unsigned __int16 v10; // cx
  int result; // eax
  int v12; // edx
  int v13; // ecx

  v3 = *((unsigned __int16 *)this + 8);
  if ( (_WORD)v3 == 0xFFFF )
  {
    v4 = this[1];
    if ( *((unsigned __int16 *)this + 10) >= v4 )
    {
      v6 = (v4 > 0) - 1;
    }
    else
    {
      v5 = *((_WORD *)this + 10);
      if ( (unsigned __int16)(v5 + 1) >= v4 )
        v6 = -1;
      else
        v6 = v5 + 1;
    }
    v7 = v6;
    if ( v6 >= v4 )
    {
      sub_100DA5D0(this, 1);
      v8 = this[1];
      if ( *((unsigned __int16 *)this + 10) >= v8 )
      {
        v10 = (v8 > 0) - 1;
      }
      else
      {
        v9 = *((_WORD *)this + 10);
        v10 = (unsigned __int16)(v9 + 1) >= v8 ? -1 : v9 + 1;
      }
      v7 = v10;
      if ( v10 >= v8 )
        Error("CUtlLinkedList overflow!\n");
    }
    *((_WORD *)this + 10) = v7;
    result = v7;
  }
  else
  {
    result = v3;
    *((_WORD *)this + 8) = *(_WORD *)(96 * v3 + *this + 94);
  }
  v12 = *this;
  v13 = 96 * (unsigned __int16)result;
  if ( a2 )
  {
    *(_WORD *)(v13 + v12 + 94) = -1;
    *(_WORD *)(v13 + *this + 92) = -1;
  }
  else
  {
    *(_WORD *)(v13 + v12 + 94) = result;
    *(_WORD *)(v13 + *this + 92) = result;
  }
  this[6] = *this;
  return result;
}
