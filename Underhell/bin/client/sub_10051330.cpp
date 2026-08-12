_BYTE *__thiscall sub_10051330(_BYTE *this, int a2, int a3, int a4, int a5, int a6)
{
  unsigned __int16 v7; // ax
  __int16 v8; // di
  char *v9; // esi
  int v10; // ecx
  int v11; // eax
  int v12; // ebx
  _BYTE *result; // eax
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // di
  bool v16; // zf
  int v17; // eax
  unsigned __int16 v18; // ax
  int v19; // edi
  int v20; // eax
  int v21; // [esp+Ch] [ebp-8h]
  unsigned __int16 v23; // [esp+2Ch] [ebp+18h]

  v7 = sub_10050AF0((int)this, a2, a3, a4);
  v8 = v7;
  v9 = this + 1248;
  if ( v7 >= *((int *)v9 + 1)
    || v7 > *((_WORD *)v9 + 10)
    || (v10 = *(_DWORD *)v9, v11 = 10 * v7, v21 = v11, *(_WORD *)(v11 + *(_DWORD *)v9 + 6) == v8)
    && *(_WORD *)(v11 + v10 + 8) != v8 )
  {
    v12 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 2);
  }
  else
  {
    v12 = *(char *)(v11 + v10 + 4);
    sub_1005A8B0(v8);
    *(_WORD *)(v21 + *(_DWORD *)v9 + 8) = *((_WORD *)v9 + 8);
    *((_WORD *)v9 + 8) = v8;
  }
  if ( a6 != -1 )
    v12 = a6;
  result = (_BYTE *)a5;
  if ( a5 != -1 )
  {
    v14 = sub_10050B60((int)this, a5, v12);
    v15 = v14;
    if ( v14 >= *((int *)v9 + 1)
      || v14 > *((_WORD *)v9 + 10)
      || (v16 = *(_WORD *)(*(_DWORD *)v9 + 10 * v14 + 6) == v14, v17 = *(_DWORD *)v9 + 10 * v14, v16)
      && *(_WORD *)(v17 + 8) != v15 )
    {
      v19 = (unsigned __int16)sub_100849E0(0);
      sub_1022D780(0xFFFF, v19);
      v18 = v19;
    }
    else
    {
      v23 = sub_100849E0(0);
      sub_10051190((int *)v9, v15, v23);
      v18 = v23;
    }
    v20 = 10 * v18;
    *(_BYTE *)(v20 + *(_DWORD *)v9 + 1) = a3;
    *(_BYTE *)(v20 + *(_DWORD *)v9) = a2;
    *(_BYTE *)(v20 + *(_DWORD *)v9 + 3) = a5;
    *(_BYTE *)(v20 + *(_DWORD *)v9 + 2) = a4;
    *(_BYTE *)(v20 + *(_DWORD *)v9 + 4) = v12;
    result = this;
    this[16 * a2 + 1788 + a3] = this[16 * a2 + 1788 + a3] & 0xF0 | (4 * v12);
  }
  return result;
}
