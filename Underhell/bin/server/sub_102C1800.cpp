int __thiscall sub_102C1800(_DWORD *this, int a2)
{
  int v3; // ecx
  int *v4; // eax
  int v5; // edi
  int *v6; // eax
  int v7; // edx
  int v8; // ecx
  int *v9; // eax
  int *v10; // eax
  int v11; // eax
  int result; // eax

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
  v5 = v4[1];
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
  v7 = 48 * a2;
  *(_DWORD *)(48 * a2 + this[1] + 4) = *v6;
  v8 = dword_106DE034;
  if ( (dword_106DE034 & 1) == 0 )
  {
    v8 = dword_106DE034 | 1;
    dword_106DE034 |= 1u;
    dword_106DE024 = -1;
    dword_106DE028 = -1;
    dword_106DE02C = -1;
    dword_106DE030 = 1;
  }
  if ( v5 == -1 )
    v9 = &dword_106DE024;
  else
    v9 = (int *)(this[1] + 48 * v5);
  if ( *v9 != -1 )
  {
    if ( (v8 & 1) == 0 )
    {
      dword_106DE034 = v8 | 1;
      dword_106DE024 = -1;
      dword_106DE028 = -1;
      dword_106DE02C = -1;
      dword_106DE030 = 1;
    }
    if ( v5 == -1 )
      v10 = &dword_106DE024;
    else
      v10 = (int *)(this[1] + 48 * v5);
    *(_DWORD *)(this[1] + 48 * *v10 + 8) = a2;
  }
  if ( v5 != -1 )
  {
    *(_DWORD *)(this[1] + 48 * v5 + 8) = sub_102C0710(this, a2);
    v7 = 48 * a2;
  }
  if ( a2 == this[4] )
  {
    this[4] = v5;
  }
  else if ( sub_102C1750(this, a2) )
  {
    v11 = sub_102C0710(this, a2);
    v7 = 48 * a2;
    *(_DWORD *)(this[1] + 48 * v11) = v5;
  }
  else
  {
    *(_DWORD *)(this[1] + 48 * sub_102C0710(this, a2) + 4) = v5;
    v7 = 48 * a2;
  }
  result = this[1];
  *(_DWORD *)(result + 48 * v5) = a2;
  if ( a2 != -1 )
    *(_DWORD *)(v7 + this[1] + 8) = v5;
  return result;
}
