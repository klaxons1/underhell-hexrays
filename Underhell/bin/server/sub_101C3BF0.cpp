void __thiscall sub_101C3BF0(int this, float a2)
{
  float *v2; // eax
  int v4; // ebx
  double v5; // st7
  int v6; // edi
  unsigned int v7; // eax
  unsigned int v8; // ecx
  int *v9; // eax
  unsigned int v10; // ecx
  int v11; // eax
  int v12; // ecx
  unsigned int v13; // eax
  int v14; // eax
  float v15; // [esp+14h] [ebp-8h]
  float v16; // [esp+18h] [ebp-4h]

  v2 = (float *)off_10638654;
  v4 = *(_DWORD *)(this + 548);
  *((_DWORD *)off_10638654 + 9) = 0;
  v2[4] = 0.0;
  v2[13] = *(float *)(this + 716);
  v2[14] = *(float *)(this + 720);
  v2[15] = *(float *)(this + 724);
  v2[16] = *(float *)(this + 728);
  v2[17] = *(float *)(this + 732);
  v2[18] = *(float *)(this + 736);
  v2[19] = *(float *)(this + 564);
  v5 = a2;
  if ( a2 <= 0.0 )
    goto LABEL_33;
  if ( *(float *)(this + 488) == flt_106F1CB4
    && *(float *)(this + 492) == flt_106F1CB8
    && *(float *)(this + 496) == flt_106F1CBC )
  {
    v6 = sub_101C3AD0((float *)this, v4, a2);
  }
  else if ( *(float *)(this + 592) == flt_106F1CA8
         && *(float *)(this + 596) == flt_106F1CAC
         && *(float *)(this + 600) == flt_106F1CB0 )
  {
    v6 = sub_101C3B60((float *)this, a2);
  }
  else
  {
    v16 = *(float *)(this + 564);
    v6 = sub_101C3B60((float *)this, a2);
    if ( v6 )
      goto LABEL_14;
    v15 = *(float *)(this + 564);
    *(float *)(this + 564) = v16;
    v6 = sub_101C3AD0((float *)this, v4, a2);
    if ( v15 > (double)*(float *)(this + 564) )
      *(float *)(this + 564) = v15;
  }
  if ( !v6 )
  {
    *(_DWORD *)(this + 548) = -1;
    goto LABEL_16;
  }
LABEL_14:
  *(_DWORD *)(this + 548) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 8))(v6);
LABEL_16:
  if ( *(_DWORD *)(this + 548) != v4 )
  {
    if ( v4 != -1 )
      (*(void (__thiscall **)(int))(*(_DWORD *)this + 396))(this);
    v7 = *(_DWORD *)(this + 548);
    if ( v7 != -1
      && off_1061BE18[4 * (*(_DWORD *)(this + 548) & 0xFFF) + 2] == v7 >> 12
      && off_1061BE18[4 * (*(_DWORD *)(this + 548) & 0xFFF) + 1] )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 388))(this, v6);
    }
  }
  v8 = *(_DWORD *)(this + 548);
  if ( v8 != -1 )
  {
    v9 = &off_1061BE18[4 * (*(_DWORD *)(this + 548) & 0xFFF) + 1];
    v10 = v8 >> 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 548) & 0xFFF) + 2] == v10 )
    {
      if ( *v9 )
      {
        if ( off_1061BE18[4 * (*(_DWORD *)(this + 548) & 0xFFF) + 2] == v10 )
          v11 = *v9;
        else
          v11 = 0;
        (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 392))(this, v11);
      }
    }
  }
  v12 = *(_DWORD *)(this + 424);
  if ( v12 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 96))(v12);
  v5 = a2;
LABEL_33:
  if ( *(_DWORD *)(this + 424) )
  {
    if ( v5 > 0.0 )
    {
      v13 = *(_DWORD *)(this + 548);
      if ( (v13 == -1
         || off_1061BE18[4 * (*(_DWORD *)(this + 548) & 0xFFF) + 2] != v13 >> 12
         || !off_1061BE18[4 * (*(_DWORD *)(this + 548) & 0xFFF) + 1])
        && (*(int (__thiscall **)(int))(*(_DWORD *)(this + 320) + 44))(this + 320) == 6
        && *((int *)off_10638654 + 9) > 0 )
      {
        v14 = sub_101C4730(5);
        if ( v14 )
          sub_101C1C30((int)off_10638654, v14);
      }
    }
  }
  else if ( *(float *)(this + 564) >= (double)*(float *)(this + 572) && *(float *)(this + 572) > 0.0 )
  {
    sub_100D8290((float *)this, -1.0);
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 192))(this);
  }
}
