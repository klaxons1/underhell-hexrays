int __thiscall sub_100DD670(_DWORD *this, int a2)
{
  int v3; // ecx
  int result; // eax
  int v5; // eax
  float v6; // [esp+8h] [ebp-54h]
  int v7[16]; // [esp+10h] [ebp-4Ch] BYREF
  int v8; // [esp+50h] [ebp-Ch] BYREF
  float v9; // [esp+54h] [ebp-8h]
  float v10; // [esp+58h] [ebp-4h]

  *(float *)&v8 = 0.0;
  v3 = this[6];
  v9 = 0.0;
  v10 = 1.0;
  if ( v3 )
  {
    (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)v3 + 112))(v3, &v8, 3);
    if ( off_103EDFEC() < 0.001 )
    {
      *(float *)&v8 = 0.0;
      v9 = 0.0;
      v10 = 1.0;
    }
  }
  v6 = sub_1009E8A0(this + 3);
  sub_101F2440((int)v7, (int)&v8, v6);
  (*(void (__thiscall **)(_DWORD, int *))(*(_DWORD *)this[1] + 76))(this[1], v7);
  result = sub_101BC880();
  if ( (_BYTE)result )
  {
    v5 = (*(int (__thiscall **)(_DWORD *))(*this + 12))(this);
    return sub_101BCA60(v5);
  }
  return result;
}
