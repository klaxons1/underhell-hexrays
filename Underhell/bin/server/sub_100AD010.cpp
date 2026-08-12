int __thiscall sub_100AD010(_DWORD *this, int a2)
{
  int v2; // eax
  int *v4; // ecx
  int v5; // edi
  int *v6; // ecx
  int result; // eax
  int *v8; // ecx
  int v9; // ecx
  int v10; // ecx

  v2 = dword_10695154;
  if ( (dword_10695154 & 1) == 0 )
  {
    v2 = dword_10695154 | 1;
    dword_10695154 |= 1u;
    dword_10695144 = -1;
    dword_10695148 = -1;
    dword_1069514C = -1;
    dword_10695150 = 1;
  }
  if ( a2 == -1 )
    v4 = &dword_10695144;
  else
    v4 = (int *)(this[1] + 28 * a2);
  v5 = v4[1];
  if ( (v2 & 1) == 0 )
  {
    dword_10695154 = v2 | 1;
    dword_10695144 = -1;
    dword_10695148 = -1;
    dword_1069514C = -1;
    dword_10695150 = 1;
  }
  if ( v5 == -1 )
    v6 = &dword_10695144;
  else
    v6 = (int *)(this[1] + 28 * v5);
  result = 28 * a2;
  *(_DWORD *)(28 * a2 + this[1] + 4) = *v6;
  if ( (dword_10695154 & 1) == 0 )
  {
    dword_10695154 |= 1u;
    dword_10695144 = -1;
    dword_10695148 = -1;
    dword_1069514C = -1;
    dword_10695150 = 1;
  }
  if ( v5 == -1 )
    v8 = &dword_10695144;
  else
    v8 = (int *)(this[1] + 28 * v5);
  if ( *v8 != -1 )
  {
    *(_DWORD *)(this[1] + 28 * sub_100ACBF0(this, v5) + 8) = a2;
    result = 28 * a2;
  }
  if ( v5 != -1 )
  {
    *(_DWORD *)(this[1] + 28 * v5 + 8) = sub_100ACB90(this, a2);
    result = 28 * a2;
  }
  if ( a2 == this[4] )
  {
    this[4] = v5;
  }
  else if ( sub_100ACF50(this, a2) )
  {
    v9 = 7 * sub_100ACB90(this, a2);
    result = 28 * a2;
    *(_DWORD *)(this[1] + 4 * v9) = v5;
  }
  else
  {
    v10 = 7 * sub_100ACB90(this, a2);
    result = 28 * a2;
    *(_DWORD *)(this[1] + 4 * v10 + 4) = v5;
  }
  *(_DWORD *)(this[1] + 28 * v5) = a2;
  if ( a2 != -1 )
    *(_DWORD *)(result + this[1] + 8) = v5;
  return result;
}
