int __thiscall sub_100DC290(_DWORD *this, int a2)
{
  double v3; // st7
  double v4; // st6
  int result; // eax
  int v6; // eax
  float v7; // [esp+8h] [ebp-10h]
  int v8; // [esp+8h] [ebp-10h]
  float v9; // [esp+10h] [ebp-8h]
  float v10; // [esp+14h] [ebp-4h]
  float v11; // [esp+14h] [ebp-4h]

  v10 = sub_1009E8A0(this + 3);
  v7 = sub_1009E8A0(this + 6);
  v9 = CGaussianRandomStream::RandomFloat((CGaussianRandomStream *)off_103DC7FC, v10, v7);
  v11 = sub_1009E8A0(this + 12);
  v3 = sub_1009E8A0(this + 9);
  v4 = v11;
  if ( v11 < v3 )
  {
    v4 = v3;
    v3 = v11;
  }
  if ( v9 >= v3 )
  {
    v3 = v9;
    if ( v4 < v9 )
      v3 = v4;
  }
  *(float *)&v8 = v3;
  sub_1009E9B0(this, v8);
  result = sub_101BC880();
  if ( (_BYTE)result )
  {
    v6 = (*(int (__thiscall **)(_DWORD *))(*this + 12))(this);
    return sub_101BCA60(v6);
  }
  return result;
}
