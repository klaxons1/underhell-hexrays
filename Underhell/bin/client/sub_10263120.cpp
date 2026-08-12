char __thiscall sub_10263120(_DWORD *this, int a2, int a3, _DWORD *a4, _DWORD *a5, int *a6, _DWORD *a7)
{
  int v9; // ebx
  int v10; // eax
  int v11; // edi
  float v13; // [esp+Ch] [ebp+4h]

  if ( a3 < 0 || a3 >= this[68] )
    return 0;
  if ( a2 < 0 || a2 >= this[84] )
    return 0;
  v9 = (*(int (__thiscall **)(_DWORD *))(*this + 1036))(this);
  if ( a2 < v9 )
    return 0;
  v13 = (float)a2;
  if ( ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*this + 1032))(this) + (double)v9 <= v13 )
    return 0;
  v10 = this[104];
  *a5 = v10;
  *a5 = v10 + this[96] * (a2 - v9);
  *a7 = this[96];
  v11 = 0;
  for ( *a4 = this[103]; v11 < a3; ++v11 )
    *a4 += sub_102374C0(*(int (__thiscall ****)(void *, int *, _BYTE *))(this[54]
                                                                       + 72 * *(unsigned __int8 *)(this[65] + v11)));
  *a6 = sub_102374C0(*(int (__thiscall ****)(void *, int *, _BYTE *))(this[54]
                                                                    + 72 * *(unsigned __int8 *)(this[65] + v11)));
  return 1;
}
