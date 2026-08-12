int __thiscall sub_100DBFD0(_DWORD *this, int a2)
{
  double v3; // st7
  int result; // eax
  int v5; // eax
  int v6; // [esp+0h] [ebp-14h]
  float v7; // [esp+8h] [ebp-Ch]
  float v8; // [esp+Ch] [ebp-8h]
  float v9; // [esp+10h] [ebp-4h]

  v9 = sub_1009E8A0(this + 12);
  v8 = sub_1009E8A0(this + 6);
  v7 = sub_1009E8A0(this + 9);
  v3 = sub_1009E8A0(this + 3);
  if ( 0.0 == v3 )
    v3 = 1.0;
  *(float *)&v6 = v7 + (v8 - v7) * (sin((*((float *)off_103DC81C + 3) - v9) * 6.283185307179586 / v3) * 0.5 + 0.5);
  sub_1009E9B0(this, v6);
  result = sub_101BC880();
  if ( (_BYTE)result )
  {
    v5 = (*(int (__thiscall **)(_DWORD *))(*this + 12))(this);
    return sub_101BCA60(v5);
  }
  return result;
}
