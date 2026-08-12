unsigned __int8 __thiscall sub_10075BE0(int this)
{
  unsigned __int8 result; // al
  int v3; // eax
  int v4; // ecx
  char v5; // dl
  unsigned __int8 v6; // al
  unsigned __int8 v7; // bl
  int v8; // ecx
  char v9; // dl
  unsigned __int8 v10; // al
  int v11; // edx
  int v12; // edx

  result = *(_BYTE *)(this + 18);
  if ( result == 0xFF )
  {
    v3 = *(unsigned __int8 *)(this + 19);
    v4 = *(_DWORD *)(this + 8);
    if ( v3 >= v4 )
    {
      v6 = (v4 > 0) - 1;
    }
    else
    {
      v5 = *(_BYTE *)(this + 19);
      if ( (unsigned __int8)(v5 + 1) >= v4 )
        v6 = -1;
      else
        v6 = v5 + 1;
    }
    v7 = v6;
    if ( v6 >= v4 )
    {
      sub_100757E0((_DWORD *)(this + 4), 1);
      v8 = *(_DWORD *)(this + 8);
      if ( *(unsigned __int8 *)(this + 19) >= v8 )
      {
        v10 = (v8 > 0) - 1;
      }
      else
      {
        v9 = *(_BYTE *)(this + 19);
        if ( (unsigned __int8)(v9 + 1) >= v8 )
          v10 = -1;
        else
          v10 = v9 + 1;
      }
      v7 = v10;
      if ( v10 >= v8 )
        Error("CUtlRBTree overflow!\n");
    }
    v11 = *(_DWORD *)(this + 4);
    *(_BYTE *)(this + 19) = v7;
    result = v7;
    *(_DWORD *)(this + 20) = v11;
  }
  else
  {
    v12 = *(_DWORD *)(this + 4);
    *(_BYTE *)(this + 18) = *(_BYTE *)(v12 + 12 * result + 1);
    *(_DWORD *)(this + 20) = v12;
  }
  return result;
}
