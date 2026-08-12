int __thiscall sub_1018F980(int *this, int a2)
{
  int v3; // edi
  int result; // eax
  int v5; // ecx
  int v6; // edx
  int *v7; // esi

  sub_1018F880(this, a2);
  v3 = sub_1018CED0(this + 176, 0);
  sub_1018ED30(this + 176, v3);
  result = this[176];
  v5 = 12 * v3;
  *(_DWORD *)(result + v5 + 8) = -1;
  v6 = this[180];
  *(_DWORD *)(result + v5 + 4) = v6;
  this[180] = v3;
  if ( v6 == -1 )
  {
    this[179] = v3;
  }
  else
  {
    result = 3 * v6;
    *(_DWORD *)(this[176] + 12 * v6 + 8) = v3;
  }
  ++this[182];
  v7 = (int *)(v5 + this[176]);
  if ( v7 )
    *v7 = a2;
  return result;
}
