_DWORD *__thiscall sub_10275C80(int this, int a2)
{
  _DWORD *result; // eax
  int v4; // [esp+8h] [ebp-8h] BYREF
  int v5; // [esp+Ch] [ebp-4h] BYREF

  result = (_DWORD *)(*(int (__thiscall **)(int, int *, int *))(*(_DWORD *)dword_1047CA68 + 28))(
                       dword_1047CA68,
                       &v4,
                       &v5);
  if ( a2 == 107 )
  {
    result = sub_10236F60((int (__thiscall ***)(void *, int *, int *))this, &v4, &v5);
    if ( v4 > 20 )
      return (_DWORD *)sub_10275580(this, *(_BYTE *)(this + 240) == 0);
  }
  return result;
}
