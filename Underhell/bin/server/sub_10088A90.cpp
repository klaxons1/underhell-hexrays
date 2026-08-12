void __thiscall sub_10088A90(_DWORD *this, int a2, int a3)
{
  int v3; // edi
  bool v4; // zf
  int v5; // ecx
  int v6; // eax
  int v7; // ebx
  int v8; // esi
  int v9; // edx
  int v10; // esi
  _DWORD *v11; // eax
  double v12; // st7
  char *v13; // eax
  int v14; // eax
  _DWORD *v15; // edx
  double v16; // st4
  double v17; // st6
  double v18; // st4
  double v19; // st5
  double v20; // st6
  double v21; // st7
  bool v22; // c0
  bool v23; // c3
  double v24; // [esp+10h] [ebp-1BCh]
  char Buffer[256]; // [esp+24h] [ebp-1A8h] BYREF
  _BYTE v26[44]; // [esp+124h] [ebp-A8h] BYREF
  float v27; // [esp+150h] [ebp-7Ch]
  char v28; // [esp+15Bh] [ebp-71h]
  int v29; // [esp+170h] [ebp-5Ch]
  float v30[3]; // [esp+178h] [ebp-54h] BYREF
  float v31[3]; // [esp+184h] [ebp-48h] BYREF
  float v32[3]; // [esp+190h] [ebp-3Ch] BYREF
  float v33[4]; // [esp+19Ch] [ebp-30h] BYREF
  float v34; // [esp+1ACh] [ebp-20h] BYREF
  float v35; // [esp+1B0h] [ebp-1Ch]
  float v36; // [esp+1B4h] [ebp-18h]
  float v37; // [esp+1B8h] [ebp-14h] BYREF
  float v38; // [esp+1BCh] [ebp-10h]
  float v39; // [esp+1C0h] [ebp-Ch]
  _DWORD *v40; // [esp+1C4h] [ebp-8h]
  int v41; // [esp+1C8h] [ebp-4h]
  int savedregs; // [esp+1CCh] [ebp+0h] BYREF

  v3 = a3;
  v4 = *(_DWORD *)(a3 + 60) == 1;
  v40 = this;
  if ( !v4 )
  {
    sub_1008D160(&v37, 1);
    v5 = a2;
    v6 = *(_DWORD *)(a2 + 4);
    v7 = 0;
    v41 = 0;
    if ( v6 > 0 )
    {
      while ( 1 )
      {
        if ( v7 < 0 || v7 >= v6 )
        {
          ++dword_10691DE0;
          v8 = 0;
        }
        else
        {
          v8 = *(_DWORD *)(*(_DWORD *)(v5 + 8) + 4 * v7);
        }
        if ( *(_DWORD *)v3 == dword_10608F94 && v7 == dword_10608F98
          || *(_DWORD *)v3 == dword_10608F98 && v7 == dword_10608F94 )
        {
          DevMsg(String);
        }
        v9 = *(_DWORD *)v3;
        if ( *(_DWORD *)v3 == v7 )
          break;
        if ( *(float *)(v8 + 4) == *(float *)(v3 + 4)
          && *(float *)(v8 + 8) == *(float *)(v3 + 8)
          && *(float *)(v8 + 12) == *(float *)(v3 + 12)
          && *(_DWORD *)(v8 + 60) != 4 )
        {
          v24 = *(float *)(v8 + 12);
          v12 = *(float *)(v8 + 8);
          *(_DWORD *)(v8 + 60) = 1;
          v13 = sub_1001E280(Buffer, "(%f, %f, %f)", *(float *)(v8 + 4), v12, v24);
          DevMsg(2, "Probable duplicate node placed at %s\n", v13);
        }
        else if ( *(_DWORD *)(v8 + 60) != 1 )
        {
          if ( ((1 << (*(_BYTE *)v8 & 0x1F)) & *(_DWORD *)(v40[7] + 4 * (*(int *)v8 >> 5))) != 0 )
          {
            v14 = *(_DWORD *)v8;
            v7 = v41;
            v3 = a3;
            if ( ((1 << (v9 & 0x1F)) & *(_DWORD *)(*(_DWORD *)(*v40 + 12 * *(_DWORD *)v8 + 8) + 4 * (v9 >> 5))) != 0 )
            {
              v15 = (_DWORD *)(*(_DWORD *)(*v40 + 12 * v9 + 8) + 4 * (v14 >> 5));
              *v15 |= 1 << (v14 & 0x1F);
            }
            goto LABEL_40;
          }
          v3 = a3;
          v16 = *(float *)(v8 + 8) - *(float *)(a3 + 8);
          v17 = v16 * v16;
          v18 = *(float *)(v8 + 4) - *(float *)(a3 + 4);
          v19 = v17;
          v20 = *(float *)(v8 + 12) - *(float *)(a3 + 12);
          v21 = v18 * v18 + v19 + v20 * v20;
          if ( *(_DWORD *)(v8 + 60) == 3 )
          {
            v22 = v21 < 2073600.0;
            v23 = v21 == 2073600.0;
          }
          else
          {
            v22 = v21 < 518400.0;
            v23 = v21 == 518400.0;
          }
          v7 = v41;
          if ( !v22 && !v23 )
            goto LABEL_40;
          if ( v41 < 0 || v41 >= *(_DWORD *)(a2 + 4) )
            ++dword_10691DE0;
          sub_1008D160(&v34, 1);
          v29 = 0;
          sub_1002A5F0((int)&savedregs, v8, &v37, &v34, 131083, 0, 0, (int)v26);
          if ( v28 || 1.0 != v27 )
          {
            v33[0] = v34;
            v33[1] = v35;
            v33[2] = v36 + 70.0;
            v31[0] = v37;
            v31[1] = v38;
            v31[2] = v39 + 70.0;
            sub_1002A5F0((int)&savedregs, v8, v31, v33, 131083, 0, 0, (int)v26);
            if ( v28 || 1.0 != v27 )
            {
              v30[0] = v37;
              v30[1] = v38;
              v30[2] = v39 + 70.0;
              sub_1002A5F0((int)&savedregs, v8, v30, &v34, 131083, 0, 0, (int)v26);
              if ( v28 || 1.0 != v27 )
              {
                v32[0] = v34;
                v32[1] = v35;
                v32[2] = v36 + 70.0;
                sub_1002A5F0((int)&savedregs, v8, &v37, v32, 131083, 0, 0, (int)v26);
                if ( v28 || 1.0 != v27 )
                  goto LABEL_40;
              }
            }
          }
          v10 = *(_DWORD *)v8;
          v11 = (_DWORD *)(*(_DWORD *)(*v40 + 12 * *(_DWORD *)a3 + 8) + 4 * (v10 >> 5));
          goto LABEL_39;
        }
LABEL_40:
        v5 = a2;
        v6 = *(_DWORD *)(a2 + 4);
        v41 = ++v7;
        if ( v7 >= v6 )
          return;
      }
      v10 = *(_DWORD *)v8;
      v11 = (_DWORD *)(*(_DWORD *)(*v40 + 12 * v9 + 8) + 4 * (v10 >> 5));
LABEL_39:
      *v11 |= 1 << (v10 & 0x1F);
      goto LABEL_40;
    }
  }
}
