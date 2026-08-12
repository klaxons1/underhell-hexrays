int __thiscall sub_1041FC40(_DWORD *this, int a2)
{
  int *v3; // eax
  int v4; // edi
  int result; // eax
  int v6; // edx
  int v7; // eax
  int v8; // edx

  if ( (dword_106F1888 & 1) == 0 )
  {
    dword_106F1888 |= 1u;
    dword_106F1878 = -1;
    dword_106F187C = -1;
    dword_106F1880 = -1;
    dword_106F1884 = 1;
  }
  if ( a2 == -1 )
    v3 = &dword_106F1878;
  else
    v3 = (int *)(this[1] + 48 * a2);
  v4 = *v3;
  *(_DWORD *)(this[1] + 48 * a2) = sub_1041F6B0(this, *v3);
  result = sub_1041F6B0(this, v4);
  if ( result != -1 )
  {
    v6 = 3 * sub_1041F6B0(this, v4);
    result = this[1];
    *(_DWORD *)(16 * v6 + result + 8) = a2;
  }
  if ( v4 != -1 )
  {
    result = sub_1041F340(this, a2);
    *(_DWORD *)(48 * v4 + this[1] + 8) = result;
  }
  if ( a2 == this[4] )
  {
    this[4] = v4;
  }
  else
  {
    v7 = sub_1041F340(this, a2);
    if ( sub_1041F6B0(this, v7) == a2 )
    {
      result = 48 * sub_1041F340(this, a2);
      *(_DWORD *)(result + this[1] + 4) = v4;
    }
    else
    {
      v8 = 3 * sub_1041F340(this, a2);
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
