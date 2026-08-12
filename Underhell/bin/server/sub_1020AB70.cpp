char *__usercall sub_1020AB70@<eax>(int a1@<esi>, char *a2)
{
  char *result; // eax
  _DWORD *v3; // esi
  int (__thiscall *v4)(_DWORD *, _BYTE *, int); // edx
  float *v5; // eax
  int (__thiscall *v6)(_DWORD *); // edx
  float *v7; // eax
  char Buffer[512]; // [esp+0h] [ebp-23Ch] BYREF
  float v10[3]; // [esp+200h] [ebp-3Ch] BYREF
  _BYTE v11[12]; // [esp+20Ch] [ebp-30h] BYREF
  float v12[3]; // [esp+218h] [ebp-24h] BYREF
  float v13[3]; // [esp+224h] [ebp-18h] BYREF
  float v14; // [esp+230h] [ebp-Ch]
  float v15; // [esp+234h] [ebp-8h]
  float v16; // [esp+238h] [ebp-4h]

  result = a2;
  if ( *(_DWORD *)a2 == 2 )
  {
    sub_10429A00(Buffer, 0x200u, "models/%s", *((_DWORD *)a2 + 259));
    sub_10429820((int)Buffer, ".mdl", 512);
    v3 = (_DWORD *)sub_10153490();
    sub_100F5A30(v3, (int)v12, 0, 0);
    v4 = *(int (__thiscall **)(_DWORD *, _BYTE *, int))(*v3 + 504);
    v14 = v12[0] * 56755.84;
    v15 = v12[1] * 56755.84;
    v16 = 56755.84 * v12[2];
    v5 = (float *)v4(v3, v11, a1);
    v6 = *(int (__thiscall **)(_DWORD *))(*v3 + 504);
    v13[0] = *v5 + v14;
    v13[1] = v5[1] + v15;
    v13[2] = v5[2] + v16;
    v7 = (float *)v6(v3);
    return sub_10208BF0((int)Buffer, v7, v10, (int)v13, (char)v3, (const char *)1);
  }
  return result;
}
