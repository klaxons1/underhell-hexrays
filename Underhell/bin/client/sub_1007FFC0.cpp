_WORD *__thiscall sub_1007FFC0(int *this, int a2, char a3, char a4)
{
  int *v4; // esi
  int v5; // ebx
  int v6; // esi
  int v7; // eax
  int v8; // eax
  _WORD *result; // eax
  int v11; // [esp+10h] [ebp-4h]

  v4 = this + 8;
  v5 = sub_1007D360(this + 8, 0);
  sub_1007E2F0(v4, 0xFFFF, v5);
  v6 = *v4 + 36 * (unsigned __int16)v5;
  v11 = *(_DWORD *)dword_10413178;
  v7 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 36))(a2);
  v8 = (*(int (__thiscall **)(int, int))(v11 + 36))(dword_10413178, v7);
  if ( v8 == 1 )
  {
    a4 |= 4u;
  }
  else if ( v8 == 3 )
  {
    a4 |= 8u;
  }
  *(_DWORD *)(v6 + 4) = -1;
  *(_DWORD *)(v6 + 8) = -1;
  *(_DWORD *)(v6 + 16) = -1;
  *(_BYTE *)(v6 + 24) = a4;
  *(_BYTE *)(v6 + 25) = a3;
  *(_DWORD *)v6 = a2;
  *(_BYTE *)(v6 + 30) = -2;
  *(_WORD *)(v6 + 26) = -1;
  *(_DWORD *)(v6 + 12) = 0;
  *(_DWORD *)(v6 + 20) = -1;
  if ( a3 == 11 || a3 == 10 )
    sub_1007E840(this, v5);
  result = (_WORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 32))(a2);
  *result = v5;
  return result;
}
