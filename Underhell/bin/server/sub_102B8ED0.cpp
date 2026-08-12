int __thiscall sub_102B8ED0(int this, int a2, int a3)
{
  bool v4; // zf
  double v5; // st7
  int result; // eax
  int v7; // esi
  int v8; // esi
  int v9; // ecx
  unsigned __int16 v10; // ax
  float v11; // [esp+0h] [ebp-Ch]
  float v12; // [esp+0h] [ebp-Ch]

  if ( a2 )
    *(_DWORD *)(this + 68) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    *(_DWORD *)(this + 68) = -1;
  v4 = *(_DWORD *)(this + 84) == 3;
  v5 = *(float *)(dword_106B31C8 + 12);
  *(_BYTE *)(this + 58) = 0;
  *(float *)(this + 72) = v5;
  *(float *)(this + 76) = 3.4028235e38;
  if ( v4 )
    return sub_102B7DB0(this - 1120, 0);
  result = a3;
  if ( a3 == 2 )
  {
    *(_BYTE *)(this + 57) = 1;
    v7 = this - 1120;
    sub_102B7300((volatile signed __int32 *)v7, 1);
    *(_DWORD *)(v7 + 1204) = 1;
    sub_102B7300((volatile signed __int32 *)v7, 1);
    sub_102B7B10((float *)v7, 1, 0, 0, 255, 190);
    sub_100EC3F0((_DWORD *)v7, (int)sub_102B7820, 0.0, 0);
    *(_DWORD *)(v7 + 196) = 0;
    v11 = *(float *)(dword_106B31C8 + 12) + 0.1;
    return sub_100EC4A0((int *)v7, v11, 0);
  }
  else if ( a3 == 3 )
  {
    v8 = this - 1120;
    *(_DWORD *)(v8 + 1204) = 5;
    sub_102B7B10((float *)v8, 1, 255, 0, 0, 190);
    sub_100EC3F0((_DWORD *)v8, 0, 0.0, 0);
    v12 = *(float *)(dword_106B31C8 + 12) + 0.5;
    sub_100EC4A0((int *)v8, v12, 0);
    v9 = *(_DWORD *)(v8 + 424);
    *(_DWORD *)(v8 + 196) = sub_102B88F0;
    v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 92))(v9);
    return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(v8 + 424) + 88))(*(_DWORD *)(v8 + 424), v10 | 8);
  }
  return result;
}
