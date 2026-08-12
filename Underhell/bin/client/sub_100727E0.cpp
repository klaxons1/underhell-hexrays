int __thiscall sub_100727E0(_DWORD *this, int a2, int a3, char a4)
{
  _DWORD *v4; // eax
  int v5; // edx

  v4 = (_DWORD *)(this[1] + 24 * a2);
  v4[2] = a3;
  v4[1] = -1;
  *v4 = -1;
  v4[3] = 0;
  if ( a3 == -1 )
  {
    this[4] = a2;
    return sub_10072320(this, a2);
  }
  else
  {
    v5 = this[1];
    if ( a4 )
      *(_DWORD *)(v5 + 24 * a3) = a2;
    else
      *(_DWORD *)(v5 + 24 * a3 + 4) = a2;
    return sub_10072320(this, a2);
  }
}
