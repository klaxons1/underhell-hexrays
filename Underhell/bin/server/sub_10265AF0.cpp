// bad sp value at call has been detected, the output may be wrong!
void __usercall sub_10265AF0(int a1@<ebp>, int a2@<esi>, _DWORD *a3, float *a4, float *a5, int a6, int a7, int a8)
{
  _DWORD *v8; // eax
  char v9; // al
  float v10[22]; // [esp+28h] [ebp-7Ch] BYREF
  int v11; // [esp+80h] [ebp-24h] BYREF
  float *v12; // [esp+94h] [ebp-10h]
  int v13; // [esp+98h] [ebp-Ch]
  void *v14; // [esp+9Ch] [ebp-8h]
  void *retaddr; // [esp+A4h] [ebp+0h]

  v13 = a1;
  v14 = retaddr;
  v8 = sub_100E99F0(a3);
  v9 = (*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)dword_106BAFFC + 20))(dword_106BAFFC, a3, a2);
  v12 = a5;
  LOBYTE(v12) = v9;
  sub_1001F180(v10, a4, v12);
  (*(void (__thiscall **)(int, float *, int, int *, int))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v10,
    a6,
    &v11,
    a8);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0(a8, a8 + 12, 255, 0, 0, 1, -1.0);
}
