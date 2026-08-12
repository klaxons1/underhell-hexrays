void __thiscall sub_10031F20(int this, int a2)
{
  float v3; // ebx
  int v4; // ebx
  int *v5; // eax
  int v6; // edi
  int v7; // ecx
  char v8; // bl
  char v9; // al
  float *v10; // edx
  int v11; // ecx
  bool v12; // c0
  float *v13; // ecx
  int v14; // ecx
  float *v15; // edi
  float v16; // ebx
  int v17; // eax
  int v18; // eax
  float *v19; // edi
  float v20; // ebx
  int v21; // eax
  int v22; // eax
  int v23; // [esp+10h] [ebp-20h]
  int v24; // [esp+14h] [ebp-1Ch]
  int v25; // [esp+18h] [ebp-18h]
  int v26; // [esp+1Ch] [ebp-14h]
  int v27; // [esp+20h] [ebp-10h]
  int v28; // [esp+20h] [ebp-10h]
  int v29; // [esp+24h] [ebp-Ch]
  int v30; // [esp+28h] [ebp-8h]
  float *v31; // [esp+2Ch] [ebp-4h]

  if ( !a2 || !(unsigned __int8)sub_101282A0(a2) )
    return;
  v3 = *(float *)&dword_1047CA8C;
  v25 = dword_1047CA8C;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_1047CA8C + 100))(dword_1047CA8C);
  v24 = sub_10126D70(a2);
  sub_10028EA0((float *)this, a2);
  sub_10031990(this, v3, a2, *((float *)off_103DC81C + 3));
  v26 = 0;
  if ( *(int *)(this + 1972) <= 0 )
    goto LABEL_39;
  v4 = 0;
  v30 = 0;
  v31 = (float *)(this + 2000);
  do
  {
    v5 = (int *)(v4 + *(_DWORD *)(this + 1960));
    if ( *v5 >= v24 )
      goto LABEL_37;
    v6 = sub_10127960(*v5);
    v29 = v6;
    if ( !*(_DWORD *)(v6 + 24) )
      goto LABEL_37;
    v7 = v4 + *(_DWORD *)(this + 1960);
    if ( *v31 == *(float *)(v7 + 20) )
      goto LABEL_37;
    v8 = 0;
    v9 = sub_1002A860((_DWORD *)this, *(_DWORD *)v7);
    v10 = v31;
    if ( v9 )
    {
      if ( *v31 > 0.0 )
      {
        v11 = *(_DWORD *)(this + 1960);
        v12 = *v31 < (double)*(float *)(v30 + v11 + 20);
        v13 = (float *)(v30 + v11 + 20);
        if ( !v12 )
        {
          if ( *v31 - *v13 <= 0.5 )
          {
            (*(void (__thiscall **)(int))(*(_DWORD *)v25 + 104))(v25);
            return;
          }
          v8 = 1;
        }
      }
    }
    v14 = v6 + *(_DWORD *)(v6 + 28);
    v23 = v14;
    if ( !v8 )
      goto LABEL_25;
    v27 = 0;
    if ( *(int *)(v6 + 24) <= 0 )
      goto LABEL_24;
    v15 = (float *)(v14 + 8);
    do
    {
      if ( (*(_DWORD *)v15 & 0x400) != 0 )
      {
        if ( (*(_DWORD *)v15 & 0x10) == 0 )
          goto LABEL_22;
      }
      else if ( *((int *)v15 - 1) < 5000 )
      {
        goto LABEL_22;
      }
      if ( *v31 < (double)*(v15 - 2) )
      {
        v16 = *(float *)this;
        v17 = (*(int (__thiscall **)(int, _DWORD, _DWORD *))(*(_DWORD *)this + 40))(
                this,
                *((_DWORD *)v15 - 1),
                (_DWORD *)v15 + 1);
        v18 = (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 36))(this, v17);
        (*(void (__thiscall **)(int, int))(LODWORD(v16) + 640))(this, v18);
        v14 = v23;
      }
LABEL_22:
      v15 += 20;
      ++v27;
    }
    while ( v27 < *(_DWORD *)(v29 + 24) );
    v6 = v29;
    v10 = v31;
LABEL_24:
    *v10 = -0.0099999998;
LABEL_25:
    v28 = 0;
    if ( *(int *)(v6 + 24) <= 0 )
      goto LABEL_36;
    v19 = (float *)(v14 + 8);
    while ( 2 )
    {
      if ( (*(_DWORD *)v19 & 0x400) != 0 )
      {
        if ( (*(_DWORD *)v19 & 0x10) != 0 )
          goto LABEL_31;
      }
      else if ( *((int *)v19 - 1) >= 5000 )
      {
LABEL_31:
        if ( *v31 < (double)*(v19 - 2) && *(float *)(v30 + *(_DWORD *)(this + 1960) + 20) >= (double)*(v19 - 2) )
        {
          v20 = *(float *)this;
          v21 = (*(int (__thiscall **)(int, _DWORD, _DWORD *))(*(_DWORD *)this + 40))(
                  this,
                  *((_DWORD *)v19 - 1),
                  (_DWORD *)v19 + 1);
          v22 = (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 36))(this, v21);
          (*(void (__thiscall **)(int, int))(LODWORD(v20) + 640))(this, v22);
        }
      }
      v19 += 20;
      if ( ++v28 < *(_DWORD *)(v29 + 24) )
        continue;
      break;
    }
    v10 = v31;
LABEL_36:
    v4 = v30;
    *v10 = *(float *)(v30 + *(_DWORD *)(this + 1960) + 20);
LABEL_37:
    ++v31;
    v4 += 32;
    ++v26;
    v30 = v4;
  }
  while ( v26 < *(_DWORD *)(this + 1972) );
  v3 = *(float *)&v25;
LABEL_39:
  (*(void (__thiscall **)(float))(*(_DWORD *)LODWORD(v3) + 104))(COERCE_FLOAT(LODWORD(v3)));
}
