int __usercall sub_10083AC0@<eax>(
        int a1@<ecx>,
        int a2@<esi>,
        int a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        unsigned __int8 a6)
{
  float v7[3]; // [esp+4h] [ebp-30h] BYREF
  float v8[3]; // [esp+10h] [ebp-24h] BYREF
  float v9[3]; // [esp+1Ch] [ebp-18h] BYREF
  float v10[3]; // [esp+28h] [ebp-Ch] BYREF

  sub_101F2310(a2, a1, v9);
  sub_101F2310(a2, a3, v10);
  v8[0] = v10[0];
  v8[1] = v10[1];
  v8[2] = v10[2] + 1.0;
  v7[0] = v9[0];
  v7[1] = v9[1];
  v7[2] = v9[2] + 1.0;
  return (*(int (__thiscall **)(int, float *, float *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_1041316C
                                                                                              + 12))(
           dword_1041316C,
           v7,
           v8,
           a4,
           a5,
           a6,
           0,
           -1.0);
}
