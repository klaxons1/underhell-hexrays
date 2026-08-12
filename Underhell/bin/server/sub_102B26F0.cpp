char __thiscall sub_102B26F0(int this)
{
  _DWORD *v2; // edi
  double v3; // st7
  char result; // al

  v2 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 1480))(this);
  if ( v2 == (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) )
  {
    sub_10023E00((char *)this, 26);
    return 0;
  }
  else if ( v2 )
  {
    sub_100285C0((_DWORD *)this, v2, 1);
    v3 = *(float *)(dword_106B31C8 + 12);
    *(float *)(this + 3812) = *(float *)(dword_106B31C8 + 12);
    result = 1;
    *(float *)(this + 3808) = v3;
  }
  else
  {
    sub_100285C0((_DWORD *)this, 0, 1);
    sub_1002B660(this, 2);
    return 1;
  }
  return result;
}
