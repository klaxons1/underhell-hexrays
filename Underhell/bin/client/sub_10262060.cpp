char __thiscall sub_10262060(_DWORD *this, int a2, int a3, int a4)
{
  int v4; // ecx

  if ( a2 >= this[68] )
    return 0;
  v4 = *(_DWORD *)(this[54] + 72 * *(unsigned __int8 *)(this[65] + a2));
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v4 + 780))(v4, a3, a4);
  return 1;
}
