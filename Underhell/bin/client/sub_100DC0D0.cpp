int __thiscall sub_100DC0D0(_DWORD *this, int a2)
{
  int result; // eax
  int v4; // eax
  int v5; // [esp+0h] [ebp-Ch]
  float v6; // [esp+8h] [ebp-4h]

  v6 = sub_1009E8A0(this + 3) * *((float *)off_103DC81C + 3);
  *(float *)&v5 = sub_1009E8A0(this + 6) + v6;
  sub_1009E9B0(this, v5);
  result = sub_101BC880();
  if ( (_BYTE)result )
  {
    v4 = (*(int (__thiscall **)(_DWORD *))(*this + 12))(this);
    return sub_101BCA60(v4);
  }
  return result;
}
