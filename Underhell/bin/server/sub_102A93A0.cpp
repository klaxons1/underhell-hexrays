void __thiscall sub_102A93A0(int this)
{
  unsigned int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  unsigned int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // edi
  int v11; // eax
  int v12; // eax
  int v13; // ebx
  float *v14; // edi
  float *v15; // eax
  double v16; // st7
  int v17; // ecx
  double v18; // st7
  int v19; // ecx
  float *v20; // ebx
  long double v21; // st7
  int v22; // eax
  int v23; // eax
  float v24; // [esp+4h] [ebp-Ch]
  float v25; // [esp+4h] [ebp-Ch]
  int v26; // [esp+8h] [ebp-8h]
  float v27; // [esp+Ch] [ebp-4h]

  sub_1004B420((int (__thiscall ****)(_DWORD))this);
  v2 = *(_DWORD *)(this + 40);
  if ( v2 != -1
    && off_1061BE18[4 * (*(_DWORD *)(this + 40) & 0xFFF) + 2] == v2 >> 12
    && off_1061BE18[4 * (*(_DWORD *)(this + 40) & 0xFFF) + 1] )
  {
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 52))(this);
    v4 = sub_1007DB30((_DWORD *)(v3 + 52), 100000);
    sub_10023E00(*(char **)(this + 4), v4);
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 52))(this);
    v6 = sub_1007DB30((_DWORD *)(v5 + 52), 100001);
    sub_10023E00(*(char **)(this + 4), v6);
    v7 = *(_DWORD *)(this + 40);
    if ( v7 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 40) & 0xFFF) + 2] != v7 >> 12 )
      v8 = 0;
    else
      v8 = off_1061BE18[4 * (*(_DWORD *)(this + 40) & 0xFFF) + 1];
    v9 = sub_102A9F50(v8);
    v10 = v9;
    v26 = v9;
    if ( v9 )
    {
      if ( sub_102A8DA0(this, v9) )
      {
        v11 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 52))(this);
        v12 = sub_1007DB30((_DWORD *)(v11 + 52), 100001);
        sub_10023CB0(*(char **)(this + 4), v12);
      }
      if ( *(_DWORD *)(this + 40) == -1
        || off_1061BE18[4 * (*(_DWORD *)(this + 40) & 0xFFF) + 2] != *(_DWORD *)(this + 40) >> 12 )
      {
        v13 = 0;
      }
      else
      {
        v13 = off_1061BE18[4 * (*(_DWORD *)(this + 40) & 0xFFF) + 1];
      }
      v14 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v10 + 576))(v10);
      v15 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v13 + 576))(v13);
      v16 = *v15 - *v14;
      v27 = v16 * v16 + (v15[1] - v14[1]) * (v15[1] - v14[1]);
      if ( *(_DWORD *)(this + 40) == -1
        || off_1061BE18[4 * (*(_DWORD *)(this + 40) & 0xFFF) + 2] != *(_DWORD *)(this + 40) >> 12 )
      {
        v17 = 0;
      }
      else
      {
        v17 = off_1061BE18[4 * (*(_DWORD *)(this + 40) & 0xFFF) + 1];
      }
      v18 = sub_102A9EA0(v17);
      v24 = v18 + v18;
      if ( *(_DWORD *)(this + 40) == -1
        || off_1061BE18[4 * (*(_DWORD *)(this + 40) & 0xFFF) + 2] != *(_DWORD *)(this + 40) >> 12 )
      {
        v19 = 0;
      }
      else
      {
        v19 = off_1061BE18[4 * (*(_DWORD *)(this + 40) & 0xFFF) + 1];
      }
      v20 = (float *)((*(int (__thiscall **)(int))(*(_DWORD *)v19 + 576))(v19) + 8);
      v21 = *v20 - *(float *)((*(int (__thiscall **)(int))(*(_DWORD *)v26 + 576))(v26) + 8);
      if ( v24 * v24 > v27 && fabs(v21) < 32.0 )
      {
        sub_1004C1E0((char **)this, 100000);
        v22 = sub_1026A890((unsigned int *)(this + 40));
        v25 = sub_102A9EA0(v22);
        v23 = sub_1026A890((unsigned int *)(this + 40));
        if ( sub_102A9EA0(v23) * v25 > v27 )
          sub_1004C1E0((char **)this, 100001);
      }
      if ( *(_BYTE *)(this + 32) && *(float *)(dword_106B31C8 + 12) > (double)*(float *)(this + 24) )
      {
        if ( (unsigned __int8)sub_1004B510((void *)this, 17, 1) )
          sub_10044510(*(_DWORD *)(this + 4), (int)"Stopped chasing, aggression over");
      }
    }
    else
    {
      DevMsg("ai_goal_police with NULL target entity!\n");
    }
  }
  else
  {
    *(_DWORD *)(this + 40) = -1;
    *(_BYTE *)(this + 16) = 0;
  }
}
