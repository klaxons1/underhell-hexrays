int *__thiscall sub_10244D70(int *this)
{
  int v2; // eax

  v2 = sub_10184390(28);
  if ( v2 )
  {
    *(_DWORD *)v2 = 0;
    *(_DWORD *)(v2 + 4) = 0;
    *(_DWORD *)(v2 + 8) = 0;
    *(_DWORD *)(v2 + 12) = 0;
    *(_WORD *)(v2 + 16) = -1;
    *(_WORD *)(v2 + 18) = 0;
    *(_WORD *)(v2 + 20) = -1;
    *(_WORD *)(v2 + 22) = -1;
    *(_DWORD *)(v2 + 24) = *(_DWORD *)(v2 + 4);
    if ( !*(_DWORD *)v2 )
    {
      *(_DWORD *)v2 = sub_10002010;
      *this = v2;
      return this;
    }
  }
  else
  {
    v2 = 0;
  }
  *this = v2;
  return this;
}
