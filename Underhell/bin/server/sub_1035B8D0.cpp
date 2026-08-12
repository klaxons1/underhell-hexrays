void __thiscall sub_1035B8D0(int this, _DWORD *a2)
{
  int v3; // eax
  int v4; // edx
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  _DWORD *v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // edi
  int v12; // eax
  float *v13; // edi
  int v14; // eax
  int v15; // ecx
  int v16; // edi
  unsigned int v17; // eax
  int v18; // ecx
  _DWORD *v19; // eax
  int v20; // eax
  int v21; // ecx
  double v22; // st7
  _DWORD *v23; // eax
  _DWORD *v24; // eax
  float *v25; // eax
  _DWORD *v26; // ecx
  float *v27; // eax
  _DWORD *v28; // ecx
  double v29; // st7
  double v30; // st7
  int v31; // ecx
  __int64 v32; // [esp-8h] [ebp-1064h]
  __int64 v33; // [esp-8h] [ebp-1064h]
  float *v34; // [esp+0h] [ebp-105Ch]
  _DWORD v35[1024]; // [esp+Ch] [ebp-1050h] BYREF
  float v36[3]; // [esp+100Ch] [ebp-50h] BYREF
  float v37[3]; // [esp+1018h] [ebp-44h] BYREF
  float v38[2]; // [esp+1024h] [ebp-38h] BYREF
  unsigned int v39; // [esp+102Ch] [ebp-30h] BYREF
  int v40; // [esp+1030h] [ebp-2Ch]
  float v41; // [esp+1034h] [ebp-28h]
  float v42; // [esp+1038h] [ebp-24h]
  float v43; // [esp+103Ch] [ebp-20h]
  _DWORD v44[2]; // [esp+1040h] [ebp-1Ch] BYREF
  float v45; // [esp+1048h] [ebp-14h]
  float v46; // [esp+104Ch] [ebp-10h]
  float v47; // [esp+1050h] [ebp-Ch]
  float v48; // [esp+1054h] [ebp-8h]
  int v49; // [esp+1058h] [ebp-4h]
  int v50; // [esp+1064h] [ebp+8h]

  switch ( *a2 )
  {
    case 0x81:
      return;
    case 0x97:
      v3 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
      v4 = *(_DWORD *)this;
      if ( v3 )
      {
        v5 = (_DWORD *)(*(int (__thiscall **)(int))(v4 + 368))(this);
        goto LABEL_5;
      }
      (*(void (__thiscall **)(int, int))(v4 + 1312))(this, 11);
      return;
    case 0x98:
      sub_1035AD00((float *)this, (float *)(this + 2852));
      goto LABEL_6;
    case 0x99:
      if ( sub_102DC130((unsigned int *)(this + 3760)) )
      {
        (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 1312))(this, "No object to pickup!");
      }
      else
      {
        v5 = (_DWORD *)sub_1026A890((unsigned int *)(this + 3760));
LABEL_5:
        v34 = (float *)sub_10019640(v5);
        sub_1035AD00((float *)this, v34);
LABEL_6:
        sub_10027CD0(v6, 0);
      }
      return;
    case 0x9A:
      v7 = (_DWORD *)sub_1026A890((unsigned int *)(this + 3756));
      if ( sub_1035AD90(v7) <= 0.0 || !*(_BYTE *)(this + 3789) )
        goto LABEL_16;
      if ( 0.0 == *(float *)(this + 3796) )
      {
        HIDWORD(v33) = this;
        LODWORD(v33) = this;
        sub_1010DD80((_DWORD *)(this + 3828), v33, 0.0);
LABEL_16:
        v8 = sub_1026A890((unsigned int *)(this + 3756));
        sub_103E6680(v8);
        sub_10027CD0((_DWORD *)this, 0);
      }
      else
      {
        *(float *)(this + 3800) = *(float *)(dword_106B31C8 + 12) + *(float *)(this + 3796);
        HIDWORD(v32) = this;
        LODWORD(v32) = this;
        sub_1010DD80((_DWORD *)(this + 3852), v32, 0.0);
      }
      return;
    case 0x9B:
      v9 = sub_1026A890((unsigned int *)(this + 3756));
      if ( (*(_DWORD *)(v9 + 252) & 0x800) != 0 )
        sub_100DAE60(v9);
      v10 = sub_1026A890((unsigned int *)(this + 3756));
      if ( (*(_DWORD *)(v10 + 252) & 0x800) != 0 )
        sub_100DAE60(v10);
      v48 = 0.0;
      v49 = 0;
      v45 = *(float *)(this + 2896);
      v46 = *(float *)(this + 2896);
      v47 = *(float *)(this + 2896) + *(float *)(this + 2896);
      v11 = sub_1026A890((unsigned int *)(this + 3756));
      if ( (*(_DWORD *)(v11 + 252) & 0x800) != 0 )
        sub_100DAE60(v11);
      v37[0] = *(float *)(v11 + 580) + v45;
      v37[1] = *(float *)(v11 + 584) + v46;
      v37[2] = *(float *)(v11 + 588) + v47;
      v12 = sub_1026A890((unsigned int *)(this + 3756));
      v13 = (float *)v12;
      if ( (*(_DWORD *)(v12 + 252) & 0x800) != 0 )
        sub_100DAE60(v12);
      v36[0] = v13[145] - v45;
      v36[1] = v13[146] - v46;
      v36[2] = v13[147] - v47;
      sub_1025F990(v44, (int)v35, 1024, 0);
      v14 = sub_1025F9C0((int)v36, (int)v37, (int)v44);
      v15 = 0;
      v40 = v14;
      v50 = 0;
      if ( v14 <= 0 )
        goto LABEL_45;
      do
      {
        v16 = v35[v15];
        if ( v16 )
        {
          v17 = *(_DWORD *)(this + 3756);
          if ( v17 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3756) & 0xFFF) + 2] != v17 >> 12 )
            v18 = 0;
          else
            v18 = off_1061BE18[4 * (*(_DWORD *)(this + 3756) & 0xFFF) + 1];
          if ( v16 != v18 )
          {
            v19 = (_DWORD *)sub_1026A890((unsigned int *)(this + 3756));
            if ( v16 != sub_1035AD60(v19) )
            {
              sub_1029BE60(&v39, v16);
              if ( sub_10319100((_DWORD *)(this + 3768), &v39) == -1 )
              {
                v20 = v35[v50];
                v21 = *(_DWORD *)(v20 + 424);
                if ( v21 )
                {
                  if ( *(_BYTE *)(v20 + 306) == 6 )
                  {
                    v22 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v21 + 116))(v21);
                    v41 = v22;
                    if ( v48 < v22 && v22 < 10000.0 && v22 > 500.0 )
                    {
                      v23 = (_DWORD *)sub_1026A890((unsigned int *)(this + 3756));
                      v42 = *(float *)sub_10019640(v23);
                      v24 = (_DWORD *)sub_1026A890((unsigned int *)(this + 3756));
                      v25 = (float *)sub_10019640(v24);
                      v26 = (_DWORD *)v35[v50];
                      v43 = v25[1];
                      v27 = (float *)sub_10019640(v26);
                      v28 = (_DWORD *)v35[v50];
                      v46 = *v27;
                      v29 = *((float *)sub_10019640(v28) + 1);
                      v38[0] = v42 - v46;
                      v30 = v43 - v29;
                      v38[1] = v30;
                      sub_10018D40(v38);
                      if ( v30 <= 1400.0 && v30 >= 700.0 )
                      {
                        v31 = v35[v50];
                        v48 = v41;
                        v49 = v31;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        v15 = v50 + 1;
        v50 = v15;
      }
      while ( v15 < v40 );
      if ( v49 )
      {
        *(_DWORD *)(this + 3760) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v49 + 8))(v49);
        sub_10027CD0((_DWORD *)this, 0);
      }
      else
      {
LABEL_45:
        sub_100350E0((int *)(this + 3768));
        (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 1312))(this, "Couldn't find anything to pick up!");
      }
      return;
    case 0x9C:
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 3628) + 192))(*(_DWORD *)(this + 3628));
      *(float *)(this + 3792) = *(float *)(dword_106B31C8 + 12) + 0.5;
      return;
    case 0x9D:
      *(_BYTE *)(this + 3789) = 0;
      sub_10027CD0((_DWORD *)this, 0);
      return;
    default:
      sub_101A9FB0(this, a2);
      return;
  }
}
