int __thiscall sub_101EB690(_DWORD *this, int a2)
{
  int *v3; // eax
  int v4; // edi
  int result; // eax
  int v6; // edx
  int v7; // eax
  int v8; // edx

  if ( (dword_10458E20 & 1) == 0 )
  {
    dword_10458E20 |= 1u;
    dword_10458E10 = -1;
    dword_10458E14 = -1;
    dword_10458E18 = -1;
    dword_10458E1C = 1;
  }
  if ( a2 == -1 )
    v3 = &dword_10458E10;
  else
    v3 = (int *)(this[1] + 48 * a2);
  v4 = *v3;
  *(_DWORD *)(this[1] + 48 * a2) = sub_101EB100(this, *v3);
  result = sub_101EB100(this, v4);
  if ( result != -1 )
  {
    v6 = 3 * sub_101EB100(this, v4);
    result = this[1];
    *(_DWORD *)(16 * v6 + result + 8) = a2;
  }
  if ( v4 != -1 )
  {
    result = sub_101EAD90(this, a2);
    *(_DWORD *)(48 * v4 + this[1] + 8) = result;
  }
  if ( a2 == this[4] )
  {
    this[4] = v4;
  }
  else
  {
    v7 = sub_101EAD90(this, a2);
    if ( sub_101EB100(this, v7) == a2 )
    {
      result = 48 * sub_101EAD90(this, a2);
      *(_DWORD *)(result + this[1] + 4) = v4;
    }
    else
    {
      v8 = 3 * sub_101EAD90(this, a2);
      result = this[1];
      *(_DWORD *)(16 * v8 + result) = v4;
    }
  }
  *(_DWORD *)(48 * v4 + this[1] + 4) = a2;
  if ( a2 != -1 )
  {
    result = this[1];
    *(_DWORD *)(result + 48 * a2 + 8) = v4;
  }
  return result;
}
