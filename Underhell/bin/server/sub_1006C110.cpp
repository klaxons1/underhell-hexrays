int *__thiscall sub_1006C110(_DWORD *this, int a2, int a3, char a4)
{
  int *v4; // eax
  int *v5; // eax
  int v6; // edx

  v4 = (int *)(this[1] + 32 * a2);
  v4[2] = a3;
  v4[1] = -1;
  *v4 = -1;
  v4[3] = 0;
  if ( a3 == -1 )
  {
    this[4] = a2;
    return sub_1006B8D0(v4, this, a2);
  }
  else
  {
    v5 = (int *)this[1];
    v6 = 8 * a3;
    if ( a4 )
      v5[v6] = a2;
    else
      v5[v6 + 1] = a2;
    return sub_1006B8D0(v5, this, a2);
  }
}
