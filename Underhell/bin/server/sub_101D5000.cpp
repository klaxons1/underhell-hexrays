_DWORD *__thiscall sub_101D5000(void *this)
{
  int v1; // eax
  _DWORD *result; // eax
  _DWORD v3[3]; // [esp+0h] [ebp-Ch] BYREF

  if ( this )
    v1 = (int)this + 8;
  else
    v1 = 0;
  result = sub_1012D950(&dword_1069E3E0, v1);
  if ( dword_106BAFF4 )
  {
    v3[0] = 0;
    return (_DWORD *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_106BAFF4 + 208))(dword_106BAFF4, v3);
  }
  return result;
}
