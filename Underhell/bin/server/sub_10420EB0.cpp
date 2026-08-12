int __thiscall sub_10420EB0(_DWORD *this, int a2, int a3, char a4)
{
  _DWORD *v4; // eax
  int v5; // edx
  int v6; // eax

  v4 = (_DWORD *)(this[1] + 48 * a2);
  v4[2] = a3;
  v4[1] = -1;
  *v4 = -1;
  v4[3] = 0;
  if ( a3 == -1 )
  {
    this[4] = a2;
    return sub_10420870(this, a2);
  }
  else
  {
    v5 = this[1];
    v6 = 48 * a3;
    if ( a4 )
      *(_DWORD *)(v6 + v5) = a2;
    else
      *(_DWORD *)(v6 + v5 + 4) = a2;
    return sub_10420870(this, a2);
  }
}
