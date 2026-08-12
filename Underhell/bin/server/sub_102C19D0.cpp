int __thiscall sub_102C19D0(_DWORD *this, int a2)
{
  int v3; // ecx
  int *v4; // eax
  int v5; // edi
  int *v6; // eax
  int result; // eax
  int v8; // edx

  v3 = dword_106DE034;
  if ( (dword_106DE034 & 1) == 0 )
  {
    v3 = dword_106DE034 | 1;
    dword_106DE034 |= 1u;
    dword_106DE024 = -1;
    dword_106DE028 = -1;
    dword_106DE02C = -1;
    dword_106DE030 = 1;
  }
  if ( a2 == -1 )
    v4 = &dword_106DE024;
  else
    v4 = (int *)(this[1] + 48 * a2);
  v5 = *v4;
  if ( (v3 & 1) == 0 )
  {
    dword_106DE034 = v3 | 1;
    dword_106DE024 = -1;
    dword_106DE028 = -1;
    dword_106DE02C = -1;
    dword_106DE030 = 1;
  }
  if ( v5 == -1 )
    v6 = &dword_106DE024;
  else
    v6 = (int *)(this[1] + 48 * v5);
  *(_DWORD *)(48 * a2 + this[1]) = v6[1];
  if ( (dword_106DE034 & 1) == 0 )
  {
    dword_106DE034 |= 1u;
    dword_106DE024 = -1;
    dword_106DE028 = -1;
    dword_106DE02C = -1;
    dword_106DE030 = 1;
  }
  if ( v5 == -1 )
    result = (int)&dword_106DE024;
  else
    result = this[1] + 48 * v5;
  if ( *(_DWORD *)(result + 4) != -1 )
  {
    result = sub_102C0770(this, v5);
    *(_DWORD *)(this[1] + 48 * result + 8) = a2;
  }
  if ( v5 != -1 )
  {
    result = sub_102C0710(this, a2);
    *(_DWORD *)(this[1] + 48 * v5 + 8) = result;
  }
  if ( a2 == this[4] )
  {
    this[4] = v5;
  }
  else if ( sub_102C07D0(this, a2) )
  {
    result = 6 * sub_102C0710(this, a2);
    *(_DWORD *)(this[1] + 8 * result + 4) = v5;
  }
  else
  {
    v8 = 3 * sub_102C0710(this, a2);
    result = this[1];
    *(_DWORD *)(result + 16 * v8) = v5;
  }
  *(_DWORD *)(this[1] + 48 * v5 + 4) = a2;
  if ( a2 != -1 )
  {
    result = this[1];
    *(_DWORD *)(48 * a2 + result + 8) = v5;
  }
  return result;
}
