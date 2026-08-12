int __thiscall sub_1035D360(_DWORD *this, _DWORD *a2)
{
  int v3; // ecx
  int v4; // eax
  int v5; // edx
  int v6; // ecx
  int result; // eax
  _DWORD v8[12]; // [esp+8h] [ebp-30h] BYREF

  if ( (a2[63] & 0x800) != 0 )
    sub_100DAE60((int)a2);
  v3 = a2[145];
  v4 = a2[147];
  *(float *)&v8[8] = -1.0;
  v5 = a2[146];
  *(float *)&v8[9] = -1.0;
  v8[1] = v3;
  v8[3] = v4;
  v8[11] = dword_10672234;
  v6 = this[647];
  v8[2] = v5;
  v8[4] = -1;
  v8[6] = -1;
  v8[7] = -1;
  v8[0] = 3;
  v8[5] = 26;
  v8[10] = 1;
  result = (*(int (__thiscall **)(int, _DWORD *, _DWORD))(*(_DWORD *)v6 + 20))(v6, v8, 0);
  if ( !(_BYTE)result )
    return DevWarning(2, "Can't Create Route!\n");
  return result;
}
