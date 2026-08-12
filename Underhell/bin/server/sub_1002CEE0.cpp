int __thiscall sub_1002CEE0(int this, _DWORD *a2)
{
  char v3; // al
  bool v4; // bl
  int v5; // ecx
  int v6; // eax
  int v7; // edx
  int v8; // edi
  bool v9; // al
  int result; // eax
  _DWORD v11[12]; // [esp+Ch] [ebp-30h] BYREF

  v3 = *(_BYTE *)(this + 306);
  v4 = v3 == 4 || v3 == 5;
  if ( (a2[63] & 0x800) != 0 )
    sub_100DAE60(a2);
  v5 = a2[145];
  v6 = a2[147];
  *(float *)&v11[8] = -1.0;
  v7 = a2[146];
  *(float *)&v11[9] = -1.0;
  v8 = *(_DWORD *)(this + 2324);
  v11[1] = v5;
  v11[3] = v6;
  v11[2] = v7;
  v11[0] = 3;
  v11[4] = -1;
  v11[5] = v4 ? 26 : 6;
  v11[6] = -1;
  v11[7] = -1;
  v11[10] = 1;
  v11[11] = dword_105FE1B0;
  if ( v8 != 1 )
    *(float *)(this + 2328) = *(float *)(dword_106B31C8 + 12);
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) )
  {
    sub_100285C0((_DWORD *)this, 0, 1);
    DevMsg(2, "Stripped\n");
  }
  v9 = *(_DWORD *)(this + 2324) != 1;
  *(_DWORD *)(this + 2324) = 1;
  if ( *(_DWORD *)(this + 2336) != 1 )
    *(_DWORD *)(this + 2336) = 1;
  if ( v9 )
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)this + 1404))(this, v8, 1);
  sub_100457E0(2);
  result = (*(int (__thiscall **)(_DWORD, _DWORD *, _DWORD))(**(_DWORD **)(this + 2588) + 20))(
             *(_DWORD *)(this + 2588),
             v11,
             0);
  if ( !(_BYTE)result )
    return DevWarning(2, "Can't Create Route!\n");
  return result;
}
