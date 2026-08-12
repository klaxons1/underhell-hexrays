int __usercall sub_101E93D0@<eax>(int a1@<esi>, _DWORD *a2, char a3)
{
  int (__thiscall *v3)(_DWORD *, _BYTE *, int); // edx
  float *v4; // eax
  int (__thiscall *v5)(_DWORD *); // edx
  float *v6; // eax
  int v8; // [esp-10h] [ebp-A4h]
  _DWORD v9[21]; // [esp+4h] [ebp-90h] BYREF
  float v10[3]; // [esp+58h] [ebp-3Ch] BYREF
  _BYTE v11[12]; // [esp+64h] [ebp-30h] BYREF
  float v12[3]; // [esp+70h] [ebp-24h] BYREF
  float v13[3]; // [esp+7Ch] [ebp-18h] BYREF
  float v14; // [esp+88h] [ebp-Ch]
  float v15; // [esp+8Ch] [ebp-8h]
  float v16; // [esp+90h] [ebp-4h]
  int savedregs; // [esp+94h] [ebp+0h] BYREF

  if ( !a2 )
    return 0;
  sub_100F5A30(a2, (int)v12, 0, 0);
  v3 = *(int (__thiscall **)(_DWORD *, _BYTE *, int))(*a2 + 504);
  v14 = v12[0] * 16384.0;
  v15 = v12[1] * 16384.0;
  v16 = 16384.0 * v12[2];
  v4 = (float *)v3(a2, v11, a1);
  v5 = *(int (__thiscall **)(_DWORD *))(*a2 + 504);
  v13[0] = *v4 + v14;
  v13[1] = v4[1] + v15;
  v8 = a3 != 0 ? 33570827 : 1174421507;
  v13[2] = v4[2] + v16;
  v6 = (float *)v5(a2);
  sub_1002A5F0((int)&savedregs, v8, v6, v10, (int)v13, v8, (int)a2, 0);
  if ( 1.0 == *(float *)&v9[11] )
    return 0;
  if ( sub_10163160(v9) )
    return v9[19];
  else
    return 0;
}
