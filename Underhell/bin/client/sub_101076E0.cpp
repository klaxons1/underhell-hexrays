char __thiscall sub_101076E0(int this, int a2, int *a3)
{
  int *v4; // eax
  int v5; // edi
  int *v6; // edx
  int v7; // edi
  _DWORD *v8; // eax
  _DWORD *v9; // edi
  int *v10; // eax
  int v11; // eax
  int v12; // edi
  unsigned __int16 i; // ax
  int v14; // ecx
  int *v16; // [esp+Ch] [ebp-68h] BYREF
  int v17; // [esp+10h] [ebp-64h]
  int v18; // [esp+14h] [ebp-60h]
  void **v19; // [esp+18h] [ebp-5Ch]
  int v20; // [esp+1Ch] [ebp-58h] BYREF
  int v21; // [esp+20h] [ebp-54h]
  int v22; // [esp+24h] [ebp-50h]
  int v23; // [esp+28h] [ebp-4Ch]
  int v24; // [esp+2Ch] [ebp-48h]
  int v25; // [esp+30h] [ebp-44h] BYREF
  int v26; // [esp+34h] [ebp-40h] BYREF
  int v27; // [esp+38h] [ebp-3Ch]
  void **v28; // [esp+3Ch] [ebp-38h]
  int v29; // [esp+40h] [ebp-34h] BYREF
  int v30; // [esp+44h] [ebp-30h]
  int v31; // [esp+48h] [ebp-2Ch]
  int v32; // [esp+4Ch] [ebp-28h]
  int v33; // [esp+50h] [ebp-24h]
  _DWORD v34[6]; // [esp+54h] [ebp-20h] BYREF
  _DWORD *v35; // [esp+6Ch] [ebp-8h]
  int v36; // [esp+70h] [ebp-4h]
  int v37; // [esp+7Ch] [ebp+8h]

  v4 = *(int **)(this + 320);
  if ( a3 != v4 )
  {
    if ( v4 )
    {
      v25 = *(_DWORD *)(this + 320);
      v26 = 0;
      v27 = 0;
      v29 = 0;
      v30 = 0;
      v31 = 0;
      v32 = 0;
      v33 = 0;
      v28 = &CCopyableUtlVector<ModelPoseDebugInfo::InfoText>::`vftable';
      v5 = (unsigned __int16)sub_101061C0((_WORD *)(this + 4), (int)&v25);
      v28 = &CCopyableUtlVector<ModelPoseDebugInfo::InfoText>::`vftable';
      sub_1011A810(&v29);
      if ( (_WORD)v5 != 0xFFFF )
      {
        v6 = *(int **)(this + 320);
        v35 = (_DWORD *)(44 * v5 + *(_DWORD *)(this + 8) + 12);
        v17 = 0;
        v18 = 0;
        v20 = 0;
        v21 = 0;
        v22 = 0;
        v23 = 0;
        v24 = 0;
        v19 = &CCopyableUtlVector<ModelPoseDebugInfo::InfoText>::`vftable';
        v16 = v6;
        v7 = (unsigned __int16)sub_101061C0((_WORD *)(this + 32), (int)&v16);
        v19 = &CCopyableUtlVector<ModelPoseDebugInfo::InfoText>::`vftable';
        sub_1011A810(&v20);
        if ( (_WORD)v7 == 0xFFFF )
          v8 = 0;
        else
          v8 = (_DWORD *)(44 * v7 + *(_DWORD *)(this + 36) + 12);
        v9 = v35;
        sub_10106C20(v35, 0, v8);
        sub_101058D0(v9, (_DWORD *)(this + 60));
      }
    }
  }
  v10 = a3;
  *(_DWORD *)(this + 320) = a3;
  v11 = *v10;
  v36 = v11;
  if ( v11 )
  {
    if ( *(_DWORD *)(v11 + 336) )
    {
      v11 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 36))(a2);
      v12 = v11;
      v37 = v11;
      if ( (unsigned int)v11 <= 0x7FF )
      {
        LOBYTE(v11) = ((1 << (v11 & 0x1F)) & *(_DWORD *)(this + 4 * (v11 >> 5) + 64)) != 0;
        if ( (_BYTE)v11 )
        {
          v16 = a3;
          v17 = 0;
          v18 = 0;
          v20 = 0;
          v21 = 0;
          v22 = 0;
          v23 = 0;
          v24 = 0;
          v19 = &CCopyableUtlVector<ModelPoseDebugInfo::InfoText>::`vftable';
          v35 = (_DWORD *)(unsigned __int16)sub_101061C0((_WORD *)(this + 4), (int)&v16);
          v19 = &CCopyableUtlVector<ModelPoseDebugInfo::InfoText>::`vftable';
          sub_1011A810(&v20);
          if ( (_WORD)v35 == 0xFFFF )
          {
            *(_DWORD *)(this + 60) += 3;
          }
          else
          {
            *(_DWORD *)(this + 60) = 9;
            sub_101073C0(this + 32);
            sub_10105C50((_DWORD *)(this + 32), this + 4);
            for ( i = sub_101062C0(this + 32); i != 0xFFFF; i = sub_10106390((_DWORD *)(this + 32), i) )
              *(_DWORD *)(44 * i + *(_DWORD *)(this + 36) + 16) = 0;
            v12 = v37;
          }
          v27 = 0;
          v29 = 0;
          v30 = 0;
          v31 = 0;
          v32 = 0;
          v33 = 0;
          v28 = &CCopyableUtlVector<ModelPoseDebugInfo::InfoText>::`vftable';
          v26 = v12;
          sub_10107630(this + 4, &a3, &v26);
          v14 = *(_DWORD *)(this + 60);
          *(float *)&v34[1] = -1.0;
          v34[0] = v14;
          *(float *)&v34[2] = 0.89999998;
          *(float *)&v34[3] = 1.0;
          *(float *)&v34[4] = 0.89999998;
          v34[5] = 0;
          (*(void (**)(int, _DWORD *, const char *, ...))(*(_DWORD *)dword_1041315C + 120))(
            dword_1041315C,
            v34,
            "[ %2d  ]    Model: %s",
            v12,
            v36 + 12);
          *(_DWORD *)(this + 60) += 3;
          v28 = &CCopyableUtlVector<ModelPoseDebugInfo::InfoText>::`vftable';
          LOBYTE(v11) = sub_1011A810(&v29);
        }
      }
    }
  }
  return v11;
}
