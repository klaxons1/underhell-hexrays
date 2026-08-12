int __thiscall sub_100FC700(int *this, int a2, int a3, int a4, int a5)
{
  int v6; // edi
  _DWORD *v7; // esi

  v6 = sub_100FBC20(this, this[3]);
  v7 = (_DWORD *)(*this + 56 * v6);
  v7[13] = a4;
  if ( a2 )
    v7[1] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    v7[1] = -1;
  *v7 = a5;
  v7[3] = *(unsigned __int16 *)(a3 + 16);
  v7[2] = sub_100AF260(*(_BYTE **)(a3 + 4));
  return v6;
}
