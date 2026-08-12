int __thiscall sub_100804D0(_DWORD *this, int a2, int a3, int a4)
{
  int i; // esi
  int v6; // eax
  __int16 v7; // cx
  int result; // eax
  _BYTE v9[512]; // [esp+Ch] [ebp-200h] BYREF

  for ( i = 0; i < a3; ++i )
    sub_10080420((int)this, *(unsigned __int16 *)(a4 + 2 * i), a2);
  v6 = (*(int (__thiscall **)(_DWORD *, int, _BYTE *))(*this + 96))(this, a2, v9);
  if ( v6 == -1 )
    v7 = 0;
  else
    v7 = (*(int (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)dword_1041315C + 224))(dword_1041315C, v9, v6);
  result = 9 * (unsigned __int16)a2;
  *(_WORD *)(this[8] + 36 * (unsigned __int16)a2 + 28) = v7;
  return result;
}
