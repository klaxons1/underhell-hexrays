// bad sp value at call has been detected, the output may be wrong!
void __userpurge sub_1036CAD0(int a1@<ecx>, int a2@<ebp>, int a3@<esi>, char a4)
{
  int v5; // ecx
  char v6; // al
  float v8[20]; // [esp+24h] [ebp-DCh] BYREF
  _BYTE v9[12]; // [esp+74h] [ebp-8Ch] BYREF
  float v10[13]; // [esp+80h] [ebp-80h] BYREF
  __int16 v11; // [esp+B4h] [ebp-4Ch]
  _DWORD v12[3]; // [esp+D0h] [ebp-30h] BYREF
  float v13[3]; // [esp+DCh] [ebp-24h] BYREF
  float v14[2]; // [esp+E8h] [ebp-18h] BYREF
  float v15; // [esp+F0h] [ebp-10h]
  int v16; // [esp+F4h] [ebp-Ch]
  void *v17; // [esp+F8h] [ebp-8h]
  void *retaddr; // [esp+100h] [ebp+0h]

  v16 = a2;
  v17 = retaddr;
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  v5 = *(_DWORD *)(a1 + 252);
  v13[0] = *(float *)(a1 + 580);
  v13[1] = *(float *)(a1 + 584);
  v13[2] = *(float *)(a1 + 588) - 64.0;
  if ( (v5 & 0x800) != 0 )
    sub_100DAE60(a1);
  v14[0] = *(float *)(a1 + 580);
  v14[1] = *(float *)(a1 + 584);
  v15 = *(float *)(a1 + 588) + 1.0;
  sub_1001F180(v8, v14, v13);
  sub_10265570(v12, a1, 0);
  (*(void (__thiscall **)(int, float *, int, _DWORD *, _BYTE *, int))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v8,
    16395,
    v12,
    v9,
    a3);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v9, (int)v10, 255, 0, 0, 1, 5.0);
  if ( v10[8] < 1.0 )
  {
    v6 = *(_BYTE *)((*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106BAFF8 + 20))(dword_106BAFF8, v11) + 72);
    if ( v6 == 67 || v6 == 68 )
    {
      v15 = v10[2] + 24.0;
      sub_102ABAF0(v14, (float *)(a1 + 728), SLOBYTE(v15));
      if ( a4 )
        sub_10264E40((int)v9, (int)"Headcrab.Unburrow");
    }
  }
}
