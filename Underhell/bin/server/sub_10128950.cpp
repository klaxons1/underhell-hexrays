int __thiscall sub_10128950(int this, char a2, char a3, char a4, char a5, int a6, char a7)
{
  int *v8; // ecx
  int result; // eax
  int *v10; // ecx

  if ( a2 != *(_BYTE *)(this + 113) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v8 = *(int **)(this + 24);
      if ( v8 )
        sub_100194B0(v8, 113);
    }
    *(_BYTE *)(this + 113) = a2;
  }
  sub_1005C620((_BYTE *)(this + 116), a3, a4, a5, HIBYTE(*(_DWORD *)(this + 116)));
  result = sub_10242820(a6, 0.0);
  if ( a7 != *(_BYTE *)(this + 112) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_BYTE *)(this + 112) = a7;
    }
    else
    {
      v10 = *(int **)(this + 24);
      if ( v10 )
        result = sub_100194B0(v10, 112);
      *(_BYTE *)(this + 112) = a7;
    }
  }
  return result;
}
