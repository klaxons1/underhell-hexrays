char __thiscall sub_1021B970(int this, int a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  _DWORD *v5; // edi
  unsigned int v6; // eax
  _DWORD *v7; // esi
  void *v8; // eax
  void *v9; // eax
  int v11; // [esp-8h] [ebp-40h]
  int v12; // [esp-8h] [ebp-40h]
  int v13[3]; // [esp+18h] [ebp-20h] BYREF
  int v14[3]; // [esp+24h] [ebp-14h] BYREF
  int v15; // [esp+30h] [ebp-8h] BYREF
  int v16; // [esp+34h] [ebp-4h] BYREF

  v3 = *(_DWORD *)(this + 864);
  if ( v3 == -1 || (v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 864) & 0xFFF) + 1], v4[1] != v3 >> 12) )
    v5 = 0;
  else
    v5 = (_DWORD *)*v4;
  v6 = *(_DWORD *)(this + 868);
  if ( v6 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 868) & 0xFFF) + 2] != v6 >> 12 )
    v7 = 0;
  else
    v7 = (_DWORD *)off_1061BE18[4 * (*(_DWORD *)(this + 868) & 0xFFF) + 1];
  if ( !v5 || !v7 )
    return 0;
  if ( (v5[63] & 0x800) != 0 )
    sub_100DAE60((int)v5);
  v13[0] = v5[145];
  v13[1] = v5[146];
  v13[2] = v5[147];
  if ( (*(int (__thiscall **)(_DWORD *))(*v5 + 208))(v5) )
  {
    v11 = *(__int16 *)(this + 872);
    v8 = (void *)(*(int (__thiscall **)(_DWORD *))(*v5 + 208))(v5);
    sub_100BD6D0(v8, v11, (int)v13, 0, 0, 0);
  }
  if ( (v7[63] & 0x800) != 0 )
    sub_100DAE60((int)v7);
  v14[0] = v7[145];
  v14[1] = v7[146];
  v14[2] = v7[147];
  if ( (*(int (__thiscall **)(_DWORD *))(*v7 + 208))(v7) )
  {
    v12 = *(__int16 *)(this + 874);
    v9 = (void *)(*(int (__thiscall **)(_DWORD *))(*v7 + 208))(v7);
    sub_100BD6D0(v9, v12, (int)v14, 0, 0, 0);
  }
  sub_1021CA40((int)v13, (int)v14, 10, *(float *)&a2, (int)&v16, (int)&v15);
  a2 = (int)*(float *)&v16;
  sub_1021B450((_DWORD *)(this + 844), &a2);
  a2 = (int)*(float *)&v15;
  sub_1021B3B0((_DWORD *)(this + 812), &a2);
  return 1;
}
