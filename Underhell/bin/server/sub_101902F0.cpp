void __thiscall sub_101902F0(int *this)
{
  int *v1; // ebx
  double v2; // st7
  int v3; // ecx
  double v4; // st6
  double v5; // st5
  int v6; // esi
  int *v7; // edi
  int v8; // eax
  int v9; // ecx
  double v10; // st7
  int v11; // edx
  int v12; // esi
  int v13; // edi
  double v14; // rt0
  double v15; // st6
  double v16; // st7
  double v17; // rt1
  double v18; // rt2
  double v19; // rt0
  double v20; // st5
  double v21; // st6
  double v22; // rt1
  double v23; // st5
  double v24; // st6
  double v25; // st6
  double v26; // rt2
  double v27; // st5
  double v28; // st6
  double v29; // rtt
  double v30; // st5
  double v31; // st6
  int v32; // edi
  _DWORD *v33; // ecx
  int v34; // esi
  int *v35; // edi
  int v36; // eax
  int v37; // ecx
  int v38; // ebx
  int v39; // edx
  int v40; // ecx
  int v41; // edx
  int v42; // ebx
  int v43; // edi
  bool v44; // zf
  int *v45; // edi
  int v46; // [esp+4h] [ebp-30h]
  int v47; // [esp+8h] [ebp-2Ch]
  int v48; // [esp+Ch] [ebp-28h]
  int v49; // [esp+10h] [ebp-24h]
  float v50; // [esp+14h] [ebp-20h] BYREF
  float v51; // [esp+18h] [ebp-1Ch]
  float v52; // [esp+1Ch] [ebp-18h]
  int v53; // [esp+20h] [ebp-14h]
  int v54; // [esp+24h] [ebp-10h]
  int v55; // [esp+28h] [ebp-Ch]
  int *v56; // [esp+2Ch] [ebp-8h]
  char v57; // [esp+33h] [ebp-1h]
  int savedregs; // [esp+34h] [ebp+0h] BYREF

  v1 = this;
  v56 = this;
  sub_1018EF00(this + 21);
  if ( (v1[10] & 2) == 0 && (v1[10] & 0x200) == 0 )
  {
    v2 = 20.0;
    v3 = 0;
    v46 = 0;
    v47 = 0;
    v48 = 0;
    v49 = 0;
    v55 = 0;
    do
    {
      v4 = 999999.88;
      v51 = 999999.88;
      v5 = -999999.88;
      v52 = -999999.88;
      if ( !v3 || (v57 = 0, v3 == 2) )
        v57 = 1;
      v6 = v1[9 * v3 + 134];
      v7 = &v1[9 * v3];
      if ( v6 != -1 )
      {
        v8 = sub_1018AB40(v3);
        v9 = v7[131];
        v10 = v52;
        v4 = v51;
        v53 = v8;
        v54 = v9;
        do
        {
          v11 = 3 * v6;
          v12 = *(_DWORD *)(v54 + 12 * v6);
          v13 = v54 + 4 * v11;
          if ( sub_1018D060((int *)v12, v1, v53) && (*(_BYTE *)(v12 + 40) & 2) == 0 )
          {
            if ( v57 )
            {
              if ( v4 > *(float *)(v12 + 4) )
                v4 = *(float *)(v12 + 4);
              v14 = v4;
              v15 = v10;
              v16 = v14;
              if ( v15 < *(float *)(v12 + 16) )
                v15 = *(float *)(v12 + 16);
            }
            else
            {
              if ( v4 > *(float *)(v12 + 8) )
                v4 = *(float *)(v12 + 8);
              v17 = v4;
              v15 = v10;
              v16 = v17;
              if ( v15 < *(float *)(v12 + 20) )
                v15 = *(float *)(v12 + 20);
            }
            v18 = v15;
            v4 = v16;
            v10 = v18;
          }
          v6 = *(_DWORD *)(v13 + 8);
        }
        while ( v6 != -1 );
        v3 = v55;
        v5 = v10;
        v2 = 20.0;
      }
      switch ( v3 )
      {
        case 0:
          v19 = v5;
          v20 = v4;
          v21 = v19;
          if ( v20 - *((float *)v1 + 1) >= v2 )
            ++v46;
          if ( *((float *)v1 + 4) - v21 >= v2 )
            ++v47;
          break;
        case 1:
          v26 = v5;
          v27 = v4;
          v28 = v26;
          if ( v27 - *((float *)v1 + 2) >= v2 )
            ++v47;
          v25 = *((float *)v1 + 5) - v28;
          goto LABEL_31;
        case 2:
          v22 = v5;
          v23 = v4;
          v24 = v22;
          if ( v23 - *((float *)v1 + 1) >= v2 )
            ++v49;
          v25 = *((float *)v1 + 4) - v24;
LABEL_31:
          if ( v25 >= v2 )
            ++v48;
          break;
        case 3:
          v29 = v5;
          v30 = v4;
          v31 = v29;
          if ( v30 - *((float *)v1 + 2) >= v2 )
            ++v46;
          if ( *((float *)v1 + 5) - v31 >= v2 )
            ++v49;
          break;
        default:
          break;
      }
      v55 = ++v3;
    }
    while ( v3 < 4 );
    v32 = 0;
    v55 = 0;
    do
    {
      if ( *(&v46 + v32) == 2 )
      {
        sub_1018B510(v32, (float *)v1, &v50);
        if ( !v32 || !sub_1018D4F0(v33, &v50) )
        {
          v34 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B8370 + 4))(dword_106B8370);
          *(float *)(v34 + 4) = v50;
          *(float *)(v34 + 8) = v51;
          *(float *)(v34 + 12) = v52;
          *(_BYTE *)(v34 + 28) |= sub_1018D560((int)&savedregs, v34, &v50) ? 1 : 8;
          v35 = v1 + 21;
          v36 = sub_1018CED0(v1 + 21, 0);
          if ( v36 >= 0 && v36 < v1[22] && v36 <= v1[28] )
          {
            v37 = *v35 + 12 * v36;
            if ( *(_DWORD *)(v37 + 4) != v36 )
            {
              v38 = *(_DWORD *)(v37 + 4);
              if ( v38 == -1 )
                v35[3] = *(_DWORD *)(v37 + 8);
              else
                *(_DWORD *)(*v35 + 12 * v38 + 8) = *(_DWORD *)(v37 + 8);
              v39 = *(_DWORD *)(v37 + 8);
              if ( v39 == -1 )
                v56[25] = *(_DWORD *)(v37 + 4);
              else
                *(_DWORD *)(v56[21] + 12 * v39 + 4) = *(_DWORD *)(v37 + 4);
              v35 = v56 + 21;
              *(_DWORD *)(v37 + 8) = v36;
              *(_DWORD *)(v37 + 4) = v36;
              --v35[6];
            }
          }
          v40 = *v35;
          v41 = 12 * v36;
          *(_DWORD *)(v40 + v41 + 8) = -1;
          v42 = v35[4];
          *(_DWORD *)(v40 + v41 + 4) = v42;
          v35[4] = v36;
          if ( v42 == -1 )
            v35[3] = v36;
          else
            *(_DWORD *)(*v35 + 12 * v42 + 8) = v36;
          ++v35[6];
          v43 = *v35;
          v44 = v41 + v43 == 0;
          v45 = (int *)(v41 + v43);
          v1 = v56;
          if ( !v44 )
            *v45 = v34;
          v32 = v55;
        }
      }
      v55 = ++v32;
    }
    while ( v32 < 4 );
  }
}
