// bad sp value at call has been detected, the output may be wrong!
void __userpurge sub_102FE8B0(int a1@<ecx>, int a2@<ebp>, int a3@<esi>, char a4)
{
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  float v9[20]; // [esp+24h] [ebp-DCh] BYREF
  _BYTE v10[12]; // [esp+74h] [ebp-8Ch] BYREF
  float v11[13]; // [esp+80h] [ebp-80h] BYREF
  __int16 v12; // [esp+B4h] [ebp-4Ch]
  _DWORD v13[3]; // [esp+D0h] [ebp-30h] BYREF
  float v14[3]; // [esp+DCh] [ebp-24h] BYREF
  float v15[2]; // [esp+E8h] [ebp-18h] BYREF
  float v16; // [esp+F0h] [ebp-10h]
  int v17; // [esp+F4h] [ebp-Ch]
  void *v18; // [esp+F8h] [ebp-8h]
  void *retaddr; // [esp+100h] [ebp+0h]

  v17 = a2;
  v18 = retaddr;
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  v5 = *(_DWORD *)(a1 + 252);
  v14[0] = *(float *)(a1 + 580);
  v14[1] = *(float *)(a1 + 584);
  v14[2] = *(float *)(a1 + 588) - 64.0;
  if ( (v5 & 0x800) != 0 )
    sub_100DAE60(a1);
  v15[0] = *(float *)(a1 + 580);
  v15[1] = *(float *)(a1 + 584);
  v16 = *(float *)(a1 + 588) + 1.0;
  sub_1001F180(v9, v15, v14);
  sub_10265570(v13, a1, 0);
  (*(void (__thiscall **)(int, float *, int, _DWORD *, _BYTE *, int))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v9,
    213003,
    v13,
    v10,
    a3);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v10, (int)v11, 255, 0, 0, 1, 5.0);
  if ( v11[8] < 1.0 )
  {
    v6 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106BAFF8 + 20))(dword_106BAFF8, v12);
    if ( *(_DWORD *)(dword_10698344 + 48) || (v7 = *(unsigned __int16 *)(v6 + 72), v7 == 67) || v7 == 68 || v7 == 78 )
    {
      if ( !*(_BYTE *)(a1 + 4126) )
      {
        if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
          sub_100DAE60(a1);
        v16 = v11[2] + 24.0;
        sub_102ABAF0(v15, (float *)(a1 + 704), SLOBYTE(v16));
        if ( a4 )
          sub_10264E40((int)v10, (int)"Antlion.Unburrow");
      }
    }
  }
}
