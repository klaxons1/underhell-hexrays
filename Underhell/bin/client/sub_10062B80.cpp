int __thiscall sub_10062B80(_DWORD *this, char a2)
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
      sub_1016BF20(1);
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
    *((_WORD *)this + 8) = *(_WORD *)(*this + 12 * v3 + 10);
  }
  v12 = *this;
  v13 = 12 * (unsigned __int16)result;
  if ( a2 )
  {
    *(_WORD *)(v13 + v12 + 10) = -1;
    *(_WORD *)(v13 + *this + 8) = -1;
  }
  else
  {
    *(_WORD *)(v13 + v12 + 10) = result;
    *(_WORD *)(v13 + *this + 8) = result;
  }
  this[6] = *this;
  return result;
}
