int __thiscall sub_1026ECE0(int this)
{
  int result; // eax
  int v3; // edi
  _DWORD *v4; // eax
  _BYTE v5[4]; // [esp+4h] [ebp-4h] BYREF

  result = sub_1025B940((_WORD *)this);
  if ( *(_DWORD *)(this + 380) )
  {
    v3 = **(_DWORD **)(this + 380);
    v4 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 1008))(this, v5);
    return (*(int (__thiscall **)(_DWORD, _DWORD))(v3 + 20))(*(_DWORD *)(this + 380), *v4);
  }
  return result;
}
