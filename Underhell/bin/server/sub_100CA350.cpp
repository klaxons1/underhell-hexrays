int __thiscall sub_100CA350(int this)
{
  int v2; // ecx
  int v3; // eax
  __int16 v4; // cx
  unsigned __int16 v5; // cx
  unsigned __int16 v6; // di
  int v7; // eax
  __int16 v8; // cx
  unsigned __int16 v9; // cx
  int result; // eax
  int v11; // edx

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
      sub_100C8630((_DWORD *)(this + 4), 1);
      v7 = *(_DWORD *)(this + 8);
      if ( *(unsigned __int16 *)(this + 22) >= v7 )
      {
        v9 = (v7 > 0) - 1;
      }
      else
      {
        v8 = *(_WORD *)(this + 22);
        v9 = (unsigned __int16)(v8 + 1) >= v7 ? -1 : v8 + 1;
      }
      v6 = v9;
      if ( v9 >= v7 )
        Error("CUtlRBTree overflow!\n");
    }
    *(_WORD *)(this + 22) = v6;
    result = v6;
  }
  else
  {
    result = v2;
    *(_WORD *)(this + 20) = *(_WORD *)(*(_DWORD *)(this + 4) + 24 * v2 + 2);
  }
  v11 = *(_DWORD *)(this + 4);
  if ( v11 + 24 * (unsigned __int16)result != -8 )
    *(_DWORD *)(v11 + 24 * (unsigned __int16)result + 16) = -1;
  *(_DWORD *)(this + 24) = *(_DWORD *)(this + 4);
  return result;
}
