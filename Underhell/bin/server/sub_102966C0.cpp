int __thiscall sub_102966C0(int this)
{
  int v2; // ebx
  unsigned int v3; // eax
  int *v4; // edi
  unsigned int v5; // eax
  int v6; // ecx
  unsigned int v7; // eax
  int v8; // edi
  int v9; // edi
  int v10; // eax
  int v11; // eax
  unsigned int v13; // eax
  int *v14; // ecx
  unsigned int v15; // eax
  int v16; // ecx
  int v17; // edi
  int v18; // eax
  float v19; // [esp+8h] [ebp-60h]
  int v20[19]; // [esp+1Ch] [ebp-4Ch] BYREF

  v2 = *(_DWORD *)(this + 4);
  v3 = *(_DWORD *)(v2 + 2888);
  if ( v3 != -1 )
  {
    v4 = off_1061BE18;
    if ( off_1061BE18[4 * (*(_DWORD *)(v2 + 2888) & 0xFFF) + 2] == v3 >> 12 )
    {
      if ( off_1061BE18[4 * (*(_DWORD *)(v2 + 2888) & 0xFFF) + 1] )
      {
        v5 = *(_DWORD *)(v2 + 2888);
        if ( v5 == -1 || off_1061BE18[4 * (*(_DWORD *)(v2 + 2888) & 0xFFF) + 2] != v5 >> 12 )
          v6 = 0;
        else
          v6 = off_1061BE18[4 * (*(_DWORD *)(v2 + 2888) & 0xFFF) + 1];
        if ( *(_WORD *)(v6 + 816) == 903 )
        {
          if ( (*(_DWORD *)(v2 + 252) & 0x800) != 0 )
          {
            sub_100DAE60(v2);
            v4 = off_1061BE18;
          }
          v7 = *(_DWORD *)(*(_DWORD *)(this + 4) + 2888);
          if ( v7 == -1 || v4[4 * (*(_DWORD *)(*(_DWORD *)(this + 4) + 2888) & 0xFFF) + 2] != v7 >> 12 )
            v8 = 0;
          else
            v8 = v4[4 * (*(_DWORD *)(*(_DWORD *)(this + 4) + 2888) & 0xFFF) + 1];
          if ( (*(_DWORD *)(v8 + 252) & 0x800) != 0 )
            sub_100DAE60(v8);
          if ( fabs(*(float *)(v8 + 584) - *(float *)(v2 + 584))
             + fabs(*(float *)(v8 + 580) - *(float *)(v2 + 580))
             + fabs(*(float *)(v8 + 588) - *(float *)(v2 + 588)) < 64.0 )
          {
            v9 = *(_DWORD *)(this + 4);
            if ( (*(_BYTE *)(v9 + 252) & 1) == 0 )
            {
              v10 = sub_10019B00(*(_DWORD **)(this + 4));
              if ( v10 )
              {
                (*(void (__thiscall **)(int, int))(*(_DWORD *)v10 + 224))(v10, v9);
                (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 4) + 76))(*(_DWORD *)(this + 4), 0);
              }
              sub_100EC3F0(*(_DWORD **)(this + 4), (int)sub_10246D70, 0.0, 0);
              v19 = *(float *)(dword_106B31C8 + 12) + 0.1;
              sub_100EC4A0(*(int **)(this + 4), v19, 0);
              if ( sub_1026A890((unsigned int *)(this + 60)) )
              {
                v11 = sub_1026A890((unsigned int *)(this + 60));
                (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v11 + 760))(v11, *(_DWORD *)(this + 4));
                return 1;
              }
            }
            return 1;
          }
          return 100003;
        }
        v13 = *(_DWORD *)(v2 + 2888);
        if ( v13 == -1 || off_1061BE18[4 * (*(_DWORD *)(v2 + 2888) & 0xFFF) + 2] != v13 >> 12 )
          v14 = 0;
        else
          v14 = (int *)off_1061BE18[4 * (*(_DWORD *)(v2 + 2888) & 0xFFF) + 1];
        sub_10071D00(v14, v2);
        v15 = *(_DWORD *)(*(_DWORD *)(this + 4) + 2888);
        if ( v15 == -1 || off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)(this + 4) + 2888) & 0xFFF) + 2] != v15 >> 12 )
          v16 = 0;
        else
          v16 = off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)(this + 4) + 2888) & 0xFFF) + 1];
        sub_10070510(v16, 0.0);
        sub_100448D0(*(_DWORD **)(this + 4), 0);
      }
    }
  }
  sub_10072560(v20);
  sub_10070FE0(v20, 903);
  sub_1042C170(28);
  v17 = *(_DWORD *)(this + 4);
  if ( (*(_DWORD *)(v17 + 252) & 0x800) != 0 )
    sub_100DAE60(*(_DWORD *)(this + 4));
  v18 = sub_10072880(*(float **)(this + 4), (float *)(v17 + 580), v20);
  if ( v18 )
  {
    sub_100448D0(*(_DWORD **)(this + 4), v18);
    sub_100725D0(v20);
    return 100003;
  }
  sub_100725D0(v20);
  return 1;
}
