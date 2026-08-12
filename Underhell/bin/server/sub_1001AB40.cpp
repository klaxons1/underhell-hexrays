char __thiscall sub_1001AB40(float *this, int a2)
{
  double v3; // st4
  double v4; // st6
  double v5; // st4
  double v6; // st5
  double v7; // st6
  double v8; // st7
  char result; // al
  _DWORD *v10; // edi
  int v11; // eax
  int v12; // esi
  unsigned int v13; // ecx
  int *v14; // eax
  unsigned int v15; // ecx
  int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  int v19; // eax
  float v20; // edi
  int v21; // eax
  float *v22; // edi
  float *v23; // eax
  int v24; // edi
  int v25; // eax
  int v26; // eax
  float v27; // [esp+20h] [ebp-864h]
  float v28; // [esp+24h] [ebp-860h]
  float v29; // [esp+24h] [ebp-860h]
  _DWORD v30[514]; // [esp+30h] [ebp-854h] BYREF
  char v31[12]; // [esp+838h] [ebp-4Ch] BYREF
  char v32[12]; // [esp+844h] [ebp-40h] BYREF
  char v33[12]; // [esp+850h] [ebp-34h] BYREF
  char v34[12]; // [esp+85Ch] [ebp-28h] BYREF
  unsigned __int8 (__thiscall **v35)(void *, int); // [esp+868h] [ebp-1Ch]
  int v36; // [esp+86Ch] [ebp-18h]
  int v37; // [esp+870h] [ebp-14h] BYREF
  float v38; // [esp+874h] [ebp-10h]
  float v39; // [esp+878h] [ebp-Ch]
  int v40; // [esp+87Ch] [ebp-8h]
  int v41; // [esp+880h] [ebp-4h]

  if ( !(unsigned __int8)sub_1007E040(*((_DWORD *)this + 647))
    || !(unsigned __int8)sub_1007E030(*((_DWORD *)this + 647))
    || (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 1, 10) > 3
    || !(unsigned __int8)sub_1007F4B0((int)&v37, 144.0, 0) )
  {
    goto LABEL_13;
  }
  if ( ((_DWORD)this[63] & 0x800) != 0 )
    sub_100DAE60(this);
  v3 = v38 - this[146];
  v4 = v3 * v3;
  v5 = *(float *)&v37 - this[145];
  v6 = v4;
  v7 = v39 - this[147];
  v28 = v5 * v5 + v6 + v7 * v7;
  if ( off_10689708(v28) > 96.0 )
  {
    if ( (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 1, 10) > 5 )
    {
      sub_10019680((_DWORD *)a2, (int)this);
      v29 = 2.0;
      v8 = 1.0;
    }
    else
    {
      *(float *)(a2 + 4) = *(float *)&v37;
      *(float *)(a2 + 8) = v38;
      *(float *)(a2 + 12) = v39;
      v29 = 0.40000001;
      v8 = 0.2;
    }
    v27 = v8;
    *(float *)(a2 + 16) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                            dword_106B31E4,
                            LODWORD(v27),
                            LODWORD(v29));
    result = 1;
    *(float *)(a2 + 24) = 0.2;
  }
  else
  {
LABEL_13:
    if ( *((_DWORD *)this + 581) == 3
      && (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 1, 10) <= 8 )
    {
      *(_DWORD *)a2 = *(_DWORD *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 8))(this);
      return 1;
    }
    else
    {
      v10 = 0;
      v11 = *((_DWORD *)this + 63) >> 11;
      v40 = 0;
      v36 = 0;
      v41 = 0;
      if ( (v11 & 1) != 0 )
        sub_100DAE60(this);
      sub_10261520((int)(this + 145), 360.0, 0);
      v12 = sub_1025EEE0(v30);
      while ( v12 )
      {
        if ( (float *)v12 != this && (!*(_BYTE *)(a2 + 28) || *(char *)(v12 + 256) >= 0) )
        {
          if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v12 + 344))(v12) )
          {
            if ( (v13 = *(_DWORD *)(v12 + 412), v13 == -1)
              || (v14 = &off_1061BE18[4 * (*(_DWORD *)(v12 + 412) & 0xFFF) + 1],
                  v15 = v13 >> 12,
                  off_1061BE18[4 * (*(_DWORD *)(v12 + 412) & 0xFFF) + 2] != v15)
              || !*v14
              || (off_1061BE18[4 * (*(_DWORD *)(v12 + 412) & 0xFFF) + 2] != v15 ? (v16 = 0) : (v16 = *v14),
                  (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v16 + 344))(v16)) )
            {
              v17 = *(_DWORD *)(v12 + 300);
              if ( v17 != -1 && off_1061BE18[4 * (*(_DWORD *)(v12 + 300) & 0xFFF) + 2] == v17 >> 12 )
                v10 = (_DWORD *)off_1061BE18[4 * (*(_DWORD *)(v12 + 300) & 0xFFF) + 1];
              if ( v10 )
              {
                while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*v10 + 320))(v10) )
                {
                  v18 = v10[75];
                  if ( v18 == -1 || off_1061BE18[4 * (v10[75] & 0xFFF) + 2] != v18 >> 12 )
                    v19 = 0;
                  else
                    v19 = off_1061BE18[4 * (v10[75] & 0xFFF) + 1];
                  v10 = (_DWORD *)v19;
                  if ( !v19 )
                    goto LABEL_39;
                }
              }
              else
              {
LABEL_39:
                if ( sub_10019C80(*(_DWORD **)(a2 + 32), v12) == -1 )
                {
                  ++v41;
                  if ( *(char *)(v12 + 256) < 0
                    && ((*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v12 + 296))(v12)
                     || !(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 2)) )
                  {
                    if ( (*(unsigned __int8 (__thiscall **)(float *, int, int, _DWORD))(*(_DWORD *)this + 548))(
                           this,
                           v12,
                           16449,
                           0) )
                    {
                      v20 = *this;
                      v21 = (*(int (__thiscall **)(int, char *))(*(_DWORD *)v12 + 504))(v12, v31);
                      if ( (*(unsigned __int8 (__thiscall **)(float *, int))(LODWORD(v20) + 2296))(this, v21) )
                      {
                        *(float *)(a2 + 16) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                                                dword_106B31E4,
                                                1.0,
                                                4.0);
                        v40 = v12;
                        break;
                      }
                    }
                  }
                  v22 = (float *)(*(int (__thiscall **)(float *, char *))(*(_DWORD *)this + 504))(this, v34);
                  v23 = (float *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)v12 + 504))(v12, v33);
                  *(float *)&v37 = *v23 - *v22;
                  v38 = v23[1] - v22[1];
                  v39 = v23[2] - v22[2];
                  off_10689714();
                  v24 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 1, 100);
                  if ( sub_100D7680(v12) )
                  {
                    v24 *= 10;
                    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v12 + 296))(v12) )
                      v24 *= 10;
                  }
                  if ( v24 > v36 )
                  {
                    if ( (*(unsigned __int8 (__thiscall **)(float *, int, int, _DWORD))(*(_DWORD *)this + 548))(
                           this,
                           v12,
                           16449,
                           0) )
                    {
                      v35 = (unsigned __int8 (__thiscall **)(void *, int))(*(_DWORD *)this + 2296);
                      v25 = (*(int (__thiscall **)(int, char *))(*(_DWORD *)v12 + 504))(v12, v32);
                      if ( (*v35)(this, v25) )
                      {
                        v36 = v24;
                        v40 = v12;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        ++v30[0];
        v12 = sub_1025EEE0(v30);
        v10 = 0;
      }
      v26 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 5);
      if ( v41 >= v26 && v40 )
      {
        *(_DWORD *)a2 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v40 + 8))(v40);
        return 1;
      }
      else
      {
        return 0;
      }
    }
  }
  return result;
}
