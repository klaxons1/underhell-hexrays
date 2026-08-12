int __thiscall sub_10268940(_DWORD *this, int a2)
{
  int result; // eax
  int v4; // eax
  int v5; // esi
  int v6; // esi
  int v7; // eax

  result = a2;
  if ( a2 )
  {
    this[69] = a2;
    v4 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 268))(dword_1047CA6C, a2);
    v5 = this[56];
    result = v4 + 1;
    this[68] = result;
    if ( v5 != -1 )
    {
      result = this[53];
      do
      {
        v6 = 12 * v5;
        (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(result + v6) + 816))(*(_DWORD *)(result + v6), this[69]);
        v7 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v6 + this[53]) + 864))(*(_DWORD *)(v6 + this[53]));
        sub_1027CE60(v7);
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(v6 + this[53]) + 872))(*(_DWORD *)(v6 + this[53]));
        result = this[53];
        v5 = *(_DWORD *)(result + v6 + 8);
      }
      while ( v5 != -1 );
    }
  }
  return result;
}
