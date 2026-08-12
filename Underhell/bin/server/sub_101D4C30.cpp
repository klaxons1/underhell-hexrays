_DWORD *__thiscall sub_101D4C30(int this, _DWORD *a2, int a3)
{
  unsigned __int16 v4; // ax
  _DWORD *result; // eax
  int v6; // edx
  int v7; // eax
  int v8; // esi
  int v9; // eax
  _BYTE *v10; // eax
  int v11; // [esp+4h] [ebp-8h] BYREF

  v11 = a3;
  v4 = sub_101D4210((_WORD *)(this + 68), (int)&v11);
  if ( v4 == 0xFFFF )
  {
    result = a2;
    *a2 = 0;
  }
  else
  {
    v6 = v4;
    v7 = *(_DWORD *)(this + 72);
    v8 = *(_DWORD *)dword_106B31F0;
    v9 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31F0 + 4))(
           dword_106B31F0,
           *(_DWORD *)(v7 + 16 * v6 + 12));
    v10 = (_BYTE *)(*(int (__thiscall **)(int, int))(v8 + 12))(dword_106B31F0, v9);
    sub_10162BE0(a2, v10);
    return a2;
  }
  return result;
}
