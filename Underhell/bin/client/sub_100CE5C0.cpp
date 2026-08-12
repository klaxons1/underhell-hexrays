int __thiscall sub_100CE5C0(_DWORD *this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  int v5; // ecx
  int v6; // edi
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // ecx
  int result; // eax

  v2 = this[6];
  if ( v2 == -1 )
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
      sub_10056920(this + 1, 1);
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
    this[7] = v6;
  }
  else
  {
    v6 = this[6];
    this[6] = *(_DWORD *)(this[1] + 36 * v2 + 4);
  }
  v10 = this[1];
  if ( v10 + 36 * v6 != -16 )
    sub_1022D3E0(v10 + 36 * v6 + 20);
  result = v6;
  this[8] = this[1];
  return result;
}
