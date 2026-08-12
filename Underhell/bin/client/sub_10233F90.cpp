int __thiscall sub_10233F90(_DWORD *this, int a2, int a3, int a4, int a5, int a6)
{
  int result; // eax
  int v8; // edi
  _DWORD *v9; // esi

  this[139] = a2;
  this[135] = 0;
  this[134] = a3;
  if ( a5 )
  {
    this[1] = a5;
    result = a6;
    this[2] = a6;
  }
  else
  {
    this[1] = 0;
    this[2] = 0;
    v8 = (*(int (__thiscall **)(int, int, _DWORD, _DWORD, int))(*(_DWORD *)a2 + 224))(a2, 1, 0, 0, a4);
    v9 = this + 3;
    v9[45] = v8;
    *((_BYTE *)v9 + 188) = 1;
    v9[46] = 3;
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 40))(v8, 3);
    (*(void (__thiscall **)(_DWORD, int, int, _DWORD *))(*(_DWORD *)v9[45] + 68))(v9[45], 2 * a3, 2 * a3, v9);
    v9[52] = v8 + 4;
    v9[54] = 0;
    v9[53] = 2 * a3;
    *((_BYTE *)v9 + 240) = 0;
    v9[55] = v9[39];
    v9[48] = v9[41];
    *((_BYTE *)v9 + 204) = *((_BYTE *)v9 + 176);
    v9[56] = 0;
    sub_10016990((int)(v9 + 61), v8, 2 * a3, v9);
    v9[56] = 0;
    return sub_10016A00(v9 + 61);
  }
  return result;
}
