_DWORD *__thiscall sub_1014A840(int this, int a2, void (__thiscall ***a3)(_DWORD), int a4)
{
  _DWORD *v5; // eax
  _DWORD *v6; // ebx
  unsigned __int16 v7; // ax
  int v8; // edi
  int v9; // edx
  _DWORD *result; // eax

  v5 = (_DWORD *)sub_100DDA40(84);
  if ( v5 )
    v6 = sub_101433B0(v5, a2, a3, a4);
  else
    v6 = 0;
  a4 = (int)v6;
  sub_10143D90(this, (unsigned __int8 **)&a4, (unsigned __int16 *)&a2, &a3);
  v7 = sub_10143E80(this);
  v8 = v7;
  sub_10149700(this, v7, a2, (char)a3);
  v9 = *(_DWORD *)(this + 4);
  ++*(_WORD *)(this + 18);
  result = (_DWORD *)(v9 + 12 * v8 + 8);
  if ( v9 + 12 * v8 != -8 )
    *result = v6;
  return result;
}
