int __thiscall sub_1007DD70(int *this, char a2)
{
  int result; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // ecx
  int v7; // edi
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // ecx

  result = this[5];
  if ( result == 0xFFFF )
  {
    v4 = this[7];
    if ( v4 < 0 || (v5 = this[1], v4 >= v5) )
    {
      v5 = this[1];
      v6 = (v5 > 0) - 1;
    }
    else
    {
      v6 = v4 + 1;
      if ( v6 < 0 || v6 >= v5 )
        v6 = -1;
    }
    v7 = v6;
    if ( v6 < 0 || v6 >= v5 )
    {
      sub_10118050(1);
      v8 = this[7];
      if ( v8 < 0 || (v9 = this[1], v8 >= v9) )
      {
        v9 = this[1];
        v10 = (v9 > 0) - 1;
      }
      else
      {
        v10 = v8 + 1;
        if ( v10 < 0 || v10 >= v9 )
          v10 = -1;
      }
      v7 = v10;
      if ( v10 < 0 || v10 >= v9 )
        Error("CUtlLinkedList overflow!\n");
    }
    this[7] = v7;
    result = v7;
  }
  else
  {
    this[5] = *(unsigned __int16 *)(*this + 8 * result + 6);
  }
  v11 = *this;
  if ( a2 )
  {
    *(_WORD *)(v11 + 8 * result + 6) = -1;
    *(_WORD *)(*this + 8 * result + 4) = -1;
  }
  else
  {
    *(_WORD *)(v11 + 8 * result + 6) = result;
    *(_WORD *)(*this + 8 * result + 4) = result;
  }
  this[8] = *this;
  return result;
}
