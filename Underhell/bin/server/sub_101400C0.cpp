void __thiscall sub_101400C0(int this, float a2)
{
  double v3; // st7
  double v4; // st6
  double v5; // st6
  unsigned int v6; // eax
  int *v7; // ecx
  int v8; // ecx
  bool v9; // c0
  double v10; // st7
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  int v14; // edx
  int v15; // eax
  int v16; // edi
  bool v17; // c0
  int v18; // eax
  int v19; // ebx
  int v20; // edi
  int v21; // eax
  float *v22; // eax
  _DWORD *v23; // eax
  int v24; // edi
  int v25; // esi
  float *v26; // [esp-8h] [ebp-56Ch]
  float v27; // [esp+0h] [ebp-564h]
  float v28; // [esp+Ch] [ebp-558h]
  float v29; // [esp+Ch] [ebp-558h]
  int v30[292]; // [esp+18h] [ebp-54Ch] BYREF
  char v31[44]; // [esp+4A8h] [ebp-BCh] BYREF
  float v32; // [esp+4D4h] [ebp-90h]
  char v33; // [esp+4DFh] [ebp-85h]
  float v34[3]; // [esp+4FCh] [ebp-68h] BYREF
  char v35[8]; // [esp+508h] [ebp-5Ch] BYREF
  float v36[3]; // [esp+510h] [ebp-54h] BYREF
  int v37; // [esp+51Ch] [ebp-48h]
  float v38; // [esp+520h] [ebp-44h] BYREF
  float v39; // [esp+524h] [ebp-40h]
  float v40; // [esp+528h] [ebp-3Ch]
  float v41; // [esp+52Ch] [ebp-38h] BYREF
  float v42; // [esp+530h] [ebp-34h]
  float v43; // [esp+534h] [ebp-30h]
  float v44; // [esp+538h] [ebp-2Ch] BYREF
  float v45; // [esp+53Ch] [ebp-28h]
  float v46; // [esp+540h] [ebp-24h]
  float v47; // [esp+544h] [ebp-20h] BYREF
  float v48; // [esp+548h] [ebp-1Ch]
  float v49; // [esp+54Ch] [ebp-18h]
  int v50; // [esp+550h] [ebp-14h]
  int v51; // [esp+554h] [ebp-10h]
  int v52; // [esp+558h] [ebp-Ch]
  float v53; // [esp+55Ch] [ebp-8h]
  char v54; // [esp+563h] [ebp-1h]
  int savedregs; // [esp+564h] [ebp+0h] BYREF

  v3 = 0.0;
  if ( 0.0 == *(float *)(this + 812) || (v4 = *(float *)(this + 812) - a2, *(float *)(this + 812) = v4, v4 > 0.0) )
  {
    v5 = *(float *)(this + 828) * 0.015625;
    *(float *)&v52 = v5;
    if ( *(float *)(this + 844) != *(float *)(this + 828) )
    {
      *(float *)(this + 844) = *(float *)(this + 828);
      v6 = *(_DWORD *)(this + 800);
      if ( v6 == -1
        || (v7 = &off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 1],
            off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 2] != v6 >> 12) )
      {
        v8 = 0;
      }
      else
      {
        v8 = *v7;
      }
      v28 = v5;
      (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v8 + 724))(v8, LODWORD(v28), 0.5);
      v3 = 0.0;
    }
    v9 = v3 < *(float *)(this + 848);
    v10 = *(float *)(this + 840);
    if ( v9 )
      v10 = v10 / *(float *)(this + 848);
    v29 = v10 * (*(float *)(dword_106B06C4 + 44) * a2);
    sub_1013FE10(this, v29, 1);
    v53 = *(float *)(this + 828) * *(float *)&v52;
    sub_1013E990((float *)this, &v47, &v44);
    v12 = *(_DWORD *)(this + 252) >> 11;
    v38 = v47 * 0.5;
    v39 = v48 * 0.5;
    v40 = v49 * 0.5;
    v41 = v44 * 0.5;
    v42 = v45 * 0.5;
    v43 = 0.5 * v46;
    if ( (v12 & 1) != 0 )
      sub_100DAE60(v11);
    v13 = *(_DWORD *)(this + 252) >> 11;
    v47 = *(float *)(this + 580) + v47;
    v48 = *(float *)(this + 584) + v48;
    v49 = *(float *)(this + 588) + v49;
    if ( (v13 & 1) != 0 )
      sub_100DAE60(this);
    v14 = *(_DWORD *)(this + 252) >> 11;
    v44 = *(float *)(this + 580) + v44;
    v45 = *(float *)(this + 584) + v45;
    v46 = *(float *)(this + 588) + v46;
    if ( (v14 & 1) != 0 )
      sub_100DAE60(this);
    v15 = *(_DWORD *)(this + 252) >> 11;
    v38 = *(float *)(this + 580) + v38;
    v39 = *(float *)(this + 584) + v39;
    v40 = *(float *)(this + 588) + v40;
    if ( (v15 & 1) != 0 )
      sub_100DAE60(this);
    v41 = *(float *)(this + 580) + v41;
    v42 = *(float *)(this + 584) + v42;
    v43 = *(float *)(this + 588) + v43;
    sub_1025F990(v30, 256, 0);
    v16 = sub_1025F9C0(&v47, &v44, v35);
    v17 = *(float *)(dword_106B31C8 + 12) < (double)*(float *)(this + 816);
    v37 = v16;
    v51 = 0;
    v54 = 0;
    *(float *)&v52 = 0.0;
    if ( !v17 )
    {
      *(float *)(this + 816) = *(float *)(dword_106B070C + 44) + *(float *)(dword_106B31C8 + 12);
      v52 = (int)((*(float *)(dword_106B0634 + 44) * v53 * *(float *)(this + 836) + *(float *)(dword_106B067C + 44))
                * *(float *)(dword_106B070C + 44));
      if ( *(float *)&v52 != 0.0 )
        v54 = 1;
    }
    v18 = 0;
    v19 = *(_DWORD *)(this + 808) != 0 ? 0x1000000 : 8;
    v50 = 0;
    if ( v16 > 0 )
    {
      do
      {
        v20 = v30[v18];
        if ( v20 != this )
        {
          if ( *(char **)(v20 + 92) == "env_fire" || sub_100D6240((_DWORD *)v20, "env_fire") )
          {
            v21 = v51;
            if ( (unsigned int)v51 < 0x10 )
            {
              v30[v51 + 276] = v20;
              v51 = v21 + 1;
            }
          }
          else if ( *(_BYTE *)(v20 + 225) )
          {
            if ( v54 )
            {
              if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v20 + 320))(v20)
                || (sub_10111910((_BYTE *)(v20 + 320), (float *)(v20 + 328), (float *)(v20 + 340), v36, v34),
                    sub_101133F0(v36, v34, &v38, &v41)) )
              {
                v26 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v20 + 576))(v20);
                v22 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 576))(this);
                sub_1002A5F0((int)&savedregs, this, v22, v26, 16387, v20, 0, (int)v31);
                if ( 1.0 == v32 && !v33 )
                {
                  v27 = (float)v52;
                  v23 = (_DWORD *)sub_10248110(this, this, v27, v19, 0);
                  sub_100D9E70((int *)v20, this, v23);
                }
              }
            }
          }
          else
          {
            v30[v50] = 0;
          }
        }
        v18 = v50 + 1;
        v50 = v18;
      }
      while ( v18 < v37 );
      v24 = v51;
      if ( v51 > 0 )
      {
        v25 = 0;
        v53 = *(float *)(dword_106B05A4 + 44) * a2 * v53 / (double)v51;
        do
          sub_1013FE10(v30[v25++ + 276], v53, 0);
        while ( v25 < v24 );
      }
    }
  }
  else
  {
    sub_1013F950((int *)this, 1.0);
  }
}
