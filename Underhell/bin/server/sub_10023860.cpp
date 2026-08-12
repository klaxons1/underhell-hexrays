int __userpurge sub_10023860@<eax>(int a1@<ebp>, int a2, float *a3, float *a4, int *a5)
{
  int v5; // edx
  int v6; // edx
  float v8[22]; // [esp-C0h] [ebp-CCh] BYREF
  _DWORD v9[6]; // [esp-68h] [ebp-74h] BYREF
  _DWORD v10[23]; // [esp-50h] [ebp-5Ch] BYREF
  _UNKNOWN *retaddr; // [esp+Ch] [ebp+0h]

  v10[20] = a1;
  v10[21] = retaddr;
  sub_1001F180(v8, a3, a4);
  v5 = *a5;
  v9[2] = a5[1];
  v9[1] = v5;
  v6 = a5[2];
  v9[0] = &CTriggerTraceEnum::`vftable';
  v9[3] = v6;
  v9[4] = 1174421507;
  v9[5] = v8;
  sub_1001E4E0(v10, a2);
  return (*(int (__thiscall **)(int, float *, int, _DWORD *))(*(_DWORD *)dword_106B31F4 + 40))(
           dword_106B31F4,
           v8,
           1,
           v9);
}
