void __thiscall sub_1005FC70(int this)
{
  int v2; // edi
  void (__thiscall *v3)(int); // edx
  int v4; // eax
  _DWORD *v5; // ecx
  int v6; // ebx
  int (__thiscall *v7)(_DWORD *); // edx
  int v8; // edi
  float *v9; // ecx
  int v10; // edi
  char v11; // al
  int v12; // esi
  void *i; // edi
  _DWORD **v14; // edi
  int v15; // eax
  void *j; // eax
  int v17; // edi
  unsigned int v18; // eax
  int v19; // ebx
  unsigned int v20; // eax
  int v21; // ecx
  int v22; // [esp+0h] [ebp-38h]
  int v23; // [esp+14h] [ebp-24h] BYREF
  float v24; // [esp+18h] [ebp-20h]
  float v25; // [esp+1Ch] [ebp-1Ch]
  int v26; // [esp+20h] [ebp-18h] BYREF
  float v27; // [esp+24h] [ebp-14h]
  float v28; // [esp+28h] [ebp-10h]
  int v29[2]; // [esp+2Ch] [ebp-Ch] BYREF
  _BYTE v30[4]; // [esp+34h] [ebp-4h] BYREF

  if ( *(int *)(dword_106B31C8 + 20) <= 1 )
  {
    v2 = sub_10261B20();
    if ( v2 )
    {
      if ( (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4) + 1080))(*(_DWORD *)(this + 4), v2) == 3
        && *(float *)(dword_106B31C8 + 12) - *(float *)(this + 132) > -0.001 )
      {
        if ( -1.0 == *(float *)(this + 128) )
        {
          sub_10043F70((float *)(this + 116), v2, 60.0);
        }
        else if ( sub_1004FBE0((float *)(this + 116), v2) )
        {
          sub_1005D050(this);
          *(float *)(this + 128) = -1.0;
        }
      }
    }
  }
  if ( *(_BYTE *)(this + 112) )
  {
    *(float *)(this + 140) = *(float *)(dword_106B31C8 + 12) + *(float *)(this + 144);
    sub_100285C0(*(_DWORD **)(this + 4), 0, 1);
  }
  sub_1004B420((int (__thiscall ****)(_DWORD))this);
  v3 = *(void (__thiscall **)(int))(*(_DWORD *)this + 52);
  *(_BYTE *)(this + 112) = 0;
  v3(this);
  v4 = sub_1007DB30(100000);
  sub_10023E00(*(char **)(this + 4), v4);
  v5 = *(_DWORD **)(this + 4);
  v6 = v5[699];
  v7 = *(int (__thiscall **)(_DWORD *))(*v5 + 368);
  v29[1] = v6;
  if ( !v7(v5)
    || (v8 = *(_DWORD *)(this + 4),
        v22 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 368))(v8),
        (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 1868))(v8),
        (v9 = (float *)sub_100773C0(v22, 0)) == 0)
    || *(float *)(this + 96) <= 0.0
    || (-3.402823466385289e38 == v9[12] || *(float *)(dword_106B31C8 + 12) - v9[7] <= *(float *)(this + 96))
    && (v9[12] != -3.402823466385289e38
     || *(float *)(this + 96) + *(float *)(this + 96) >= *(float *)(dword_106B31C8 + 12) - v9[8]) )
  {
LABEL_18:
    v10 = *(_DWORD *)(this + 4);
    if ( (*(_DWORD *)(v10 + 236) & 0x1000) != 0 && *(_DWORD *)(dword_10692474 + 48) )
    {
      if ( (*(_DWORD *)(v10 + 252) & 0x800) != 0 )
        sub_100DAE60(*(_DWORD *)(this + 4));
      v11 = sub_1005F650((_DWORD *)this, (float *)(v10 + 580));
      v12 = *(_DWORD *)(this + 4);
      if ( v11 )
      {
        *(float *)&v26 = 48.0;
        v27 = 48.0;
        v28 = 4.0;
        *(float *)&v23 = -48.0;
        v24 = -48.0;
        v25 = -4.0;
        if ( (*(_DWORD *)(v12 + 252) & 0x800) != 0 )
          sub_100DAE60(v12);
        sub_1011BB20(v12 + 580, (int)&v23, (int)&v26, 255, 0, 0, 8, 0.1);
      }
      else
      {
        *(float *)&v23 = 48.0;
        v24 = 48.0;
        v25 = 4.0;
        *(float *)&v26 = -48.0;
        v27 = -48.0;
        v28 = -4.0;
        if ( (*(_DWORD *)(v12 + 252) & 0x800) != 0 )
          sub_100DAE60(v12);
        sub_1011BB20(v12 + 580, (int)&v26, (int)&v23, 0, 255, 0, 8, 0.1);
      }
    }
    return;
  }
  sub_1004C1E0((char **)this, 100000);
  if ( v6 )
  {
    for ( i = (void *)sub_100B1560(v30, 1); i; i = (void *)sub_100B1630(v30, 1) )
    {
      if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)i + 264))(i) )
      {
        if ( i != *(void **)(this + 4) )
        {
          sub_1005D0C0(i, v29);
          v14 = (_DWORD **)v29[0];
          if ( v29[0] )
          {
            if ( *(_BYTE *)(v29[0] + 45) )
            {
              v15 = sub_1026A890(this + 100);
              if ( (unsigned __int8)sub_1012B040(v15) )
              {
                if ( !sub_1004C220(v14, 100000) )
                  goto LABEL_18;
              }
            }
          }
        }
      }
    }
    for ( j = (void *)sub_100B1560(v30, 1); j; j = (void *)sub_100B1630(v30, 1) )
    {
      sub_1005D0C0(j, v29);
      v17 = v29[0];
      if ( v29[0] && *(_BYTE *)(v29[0] + 45) )
      {
        v18 = *(_DWORD *)(this + 100);
        if ( v18 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 100) & 0xFFF) + 2] != v18 >> 12 )
          v19 = 0;
        else
          v19 = off_1061BE18[4 * (*(_DWORD *)(this + 100) & 0xFFF) + 1];
        v20 = *(_DWORD *)(v29[0] + 100);
        if ( v20 == -1 || off_1061BE18[4 * (*(_DWORD *)(v29[0] + 100) & 0xFFF) + 2] != v20 >> 12 )
          v21 = 0;
        else
          v21 = off_1061BE18[4 * (*(_DWORD *)(v29[0] + 100) & 0xFFF) + 1];
        if ( v21 == v19 && *(_BYTE *)(v29[0] + 45) )
        {
          (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(v29[0] + 4) + 1644))(*(_DWORD *)(v29[0] + 4), 1001);
          *(_BYTE *)(v17 + 45) = 0;
          sub_1004BA00((int *)v17, 0);
        }
      }
    }
  }
  else if ( *(_BYTE *)(this + 45) )
  {
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4) + 1644))(*(_DWORD *)(this + 4), 1001);
    *(_BYTE *)(this + 45) = 0;
    sub_1004BA00((int *)this, 0);
  }
}
