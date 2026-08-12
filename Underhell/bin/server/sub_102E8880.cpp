int __thiscall sub_102E8880(_DWORD *this)
{
  int result; // eax
  int v3; // ecx
  int v4; // eax
  int v5; // ecx
  int v6; // edi
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // edx

  result = this[6];
  if ( result == -1 )
  {
    v3 = this[7];
    if ( v3 < 0 || (v4 = this[2], v3 >= v4) )
    {
      v4 = this[2];
      v5 = (v4 > 0) - 1;
    }
    else
    {
      v5 = v3 + 1;
      if ( v5 < 0 || v5 >= v4 )
        v5 = -1;
    }
    v6 = v5;
    if ( v5 < 0 || v5 >= v4 )
    {
      sub_102E82B0(this + 1, 1);
      v7 = this[7];
      if ( v7 < 0 || (v8 = this[2], v7 >= v8) )
      {
        v8 = this[2];
        v9 = (v8 > 0) - 1;
      }
      else
      {
        v9 = v7 + 1;
        if ( v9 < 0 || v9 >= v8 )
          v9 = -1;
      }
      v6 = v9;
      if ( v9 < 0 || v9 >= v8 )
        Error("CUtlRBTree overflow!\n");
    }
    v10 = this[1];
    this[7] = v6;
    result = v6;
    this[8] = v10;
  }
  else
  {
    v11 = this[1];
    this[6] = *(_DWORD *)(v11 + 24 * result + 4);
    this[8] = v11;
  }
  return result;
}
