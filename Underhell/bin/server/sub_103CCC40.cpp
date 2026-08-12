int __thiscall sub_103CCC40(int this, int a2)
{
  float *v3; // eax
  void (__thiscall *v4)(int, float *, float *, _DWORD); // edx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  unsigned int v8; // eax
  int v9; // eax
  int v10; // edi
  double v11; // st7
  unsigned __int8 v12; // bl
  _DWORD *v13; // edi
  bool v14; // zf
  double v15; // st7
  _BYTE v17[4]; // [esp+44h] [ebp-E0h] BYREF
  float v18; // [esp+48h] [ebp-DCh]
  float v19; // [esp+4Ch] [ebp-D8h]
  float v20; // [esp+50h] [ebp-D4h]
  float v21; // [esp+54h] [ebp-D0h]
  int v22; // [esp+58h] [ebp-CCh]
  int v23; // [esp+5Ch] [ebp-C8h]
  float v24; // [esp+78h] [ebp-ACh]
  int v25[3]; // [esp+94h] [ebp-90h] BYREF
  int v26[16]; // [esp+A0h] [ebp-84h] BYREF
  _DWORD *v27; // [esp+E0h] [ebp-44h]
  float v28; // [esp+E8h] [ebp-3Ch] BYREF
  float v29; // [esp+ECh] [ebp-38h]
  float v30; // [esp+F0h] [ebp-34h]
  int v31[3]; // [esp+F4h] [ebp-30h] BYREF
  int v32; // [esp+100h] [ebp-24h] BYREF
  float v33; // [esp+104h] [ebp-20h]
  float v34; // [esp+108h] [ebp-1Ch]
  float v35; // [esp+10Ch] [ebp-18h] BYREF
  float v36; // [esp+110h] [ebp-14h]
  float v37; // [esp+114h] [ebp-10h]
  float v38; // [esp+118h] [ebp-Ch] BYREF
  float v39; // [esp+11Ch] [ebp-8h]
  float v40; // [esp+120h] [ebp-4h]
  int savedregs; // [esp+124h] [ebp+0h] BYREF

  (*(void (__thiscall **)(int, float *, _DWORD, _DWORD))(*(_DWORD *)this + 528))(this, &v28, 0, 0);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v3 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 532))(this);
  v4 = *(void (__thiscall **)(int, float *, float *, _DWORD))(*(_DWORD *)this + 2096);
  v35 = *v3 + *(float *)(this + 580);
  v36 = v3[1] + *(float *)(this + 584);
  v37 = v3[2] + *(float *)(this + 588);
  v4(this, &v38, &v35, 0);
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) )
  {
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
    (*(void (__thiscall **)(int, int *, float *, _DWORD))(*(_DWORD *)v5 + 520))(v5, v31, &v35, 0);
    if ( *(_DWORD *)(dword_106EC13C + 48) )
    {
      sub_1011C120((int)v31, 4.0, 255, 0, 0, 1, 10.0);
      v6 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
      v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 208))(v6);
      if ( v7 )
        sub_100C0570(v7, 10.0, 0);
    }
  }
  if ( v39 * v29 + v38 * v28 + v40 * v30 < 0.5 )
  {
    v38 = v28;
    v39 = v29;
    v40 = v30;
  }
  if ( *(_BYTE *)(this + 5760) == 1 )
  {
    v8 = *(_DWORD *)(this + 2420);
    if ( v8 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 2420) & 0xFFF) + 2] != v8 >> 12 )
      v9 = 0;
    else
      v9 = off_1061BE18[4 * (*(_DWORD *)(this + 2420) & 0xFFF) + 1];
    v10 = __RTDynamicCast(
            v9,
            0,
            (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
            (int)&CRagdollProp `RTTI Type Descriptor',
            0);
    if ( v10 )
    {
      if ( v10 != -1132 )
      {
        (*(void (__thiscall **)(_DWORD, int *, _DWORD))(**(_DWORD **)(v10 + 1156) + 188))(
          *(_DWORD *)(v10 + 1156),
          v31,
          0);
        sub_1002A5F0((int)&savedregs, this, &v35, (float *)v31, 1174421507, this, 0, (int)v25);
      }
      sub_10219820(v10, 200.0, *(float *)(dword_106B31C8 + 12), 1.0, 0);
    }
  }
  else
  {
    v11 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)this + 1984))(this);
    *(float *)&v32 = v38 * v11 + v35;
    v33 = v39 * v11 + v36;
    v34 = v11 * v40 + v37;
    sub_1002A5F0((int)&savedregs, this, &v35, (float *)&v32, 1174421507, this, 0, (int)v25);
  }
  if ( *(_DWORD *)(dword_106EC13C + 48) )
    sub_1011BC50((float *)v25, (float *)v26, 255, 0, 0, 1, 10.0);
  if ( a2 )
    v12 = *(_BYTE *)(this + 5840);
  else
    v12 = *(_BYTE *)(this + 5836);
  sub_10154AF0((_DWORD *)this, 1);
  sub_10154BB0(0);
  sub_10154BB0(v12);
  sub_10154CA0((int)v26);
  sub_10154B90();
  v13 = v27;
  if ( v27 && *(_BYTE *)(this + 225) )
  {
    if ( *(_DWORD *)(dword_106EC13C + 48) )
    {
      *(float *)&v32 = 2.0;
      v33 = 2.0;
      v34 = 2.0;
      *(float *)v31 = -2.0;
      *(float *)&v31[1] = -2.0;
      *(float *)&v31[2] = -2.0;
      sub_1011BB20((int)v26, (int)v31, (int)&v32, 255, 0, 0, 8, 10.0);
    }
    sub_10248110((int)v17, this, this, *(float *)(dword_106EC064 + 44), 256, 0);
    v21 = *(float *)v26;
    v22 = v26[1];
    v23 = v26[2];
    off_10689714();
    v14 = v13[23] == (_DWORD)"npc_antlion";
    v18 = v38 * 6000.0;
    v15 = 6000.0 * v40;
    v19 = v39 * 6000.0;
    v20 = v15;
    if ( v14 || sub_100D6240(v13, "npc_antlion") )
    {
      if ( sub_102FCD60(v13) )
        sub_102FF150((int)v13, v15, 0);
      else
        v24 = v24 * 4.0;
      sub_103CA370(this, (int)&savedregs, (float *)v26, 200.0, 0);
    }
    sub_100E8760(v13, (int)v17, (int)&v38, (int)v25);
  }
  return sub_103CCB40((float *)v26);
}
