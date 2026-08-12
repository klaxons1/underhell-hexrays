int __thiscall sub_101EB550(_DWORD *this, int a2)
{
  int v3; // edi
  int *v4; // eax
  int result; // eax
  int v6; // edx

  v3 = sub_101EB100(this, a2);
  if ( (dword_10458E20 & 1) == 0 )
  {
    dword_10458E20 |= 1u;
    dword_10458E10 = -1;
    dword_10458E14 = -1;
    dword_10458E18 = -1;
    dword_10458E1C = 1;
  }
  if ( v3 == -1 )
    v4 = &dword_10458E10;
  else
    v4 = (int *)(this[1] + 48 * v3);
  *(_DWORD *)(this[1] + 48 * a2 + 4) = *v4;
  if ( (dword_10458E20 & 1) == 0 )
  {
    dword_10458E20 |= 1u;
    dword_10458E10 = -1;
    dword_10458E14 = -1;
    dword_10458E18 = -1;
    dword_10458E1C = 1;
  }
  if ( v3 == -1 )
    result = (int)&dword_10458E10;
  else
    result = this[1] + 48 * v3;
  if ( *(_DWORD *)result != -1 )
  {
    result = sub_101EB0B0(this, v3);
    *(_DWORD *)(48 * result + this[1] + 8) = a2;
  }
  if ( v3 != -1 )
  {
    result = sub_101EAD90(this, a2);
    *(_DWORD *)(48 * v3 + this[1] + 8) = result;
  }
  if ( a2 == this[4] )
  {
    this[4] = v3;
  }
  else if ( sub_101EB4E0(this, a2) )
  {
    result = 48 * sub_101EAD90(this, a2);
    *(_DWORD *)(result + this[1]) = v3;
  }
  else
  {
    v6 = 3 * sub_101EAD90(this, a2);
    result = this[1];
    *(_DWORD *)(16 * v6 + result + 4) = v3;
  }
  *(_DWORD *)(48 * v3 + this[1]) = a2;
  if ( a2 != -1 )
  {
    result = this[1];
    *(_DWORD *)(result + 48 * a2 + 8) = v3;
  }
  return result;
}
