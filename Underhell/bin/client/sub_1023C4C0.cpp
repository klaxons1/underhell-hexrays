int __thiscall sub_1023C4C0(_DWORD *this, int a2)
{
  int v3; // edi
  int *v4; // eax
  int *v5; // eax
  int result; // eax

  v3 = sub_1023BEB0(this, a2);
  if ( (dword_1047CB1C & 1) == 0 )
  {
    dword_1047CB1C |= 1u;
    dword_1047CB0C = -1;
    dword_1047CB10 = -1;
    dword_1047CB14 = -1;
    dword_1047CB18 = 1;
  }
  if ( v3 == -1 )
    v4 = &dword_1047CB0C;
  else
    v4 = (int *)(this[1] + 24 * v3);
  *(_DWORD *)(this[1] + 24 * a2 + 4) = *v4;
  if ( (dword_1047CB1C & 1) == 0 )
  {
    dword_1047CB1C |= 1u;
    dword_1047CB0C = -1;
    dword_1047CB10 = -1;
    dword_1047CB14 = -1;
    dword_1047CB18 = 1;
  }
  if ( v3 == -1 )
    v5 = &dword_1047CB0C;
  else
    v5 = (int *)(this[1] + 24 * v3);
  if ( *v5 != -1 )
    *(_DWORD *)(this[1] + 24 * sub_1023BE60(this, v3) + 8) = a2;
  if ( v3 != -1 )
    *(_DWORD *)(this[1] + 24 * v3 + 8) = sub_1023AEA0(this, a2);
  if ( a2 == this[4] )
  {
    this[4] = v3;
  }
  else if ( sub_1023C450(this, a2) )
  {
    *(_DWORD *)(this[1] + 24 * sub_1023AEA0(this, a2)) = v3;
  }
  else
  {
    *(_DWORD *)(this[1] + 24 * sub_1023AEA0(this, a2) + 4) = v3;
  }
  result = 3 * v3;
  *(_DWORD *)(this[1] + 24 * v3) = a2;
  if ( a2 != -1 )
    *(_DWORD *)(this[1] + 24 * a2 + 8) = v3;
  return result;
}
