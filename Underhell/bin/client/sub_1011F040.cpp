int __cdecl sub_1011F040(int a1, _DWORD *a2, float *a3)
{
  int v3; // esi
  int (__thiscall *v4)(int); // edx
  int v5; // ecx
  char v6; // al
  int v7; // edx
  double v8; // st7
  int v9; // ebx
  int result; // eax
  int v11[15]; // [esp-44h] [ebp-94h] BYREF
  _DWORD v12[15]; // [esp+Ch] [ebp-44h] BYREF
  int v13; // [esp+48h] [ebp-8h]
  int v14; // [esp+4Ch] [ebp-4h]

  v3 = dword_10439968;
  v4 = *(int (__thiscall **)(int))(*(_DWORD *)dword_10439968 + 52);
  v13 = dword_10439968;
  v5 = v4(dword_10439968);
  v12[0] = *(_DWORD *)a1;
  v12[1] = *(_DWORD *)(a1 + 4);
  v12[2] = *(_DWORD *)(a1 + 8);
  LOWORD(v12[3]) = *(_WORD *)(a1 + 12);
  BYTE2(v12[3]) = *(_BYTE *)(a1 + 14);
  v6 = *(_BYTE *)(a1 + 16);
  HIBYTE(v12[3]) = *(_BYTE *)(a1 + 15);
  LOBYTE(v12[4]) = v6;
  v12[5] = *a2;
  v12[6] = a2[1];
  v12[7] = a2[2];
  v12[8] = a2[3];
  v12[9] = a2[4];
  v7 = a2[5];
  v12[11] = a2[6];
  v14 = v5;
  v12[10] = v7;
  *(float *)&v12[12] = *a3;
  v8 = a3[1];
  *(float *)&v12[13] = a3[1];
  *(float *)&v12[14] = a3[2];
  if ( v8 < 0.0 )
    *(float *)&v12[13] = *(float *)(v5 + 72);
  v9 = sub_100DDA40(240);
  if ( v9 )
  {
    sub_101437D0(v3);
    *(_DWORD *)v9 = &CSimpleVCallbackView::`vftable';
  }
  else
  {
    v9 = 0;
  }
  qmemcpy(v11, v12, sizeof(v11));
  sub_1011DC00(
    (_DWORD *)v9,
    v14,
    v11[0],
    v11[1],
    v11[2],
    v11[3],
    v11[4],
    v11[5],
    v11[6],
    v11[7],
    v11[8],
    v11[9],
    v11[10],
    v11[11],
    v11[12],
    v11[13],
    v11[14],
    (int)(off_103E524C + 5),
    (_BYTE *)off_103E524C + 44);
  result = (**(int (__thiscall ***)(int, int))(v13 + 556))(v13 + 556, v9);
  if ( v9 )
  {
    result = v9 + 4;
    if ( !_InterlockedDecrement((volatile signed __int32 *)(v9 + 4)) )
    {
      result = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 4))(v9);
      if ( (_BYTE)result )
        return (**(int (__thiscall ***)(int, int))v9)(v9, 1);
    }
  }
  return result;
}
