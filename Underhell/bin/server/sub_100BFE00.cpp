char __thiscall sub_100BFE00(int this, int a2, int a3, int a4)
{
  int v4; // esi
  int *v6; // ebx
  int v7; // esi
  int v8; // ebx
  int v9; // eax
  _BYTE v11[512]; // [esp+Ch] [ebp-200h] BYREF

  v4 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240(this) )
    sub_100BD750((volatile signed __int32 *)this);
  v6 = *(int **)(this + 1100);
  if ( !v6 || !*v6 )
    v6 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 104))(v4);
  if ( !v6 )
    return 0;
  v7 = *v6 + *(_DWORD *)(*v6 + 176) + 12 * *(_DWORD *)(this + 856);
  if ( !v7 || !*(_DWORD *)(v7 + 4) )
    return 0;
  sub_100BFC30(this);
  sub_101011A0(v11, *(_DWORD *)(*v6 + 156));
  if ( (unsigned __int8)sub_10101A60(dword_106BAFF8, a2, v6, v7, v11, a3, a4) )
  {
    v8 = *v6;
    v9 = *(_DWORD *)(v8 + 160) + 216 * *(_DWORD *)(*(_DWORD *)(v7 + 8) + 68 * *(_DWORD *)(a4 + 80) + v7);
    *(_DWORD *)(a4 + 60) = "**studio**";
    *(_WORD *)(a4 + 66) = 0x8000;
    *(_WORD *)(a4 + 64) = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106BAFF8 + 12))(
                            dword_106BAFF8,
                            v8 + v9 + *(_DWORD *)(v8 + v9 + 176));
  }
  return 1;
}
