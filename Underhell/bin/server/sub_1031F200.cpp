int __thiscall sub_1031F200(int this, int a2)
{
  unsigned int v4; // eax
  int v5; // eax
  int *v6; // ecx
  int v7; // eax
  unsigned int v8; // eax
  int v9; // ecx
  unsigned int v10; // eax
  int *v11; // ecx
  int v12; // ecx
  int v14; // eax
  bool v15; // zf
  float v16; // edx
  float v17; // eax
  float v18; // ecx
  float v19; // edx
  double v20; // st7
  float v21; // ebx
  float v22; // edx
  float v23; // eax
  int (__thiscall *v24)(int); // eax
  int v25; // eax
  int v26; // edi
  int (__thiscall *v27)(int); // eax
  int v28; // ecx
  __int64 v29; // [esp+14h] [ebp-4Ch]
  int v30; // [esp+28h] [ebp-38h] BYREF
  float v31; // [esp+2Ch] [ebp-34h]
  float v32; // [esp+30h] [ebp-30h]
  float v33; // [esp+34h] [ebp-2Ch] BYREF
  float v34; // [esp+38h] [ebp-28h]
  float v35; // [esp+3Ch] [ebp-24h]
  float v36; // [esp+40h] [ebp-20h]
  float v37; // [esp+44h] [ebp-1Ch]
  float v38; // [esp+48h] [ebp-18h]
  float v39; // [esp+4Ch] [ebp-14h]
  float v40; // [esp+50h] [ebp-10h]
  float v41; // [esp+54h] [ebp-Ch]
  int v42; // [esp+58h] [ebp-8h]
  float v43; // [esp+5Ch] [ebp-4h]
  int v44; // [esp+68h] [ebp+8h]
  float v45; // [esp+68h] [ebp+8h]
  int v46; // [esp+68h] [ebp+8h]
  int v47; // [esp+68h] [ebp+8h]

  v43 = *(float *)(this + 220);
  v4 = *(_DWORD *)(a2 + 40);
  if ( v4 != -1 )
  {
    v5 = v4 >> 12;
    v6 = &off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 1];
    v44 = v5;
    if ( v6[1] == v5 )
    {
      if ( *v6 )
      {
        v7 = v6[1] == v5 ? *v6 : 0;
        v8 = *(_DWORD *)(v7 + 412);
        if ( v8 != -1 && off_1061BE18[4 * (v8 & 0xFFF) + 2] == v8 >> 12 && off_1061BE18[4 * (v8 & 0xFFF) + 1] )
        {
          v9 = v6[1] == v44 ? *v6 : 0;
          v10 = *(_DWORD *)(v9 + 412);
          if ( v10 == -1 || (v11 = &off_1061BE18[4 * (*(_DWORD *)(v9 + 412) & 0xFFF) + 1], v11[1] != v10 >> 12) )
            v12 = 0;
          else
            v12 = *v11;
          if ( v12 == this )
            return 0;
        }
      }
    }
  }
  v14 = sub_10035940((int *)this, a2, a2);
  v15 = (*(_BYTE *)(a2 + 64) & 0x40) == 0;
  v42 = v14;
  if ( !v15 )
  {
    v16 = *(float *)(a2 + 4);
    v17 = *(float *)(a2 + 8);
    v41 = *(float *)(a2 + 12);
    v39 = v16;
    v40 = v17;
    off_10689714();
    v33 = v39 * 500.0;
    v34 = v40 * 500.0;
    v35 = 500.0 * v41;
    sub_100EA150(this, &v33);
    (*(void (__thiscall **)(int, _DWORD, int *, _DWORD))(*(_DWORD *)this + 528))(this, 0, &v30, 0);
    v18 = *(float *)(a2 + 8);
    v19 = *(float *)(a2 + 12);
    v33 = *(float *)(a2 + 4);
    v36 = v33;
    v34 = v18;
    v35 = v19;
    v37 = v18;
    v38 = v19;
    off_10689714();
    v45 = v31 * v37 + *(float *)&v30 * v36 + v32 * v38;
    v20 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            10.0,
            30.0);
    *(float *)(this + 4272) = v20;
    if ( v45 <= 0.0 )
      *(float *)(this + 4272) = v20 * -1.0;
  }
  v21 = v43;
  v46 = *(_DWORD *)(this + 220);
  if ( LODWORD(v43) != v46 )
  {
    if ( *(_DWORD *)(this + 4120) == 4
      && (double)SLODWORD(v43) > *(float *)(this + 4236)
      && (double)v46 <= *(float *)(this + 4236) )
    {
      sub_1023C380((_DWORD *)this, (int)"NPC_AttackHelicopter.BadlyDamagedAlert", 0.0, 0);
    }
    if ( (unsigned __int8)sub_1034A070(LODWORD(v21), 5) )
      sub_1031EFC0((_DWORD *)this, (int)&v30);
    if ( (unsigned __int8)sub_1034A070(LODWORD(v21), 2)
      && LODWORD(v21) != (*(int (__thiscall **)(int))(*(_DWORD *)this + 448))(this) )
    {
      sub_103137C0(this, (int)*(float *)(a2 + 52));
    }
    if ( (unsigned __int8)sub_1034A070(LODWORD(v21), 13) )
    {
      v22 = *(float *)(a2 + 20);
      v23 = *(float *)(a2 + 24);
      v30 = *(int *)(a2 + 16);
      v31 = v22;
      v32 = v23;
      sub_10315AD0((_DWORD *)this, (float *)&v30);
    }
    v24 = *(int (__thiscall **)(int))(*(_DWORD *)this + 448);
    v43 = (double)SLODWORD(v43) * 100.0;
    v25 = v24(this);
    v26 = (int)(v43 / (double)v25);
    v27 = *(int (__thiscall **)(int))(*(_DWORD *)this + 448);
    v43 = (double)*(int *)(this + 220) * 100.0;
    v47 = v27(this);
    v28 = (int)(v43 / (double)v47);
    if ( (v26 + 9) / 10 != (v28 + 9) / 10 )
    {
      HIDWORD(v29) = this;
      LODWORD(v29) = this;
      sub_1017CC00(this + 4284, v28, v29);
    }
  }
  return v42;
}
