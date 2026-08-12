int __thiscall sub_1010CF20(_DWORD *this, int (__thiscall ***a2)(_DWORD))
{
  int result; // eax
  void *v4; // edi
  int v5; // eax
  int v6; // [esp+0h] [ebp-Ch]
  float v7; // [esp+14h] [ebp+8h]

  result = (int)a2;
  if ( a2 )
  {
    v4 = (void *)sub_1009EA30(a2);
    v7 = sub_1009E8A0(this + 3);
    *(float *)&v6 = sub_10034320(v4) * v7;
    sub_1009E9B0(this, v6);
    result = sub_101BC880();
    if ( (_BYTE)result )
    {
      v5 = (*(int (__thiscall **)(_DWORD *))(*this + 12))(this);
      return sub_101BCA60(v5);
    }
  }
  return result;
}
