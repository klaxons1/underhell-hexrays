int __thiscall sub_100DD160(int this, int a2)
{
  int result; // eax
  int v4; // eax
  int v5; // [esp+0h] [ebp-8h]

  *(float *)&v5 = fabs(((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(this + 12) + 108))(*(_DWORD *)(this + 12)));
  sub_1009E9B0((_DWORD *)this, v5);
  result = sub_101BC880();
  if ( (_BYTE)result )
  {
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 12))(this);
    return sub_101BCA60(v4);
  }
  return result;
}
