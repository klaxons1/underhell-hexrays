int __thiscall sub_100AB940(int this, int a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // ebx
  int v6; // eax
  float *v7; // edi
  double v8; // st4
  double v9; // st6
  double v10; // st4
  double v11; // st5
  double v12; // st6
  int i; // edi
  unsigned int v15; // eax
  int v16; // edx
  float v17; // [esp+Ch] [ebp-8h]
  int v18; // [esp+10h] [ebp-4h]
  int v19; // [esp+1Ch] [ebp+8h]

  v3 = 0;
  v18 = 0;
  if ( *(float *)(dword_106B31C8 + 12) - *(float *)(this + 96) <= 0.15000001 )
  {
    for ( i = *(_DWORD *)(this + 36) - 1; i >= 0; --i )
    {
      v15 = *(_DWORD *)(*(_DWORD *)(this + 24) + 4 * i);
      if ( v15 == -1
        || off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)(this + 24) + 4 * i) & 0xFFF) + 2] != v15 >> 12
        || !off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)(this + 24) + 4 * i) & 0xFFF) + 1] )
      {
        v16 = *(_DWORD *)(this + 36);
        if ( v16 > 0 )
        {
          *(_DWORD *)(*(_DWORD *)(this + 24) + 4 * i) = *(_DWORD *)(*(_DWORD *)(this + 24) + 4 * v16 - 4);
          --*(_DWORD *)(this + 36);
        }
      }
    }
    return *(_DWORD *)(this + 36);
  }
  else
  {
    v4 = *(_DWORD *)(this + 4);
    *(float *)(this + 96) = *(float *)(dword_106B31C8 + 12);
    *(_DWORD *)(v4 + 208) = 0;
    v5 = *(_DWORD *)(this + 4);
    v17 = (float)(a2 * a2);
    if ( (*(_DWORD *)(v5 + 252) & 0x800) != 0 )
      sub_100DAE60(v5);
    v19 = 1;
    if ( *(int *)(dword_106B31C8 + 20) >= 1 )
    {
      do
      {
        v6 = sub_1025FB50(v19);
        v7 = (float *)v6;
        if ( v6 )
        {
          if ( (*(_DWORD *)(v6 + 252) & 0x800) != 0 )
            sub_100DAE60(v6);
          v8 = *(float *)(v5 + 584) - v7[146];
          v9 = v8 * v8;
          v10 = *(float *)(v5 + 580) - v7[145];
          v11 = v9;
          v12 = *(float *)(v5 + 588) - v7[147];
          if ( v10 * v10 + v11 + v12 * v12 < v17
            && !sub_100AB3A0((_DWORD *)this, (int)v7)
            && sub_100AB070((_DWORD *)this, (int)v7)
            && sub_100AAC30((_DWORD **)this, (int)v7) )
          {
            if ( sub_100AAC80((_DWORD **)this, (int)v7) )
              ++v18;
          }
        }
        ++v19;
      }
      while ( v19 <= *(_DWORD *)(dword_106B31C8 + 20) );
      v3 = v18;
    }
    sub_100AB8B0((_DWORD *)this, v3, (_DWORD *)(this + 24));
    return v3;
  }
}
