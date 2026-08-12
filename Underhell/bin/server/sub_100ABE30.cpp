int __thiscall sub_100ABE30(int this, int a2)
{
  int v3; // esi
  int v4; // eax
  int v5; // ecx
  double v6; // st7
  int v7; // ebx
  int v8; // esi
  double v9; // st4
  double v10; // st6
  double v11; // st4
  double v12; // st5
  double v13; // st6
  unsigned int v14; // eax
  int i; // esi
  unsigned int v17; // eax
  int v18; // edx
  float v19; // [esp+Ch] [ebp-8h]
  int v20; // [esp+10h] [ebp-4h]
  float *v21; // [esp+1Ch] [ebp+8h]

  v3 = 0;
  v20 = 0;
  if ( *(float *)(dword_106B31C8 + 12) - *(float *)(this + 104) <= 0.44999999 )
  {
    for ( i = *(_DWORD *)(this + 76) - 1; i >= 0; --i )
    {
      v17 = *(_DWORD *)(*(_DWORD *)(this + 64) + 4 * i);
      if ( v17 == -1
        || off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)(this + 64) + 4 * i) & 0xFFF) + 2] != v17 >> 12
        || !off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)(this + 64) + 4 * i) & 0xFFF) + 1] )
      {
        v18 = *(_DWORD *)(this + 76);
        if ( v18 > 0 )
        {
          *(_DWORD *)(*(_DWORD *)(this + 64) + 4 * i) = *(_DWORD *)(*(_DWORD *)(this + 64) + 4 * v18 - 4);
          --*(_DWORD *)(this + 76);
        }
      }
    }
    return *(_DWORD *)(this + 76);
  }
  else
  {
    v4 = *(_DWORD *)(this + 4);
    *(float *)(this + 104) = *(float *)(dword_106B31C8 + 12);
    *(_DWORD *)(v4 + 208) = 0;
    v5 = *(_DWORD *)(this + 4);
    v6 = (double)(a2 * a2);
    v21 = *(float **)(this + 4);
    if ( (*(_DWORD *)(v5 + 252) & 0x800) != 0 )
      sub_100DAE60(v5);
    if ( dword_1060AFC4 )
    {
      v7 = 1;
      if ( *(_DWORD *)dword_1060AFB8 == -1
        || off_1061BE18[4 * (*(_DWORD *)dword_1060AFB8 & 0xFFF) + 2] != *(_DWORD *)dword_1060AFB8 >> 12 )
      {
        v8 = 0;
      }
      else
      {
        v8 = off_1061BE18[4 * (*(_DWORD *)dword_1060AFB8 & 0xFFF) + 1];
      }
      while ( v8 )
      {
        if ( (*(_DWORD *)(v8 + 256) & 0x2000000) != 0 )
        {
          if ( (*(_DWORD *)(v8 + 252) & 0x800) != 0 )
            sub_100DAE60(v8);
          v9 = v21[146] - *(float *)(v8 + 584);
          v10 = v9 * v9;
          v11 = v21[145] - *(float *)(v8 + 580);
          v12 = v10;
          v13 = v21[147] - *(float *)(v8 + 588);
          v19 = v6;
          if ( v11 * v11 + v12 + v13 * v13 < v19
            && !sub_100AB3A0((_DWORD *)this, v8)
            && sub_100AB070((_DWORD *)this, v8)
            && (*(unsigned __int8 (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4) + 876))(
                 *(_DWORD *)(this + 4),
                 v8)
            && (*(unsigned __int8 (__thiscall **)(_DWORD, int, int, _DWORD))(**(_DWORD **)(this + 4) + 548))(
                 *(_DWORD *)(this + 4),
                 v8,
                 16449,
                 0) )
          {
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4) + 1444))(*(_DWORD *)(this + 4), v8);
            ++v20;
            *(_DWORD *)(v8 + 208) = *(_DWORD *)(*(_DWORD *)(this + 4) + 208);
            *(_DWORD *)(*(_DWORD *)(this + 4) + 208) = v8;
          }
        }
        if ( !v7 || v7 >= dword_1060AFC4 )
          break;
        v14 = *(_DWORD *)(dword_1060AFB8 + 4 * v7++);
        if ( v14 == -1 || off_1061BE18[4 * (v14 & 0xFFF) + 2] != v14 >> 12 )
          v8 = 0;
        else
          v8 = off_1061BE18[4 * (v14 & 0xFFF) + 1];
      }
      v3 = v20;
    }
    sub_100AB8B0((_DWORD *)this, v3, (_DWORD *)(this + 64));
    return v3;
  }
}
