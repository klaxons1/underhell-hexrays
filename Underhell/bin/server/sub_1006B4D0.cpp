int __thiscall sub_1006B4D0(_DWORD *this, int a2)
{
  int v3; // ecx
  int *v4; // eax
  int v5; // edi
  int *v6; // eax
  int v7; // edx
  int v8; // ecx
  int *v9; // eax
  int *v10; // eax
  int *v11; // eax
  int v12; // eax
  int result; // eax

  v3 = dword_10692F00;
  if ( (dword_10692F00 & 1) == 0 )
  {
    v3 = dword_10692F00 | 1;
    dword_10692F00 |= 1u;
    dword_10692EF0 = -1;
    dword_10692EF4 = -1;
    dword_10692EF8 = -1;
    dword_10692EFC = 1;
  }
  if ( a2 == -1 )
    v4 = &dword_10692EF0;
  else
    v4 = (int *)(this[1] + 32 * a2);
  v5 = v4[1];
  if ( (v3 & 1) == 0 )
  {
    dword_10692F00 = v3 | 1;
    dword_10692EF0 = -1;
    dword_10692EF4 = -1;
    dword_10692EF8 = -1;
    dword_10692EFC = 1;
  }
  if ( v5 == -1 )
    v6 = &dword_10692EF0;
  else
    v6 = (int *)(this[1] + 32 * v5);
  v7 = 32 * a2;
  *(_DWORD *)(32 * a2 + this[1] + 4) = *v6;
  v8 = dword_10692F00;
  if ( (dword_10692F00 & 1) == 0 )
  {
    v8 = dword_10692F00 | 1;
    dword_10692F00 |= 1u;
    dword_10692EF0 = -1;
    dword_10692EF4 = -1;
    dword_10692EF8 = -1;
    dword_10692EFC = 1;
  }
  if ( v5 == -1 )
    v9 = &dword_10692EF0;
  else
    v9 = (int *)(this[1] + 32 * v5);
  if ( *v9 != -1 )
  {
    if ( (v8 & 1) == 0 )
    {
      dword_10692F00 = v8 | 1;
      dword_10692EF0 = -1;
      dword_10692EF4 = -1;
      dword_10692EF8 = -1;
      dword_10692EFC = 1;
    }
    if ( v5 == -1 )
      v10 = &dword_10692EF0;
    else
      v10 = (int *)(this[1] + 32 * v5);
    *(_DWORD *)(32 * *v10 + this[1] + 8) = a2;
    v8 = dword_10692F00;
  }
  if ( v5 != -1 )
  {
    if ( (v8 & 1) == 0 )
    {
      dword_10692F00 = v8 | 1;
      dword_10692EF0 = -1;
      dword_10692EF4 = -1;
      dword_10692EF8 = -1;
      dword_10692EFC = 1;
    }
    if ( a2 == -1 )
      v11 = &dword_10692EF0;
    else
      v11 = (int *)(v7 + this[1]);
    *(_DWORD *)(32 * v5 + this[1] + 8) = v11[2];
    v7 = 32 * a2;
  }
  if ( a2 == this[4] )
  {
    this[4] = v5;
  }
  else if ( sub_1006B360(this, a2) )
  {
    v12 = sub_1006B0D0(this, a2);
    v7 = 32 * a2;
    *(_DWORD *)(32 * v12 + this[1]) = v5;
  }
  else
  {
    *(_DWORD *)(32 * sub_1006B0D0(this, a2) + this[1] + 4) = v5;
    v7 = 32 * a2;
  }
  result = 32 * v5;
  *(_DWORD *)(32 * v5 + this[1]) = a2;
  if ( a2 != -1 )
  {
    result = this[1];
    *(_DWORD *)(v7 + result + 8) = v5;
  }
  return result;
}
