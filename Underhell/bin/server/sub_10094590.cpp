char __thiscall sub_10094590(int this)
{
  char v2; // al
  char v3; // al
  int v4; // ecx
  char v5; // al
  char v6; // al
  char v7; // bl
  char v8; // al
  int v9; // ecx
  char v10; // al
  char v11; // al
  int v12; // ecx

  v2 = *(_BYTE *)(this + 18);
  if ( v2 == -1 )
  {
    v3 = *(_BYTE *)(this + 19);
    if ( v3 < 0 || (v4 = *(_DWORD *)(this + 8), v3 >= v4) )
    {
      v4 = *(_DWORD *)(this + 8);
      v6 = (v4 > 0) - 1;
    }
    else
    {
      v5 = *(_BYTE *)(this + 19) + 1;
      if ( v5 < 0 || v5 >= v4 )
        v6 = -1;
      else
        v6 = *(_BYTE *)(this + 19) + 1;
    }
    v7 = v6;
    if ( v6 < 0 || v6 >= v4 )
    {
      sub_100937D0((_DWORD *)(this + 4), 1);
      v8 = *(_BYTE *)(this + 19);
      if ( v8 < 0 || (v9 = *(_DWORD *)(this + 8), v8 >= v9) )
      {
        v9 = *(_DWORD *)(this + 8);
        v11 = (v9 > 0) - 1;
      }
      else
      {
        v10 = *(_BYTE *)(this + 19) + 1;
        if ( v10 < 0 || v10 >= v9 )
          v11 = -1;
        else
          v11 = *(_BYTE *)(this + 19) + 1;
      }
      v7 = v11;
      if ( v11 < 0 || v11 >= v9 )
        Error("CUtlRBTree overflow!\n");
    }
    *(_BYTE *)(this + 19) = v7;
  }
  else
  {
    v7 = *(_BYTE *)(this + 18);
    *(_BYTE *)(this + 18) = *(_BYTE *)(*(_DWORD *)(this + 4) + 12 * v2 + 1);
  }
  v12 = *(_DWORD *)(this + 4);
  if ( v12 + 12 * v7 != -4 )
    *(float *)(v12 + 12 * v7 + 8) = -1.0;
  *(_DWORD *)(this + 20) = *(_DWORD *)(this + 4);
  return v7;
}
