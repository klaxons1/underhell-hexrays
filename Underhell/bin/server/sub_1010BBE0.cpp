int __thiscall sub_1010BBE0(_DWORD *this)
{
  int v1; // esi
  int result; // eax
  int v3; // [esp-4h] [ebp-8h]

  v1 = this[5];
  for ( this[5] = 0; v1; result = sub_1042FBE0(v3) )
  {
    v3 = v1;
    v1 = *(_DWORD *)(v1 + 24);
  }
  return result;
}
