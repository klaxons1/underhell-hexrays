int __thiscall sub_1041FB00(_DWORD *this, int a2)
{
  int v3; // edi
  int *v4; // eax
  int result; // eax
  int v6; // edx

  v3 = sub_1041F6B0(this, a2);
  if ( (dword_106F1888 & 1) == 0 )
  {
    dword_106F1888 |= 1u;
    dword_106F1878 = -1;
    dword_106F187C = -1;
    dword_106F1880 = -1;
    dword_106F1884 = 1;
  }
  if ( v3 == -1 )
    v4 = &dword_106F1878;
  else
    v4 = (int *)(this[1] + 48 * v3);
  *(_DWORD *)(this[1] + 48 * a2 + 4) = *v4;
  if ( (dword_106F1888 & 1) == 0 )
  {
    dword_106F1888 |= 1u;
    dword_106F1878 = -1;
    dword_106F187C = -1;
    dword_106F1880 = -1;
    dword_106F1884 = 1;
  }
  if ( v3 == -1 )
    result = (int)&dword_106F1878;
  else
    result = this[1] + 48 * v3;
  if ( *(_DWORD *)result != -1 )
  {
    result = sub_1041F660(this, v3);
    *(_DWORD *)(48 * result + this[1] + 8) = a2;
  }
  if ( v3 != -1 )
  {
    result = sub_1041F340(this, a2);
    *(_DWORD *)(48 * v3 + this[1] + 8) = result;
  }
  if ( a2 == this[4] )
  {
    this[4] = v3;
  }
  else if ( sub_1041FA90(this, a2) )
  {
    result = 48 * sub_1041F340(this, a2);
    *(_DWORD *)(result + this[1]) = v3;
  }
  else
  {
    v6 = 3 * sub_1041F340(this, a2);
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
