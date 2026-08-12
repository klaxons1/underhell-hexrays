int __thiscall sub_100DD070(int this, int a2)
{
  double v3; // st7
  double v6; // st7
  double v7; // st6
  int result; // eax
  int v9; // eax
  int v10; // [esp+0h] [ebp-10h]
  float v11; // [esp+8h] [ebp-8h]
  float v12; // [esp+Ch] [ebp-4h]
  float v13; // [esp+Ch] [ebp-4h]
  float v14; // [esp+Ch] [ebp-4h]

  v12 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(this + 12) + 108))(*(_DWORD *)(this + 12));
  v3 = (sub_1009E8A0((_DWORD *)(this + 32)) + v12) * 1.442695040888963407;
  _ST6 = v3;
  __asm { frndint }
  v13 = __FSCALE__(__F2XM1__(v3 - _ST6) + 1.0, _ST6);
  v11 = sub_1009E8A0((_DWORD *)(this + 20)) * v13;
  v14 = sub_1009E8A0((_DWORD *)(this + 56));
  v6 = sub_1009E8A0((_DWORD *)(this + 44));
  v7 = v14;
  if ( v14 < v6 )
  {
    v7 = v6;
    v6 = v14;
  }
  if ( v11 >= v6 )
  {
    v6 = v11;
    if ( v7 < v11 )
      v6 = v7;
  }
  *(float *)&v10 = v6;
  sub_1009E9B0((_DWORD *)this, v10);
  result = sub_101BC880();
  if ( (_BYTE)result )
  {
    v9 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 12))(this);
    return sub_101BCA60(v9);
  }
  return result;
}
