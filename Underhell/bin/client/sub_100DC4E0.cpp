int __thiscall sub_100DC4E0(int this, int a2)
{
  double v3; // st7
  double v4; // st7
  double v5; // st7
  int result; // eax
  int v7; // eax
  int v8; // [esp+0h] [ebp-18h]
  float v9; // [esp+10h] [ebp-8h]
  float v10; // [esp+10h] [ebp-8h]
  float v11; // [esp+14h] [ebp-4h]
  float v12; // [esp+14h] [ebp-4h]
  float v13; // [esp+14h] [ebp-4h]
  float v14; // [esp+14h] [ebp-4h]
  float v15; // [esp+14h] [ebp-4h]

  v11 = sub_1009E8A0((_DWORD *)(this + 32));
  if ( sub_1009E8A0((_DWORD *)(this + 20)) < v11 )
  {
    v12 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(this + 12) + 108))(*(_DWORD *)(this + 12));
    v9 = v12 - sub_1009E8A0((_DWORD *)(this + 20));
    v13 = sub_1009E8A0((_DWORD *)(this + 32));
    v4 = v9 / (v13 - sub_1009E8A0((_DWORD *)(this + 20)));
    if ( v4 < 0.0 )
      v5 = v4 - (double)((int)v4 - 1);
    else
      v5 = v4 - (double)(int)v4;
    v14 = v5;
    v10 = sub_1009E8A0((_DWORD *)(this + 32));
    v15 = (v10 - sub_1009E8A0((_DWORD *)(this + 20))) * v14;
    v3 = sub_1009E8A0((_DWORD *)(this + 20)) + v15;
  }
  else
  {
    v3 = sub_1009E8A0((_DWORD *)(this + 20));
  }
  *(float *)&v8 = v3;
  sub_1009E9B0((_DWORD *)this, v8);
  result = sub_101BC880();
  if ( (_BYTE)result )
  {
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 12))(this);
    return sub_101BCA60(v7);
  }
  return result;
}
