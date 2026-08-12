int __thiscall sub_1001AC00(_DWORD *this, int a2, int a3)
{
  int v3; // eax
  int v4; // edi
  int v5; // esi
  int v6; // edx

  v3 = this[17];
  v4 = a2;
  if ( a2 >= v3 )
    v4 = v3 - 1;
  v5 = this[18];
  v6 = a3;
  if ( a3 >= v5 )
    v6 = v5 - 1;
  return *(__int16 *)((char *)this + 2 * v4 + 2 * v6 * v3 + this[15]);
}
