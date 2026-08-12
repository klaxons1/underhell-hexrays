unsigned int __thiscall sub_1034C2F0(int this, int a2)
{
  int v2; // eax

  if ( *(_DWORD *)(a2 + 24) == 5 )
    v2 = *(_DWORD *)(a2 + 8);
  else
    v2 = 0;
  if ( *(int *)(this + 3988) < 0 )
  {
    *(_DWORD *)(this + 3952) = 0;
    *(_BYTE *)(this + 3984) = 0;
    return sub_1034B030(this, 0);
  }
  else
  {
    if ( v2 <= 6 )
    {
      *(_BYTE *)(this + 3984) = 0;
      *(_DWORD *)(this + 3952) = v2 < 0 ? 0 : v2;
    }
    else
    {
      *(_DWORD *)(this + 3952) = 6;
      *(_BYTE *)(this + 3984) = 0;
    }
    return sub_1034B030(this, 0);
  }
}
