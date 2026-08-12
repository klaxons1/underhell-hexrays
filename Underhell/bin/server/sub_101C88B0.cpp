void __thiscall sub_101C88B0(int this)
{
  int v2; // edi
  int v3; // ebx
  unsigned int v4; // eax
  _DWORD *v5; // eax
  unsigned int v6; // eax
  int *v7; // edx
  unsigned int v8; // eax
  int v9; // edi
  float v10; // edx
  float v11; // eax
  double v12; // st7
  double v13; // st6
  double v14; // st5
  double v15; // st4
  double v16; // st7
  double v17; // st7
  int v18; // edi
  float v19[13]; // [esp+10h] [ebp-6Ch] BYREF
  char v20; // [esp+46h] [ebp-36h]
  int v21[3]; // [esp+64h] [ebp-18h] BYREF
  float v22; // [esp+70h] [ebp-Ch] BYREF
  float v23; // [esp+74h] [ebp-8h]
  float v24; // [esp+78h] [ebp-4h]

  sub_101C6E40(this);
  if ( (*(_DWORD *)(this + 252) & 0x400000) != 0 )
    goto LABEL_7;
  if ( !sub_101C8780(this, -1, (void (__thiscall *)(_DWORD *))sub_103D79E0) )
    return;
  v2 = 0;
  if ( *(int *)(this + 156) <= 0 )
  {
LABEL_7:
    if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
      sub_100DAFD0(this);
    if ( *(float *)(this + 484) > 0.0
      || (v4 = *(_DWORD *)(this + 452), v4 == -1)
      || off_1061BE18[4 * (*(_DWORD *)(this + 452) & 0xFFF) + 2] != v4 >> 12
      || !off_1061BE18[4 * (*(_DWORD *)(this + 452) & 0xFFF) + 1]
      || (v5 = (_DWORD *)sub_101C5260((_DWORD *)this), !sub_100E9830(v5)) )
    {
      v6 = *(_DWORD *)(this + 452);
      if ( v6 != -1 )
      {
        v7 = &off_1061BE18[4 * (*(_DWORD *)(this + 452) & 0xFFF) + 1];
        v8 = v6 >> 12;
        if ( off_1061BE18[4 * (*(_DWORD *)(this + 452) & 0xFFF) + 2] == v8 )
        {
          if ( *v7 )
          {
            if ( off_1061BE18[4 * (*(_DWORD *)(this + 452) & 0xFFF) + 2] == v8 )
              v9 = *v7;
            else
              v9 = 0;
            sub_101C5310((unsigned int *)(this + 452), 0);
            if ( v9 )
            {
              sub_101C5DE0(this, v9);
            }
            else
            {
              sub_101C5DE0(this, 0);
              sub_101C4DF0(0, (int *)this);
            }
            sub_100EA9A0((int *)this, 1);
          }
        }
      }
    }
    if ( (*(_BYTE *)(this + 256) & 1) == 0 )
      goto LABEL_29;
    if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
      sub_100DAFD0(this);
    if ( !sub_10018D70((float *)(this + 476), &flt_106F1CA8)
      || (sub_100D7260((float *)this, &flt_106F1CB4), !sub_10018D70((float *)(this + 464), &flt_106F1CA8)) )
    {
LABEL_29:
      sub_101C4870(this);
      if ( *(_BYTE *)(this + 306) != 5 || (*(_DWORD *)(this + 256) & 0x400) != 0 )
      {
        if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
          sub_100DAFD0(this);
        v10 = *(float *)(this + 480);
        v11 = *(float *)(this + 484);
        v22 = *(float *)(this + 476);
        v12 = v22 + *(float *)(this + 464);
        v13 = *(float *)(this + 468);
        v23 = v10;
        v24 = v11;
        v14 = *(float *)(this + 472) + v11;
        v15 = v12 * *(float *)(dword_106B31C8 + 16);
        v16 = *(float *)(dword_106B31C8 + 16);
        *(float *)v21 = v15;
        *(float *)&v21[1] = (v13 + v10) * v16;
        *(float *)&v21[2] = v16 * v14;
        sub_101C4870(this);
      }
      else
      {
        sub_101C6F70(this, (float *)v21);
      }
      v17 = *(float *)(dword_106B31C8 + 16);
      v22 = *(float *)(this + 488) * v17 + *(float *)(this + 728);
      v23 = *(float *)(this + 492) * v17 + *(float *)(this + 732);
      v24 = v17 * *(float *)(this + 496) + *(float *)(this + 736);
      sub_100E11A0(this, &v22);
      sub_101C2090(this, (float *)v21, v19);
      v18 = *(_DWORD *)(this + 424);
      if ( v18 )
      {
        if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
          sub_100DAE60(this);
        (*(void (__thiscall **)(int, int, float *, int, _DWORD))(*(_DWORD *)v18 + 272))(
          v18,
          this + 580,
          &flt_106F1CB4,
          1,
          *(float *)(dword_106B31C8 + 16));
      }
      sub_101C4870(this);
      if ( v20 )
      {
        sub_100DD660(this, &flt_106F1CA8);
        sub_100D7260((float *)this, &flt_106F1CB4);
      }
      else if ( (**(_DWORD **)(this + 24) & 2) == 0 )
      {
        if ( 1.0 != v19[11] )
          sub_101C7E80((_BYTE *)this, v19, (float *)v21);
        sub_101C7080(this);
      }
    }
  }
  else
  {
    v3 = 0;
    while ( sub_101C8780(this, v2, *(void (__thiscall **)(_DWORD *))(*(_DWORD *)(this + 144) + v3)) )
    {
      ++v2;
      v3 += 16;
      if ( v2 >= *(_DWORD *)(this + 156) )
        goto LABEL_7;
    }
  }
}
