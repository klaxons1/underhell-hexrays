_DWORD *__thiscall sub_10249B60(int this, int a2)
{
  _DWORD *result; // eax
  _BYTE v4[4]; // [esp+8h] [ebp-4h] BYREF

  result = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 228))(this, v4);
  if ( *result != a2 )
  {
    sub_10237590((_DWORD *)this, a2);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 216) + 20))(*(_DWORD *)(this + 216), a2);
    return (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 16))(this);
  }
  return result;
}
