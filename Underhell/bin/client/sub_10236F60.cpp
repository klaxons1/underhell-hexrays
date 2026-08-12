_DWORD *__thiscall sub_10236F60(int (__thiscall ***this)(void *, int *, int *), _DWORD *a2, _DWORD *a3)
{
  int v3; // esi
  int v4; // edi
  int v5; // eax
  _DWORD *result; // eax
  int v7; // [esp+Ch] [ebp-8h] BYREF
  int v8; // [esp+10h] [ebp-4h] BYREF

  v3 = dword_1047CA70;
  v4 = *(_DWORD *)dword_1047CA70;
  v5 = (**this)(this, &v7, &v8);
  (*(void (__thiscall **)(int, int))(v4 + 40))(v3, v5);
  *a2 -= v7;
  result = a3;
  *a3 -= v8;
  return result;
}
