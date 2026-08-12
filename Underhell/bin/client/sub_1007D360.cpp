int __thiscall sub_1007D360(int *this, char a2)
{
  int result; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // ecx
  int v7; // edi
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // ecx

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
      sub_10056920(this, 1);
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
    this[5] = *(unsigned __int16 *)(*this + 36 * result + 34);
  }
  v11 = *this;
  v12 = 36 * result;
  if ( a2 )
  {
    *(_WORD *)(v12 + v11 + 34) = -1;
    *(_WORD *)(v12 + *this + 32) = -1;
  }
  else
  {
    *(_WORD *)(v12 + v11 + 34) = result;
    *(_WORD *)(v12 + *this + 32) = result;
  }
  this[8] = *this;
  return result;
}
