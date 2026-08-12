void __thiscall sub_100964A0(float *this, float *a2, _BYTE *a3, int a4)
{
  unsigned __int16 v4; // ax
  int v5; // esi
  float *v7; // ebx
  int v8; // ebx
  int v9; // eax
  int v10; // esi
  double v11; // st4
  double v12; // st7
  double v13; // st4
  double v14; // st5
  _BYTE *v15; // eax
  float *v16; // edi
  char v17; // al
  _BYTE *v18; // [esp+20h] [ebp-1Ch] BYREF
  _BYTE *v19; // [esp+28h] [ebp-14h] BYREF
  float v20; // [esp+2Ch] [ebp-10h]
  float *v21; // [esp+30h] [ebp-Ch]
  int v22; // [esp+34h] [ebp-8h]
  int v23; // [esp+38h] [ebp-4h]
  int v24; // [esp+44h] [ebp+8h]

  v21 = this;
  v18 = a3;
  v4 = sub_10095220(word_106938B8, (int)&v18);
  if ( v4 == 0xFFFF )
  {
    v22 = 0;
    v5 = 0;
    goto LABEL_5;
  }
  v5 = *(_DWORD *)(dword_106938BC + 16 * v4 + 12);
  v22 = v5;
  if ( !v5 )
  {
LABEL_5:
    v23 = 0;
    goto LABEL_6;
  }
  v23 = *(_DWORD *)(v5 + 4);
LABEL_6:
  v7 = &flt_106091F0[4 * v23];
  v20 = *(float *)&v7;
  if ( v5 && (*(_BYTE *)(v5 + 32) & 2) != 0 )
  {
    v24 = sub_1002A680(&dword_10690DF8);
    v8 = 0;
    if ( sub_1016BFB0(&dword_10690DF8) > 0 )
    {
      do
      {
        v9 = __RTDynamicCast(
               *(_DWORD *)(v24 + 4 * v8),
               0,
               (struct _s_RTTICompleteObjectLocator *)&CAI_BaseNPC `RTTI Type Descriptor',
               (int)&CAI_PlayerAlly `RTTI Type Descriptor',
               0);
        v10 = v9;
        if ( v9 && (float *)v9 != a2 )
        {
          if ( ((_DWORD)a2[63] & 0x800) != 0 )
            sub_100DAE60(a2);
          if ( (*(_DWORD *)(v10 + 252) & 0x800) != 0 )
            sub_100DAE60(v10);
          v11 = *(float *)(v10 + 580) - a2[145];
          v12 = v11 * v11;
          v13 = *(float *)(v10 + 584) - a2[146];
          v14 = *(float *)(v10 + 588) - a2[147];
          if ( v14 * v14 + v13 * v13 + v12 < 1000000.0
            && (*(unsigned __int8 (__thiscall **)(float *, int, int, _DWORD))(*(_DWORD *)a2 + 548))(a2, v10, 16449, 0) )
          {
            (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 1656))(v10);
            sub_100B0060(a3, 0, 0);
          }
        }
        ++v8;
      }
      while ( v8 < sub_1016BFB0(&dword_10690DF8) );
      v5 = v22;
    }
    v7 = (float *)LODWORD(v20);
  }
  if ( !*(_DWORD *)(dword_10693844 + 48) )
  {
    if ( !v5 || -1.0 == *(float *)(v5 + 8) )
    {
      if ( v7[1] > 0.0 )
        sub_10092780(v21, v23, *v7, v7[1]);
    }
    else
    {
      sub_10092780(v21, *(_DWORD *)(v5 + 4), *(float *)(v5 + 8), *(float *)(v5 + 12));
    }
    if ( !v5 || -1.0 == *(float *)(v5 + 16) )
    {
      if ( v7[3] > 0.0 )
        sub_100926C0(a2, v23, v7[2], v7[3]);
    }
    else
    {
      sub_100926C0(a2, *(_DWORD *)(v5 + 4), *(float *)(v5 + 16), *(float *)(v5 + 20));
    }
    if ( v5 && -1.0 != *(float *)(v5 + 24) )
    {
      v15 = a3;
      if ( !a3 || !*a3 )
        v15 = 0;
      v16 = v21;
      v20 = -1.0;
      v19 = v15;
      v17 = sub_10095150((_BYTE *)v21 + 812, (int)&v19);
      if ( v17 != -1 )
        sub_100925F0((float *)(*((_DWORD *)v16 + 204) + 12 * v17 + 8), *(float *)(v5 + 24), *(float *)(v5 + 24));
    }
  }
}
