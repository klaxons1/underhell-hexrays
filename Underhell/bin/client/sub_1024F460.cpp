int __thiscall sub_1024F460(_DWORD **this, int a2)
{
  int result; // eax
  _BYTE v4[2048]; // [esp+10h] [ebp-800h] BYREF

  result = (*(int (__thiscall **)(_DWORD *))(*this[72] + 124))(this[72]);
  if ( result != -1 )
  {
    (*(void (__thiscall **)(int, _BYTE *, int, int, int))(*(_DWORD *)dword_1047CA78 + 24))(
      dword_1047CA78,
      v4,
      2048,
      result,
      a2);
    return ((int (__thiscall *)(_DWORD **, _BYTE *, int))(*this)[216])(this, v4, 1);
  }
  return result;
}
