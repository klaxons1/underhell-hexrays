int __thiscall sub_10142E90(int this, int a2)
{
  int i; // eax
  int result; // eax
  int v5; // eax
  _DWORD *v6; // ecx
  int v7; // eax
  bool v8; // al
  double v9; // st7
  _DWORD v10[11]; // [esp+4h] [ebp-30h] BYREF
  char v11; // [esp+30h] [ebp-4h]

  for ( i = 688136; i < 688192; i += 4 )
    *(_DWORD *)(i + *(_DWORD *)(this + 144)) = 0;
  result = *(_DWORD *)(*(_DWORD *)(this + 128) + 272);
  if ( !result || *(_DWORD *)(*(_DWORD *)(result + 28) + 48) )
  {
    v5 = *(_DWORD *)(this + 148);
    v11 |= 3u;
    if ( v5 )
      v10[0] = v5 + 8;
    else
      v10[0] = 0;
    v6 = *(_DWORD **)(this + 128);
    v10[8] = v6[113];
    v7 = (*(int (__thiscall **)(_DWORD *))(*v6 + 60))(v6);
    v10[1] = *(_DWORD *)(this + 144);
    v10[9] = v7;
    v8 = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 44))(dword_1044CC48)
      && *(_DWORD *)(dword_1043C114 + 48);
    *(float *)&v10[2] = *(float *)(this + 52);
    *(float *)&v10[3] = *(float *)(this + 56);
    *(float *)&v10[4] = *(float *)(this + 60);
    *(float *)&v10[5] = flt_1043BD2C;
    *(float *)&v10[6] = flt_1043BD30;
    v11 = v11 & 0xFC | v8 | (2 * (a2 != 7));
    *(float *)&v10[7] = flt_1043BD34;
    v9 = *(float *)(dword_1043BE44 + 44);
    if ( a2 == 7 && v9 > *(float *)(this + 80) )
      v9 = *(float *)(this + 80);
    *(float *)&v10[10] = v9 * v9;
    return (*(int (__thiscall **)(void *, _DWORD *))(*(_DWORD *)off_103DCDDC + 60))(off_103DCDDC, v10);
  }
  return result;
}
