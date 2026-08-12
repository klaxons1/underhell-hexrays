void __thiscall sub_1004FE30(int this)
{
  int v2; // eax
  int v3; // eax
  int v4; // ebx
  int v5; // edi
  double v6; // st4
  double v7; // st6
  double v8; // st4
  double v9; // st5
  double v10; // st6
  double v11; // st7
  int v12; // eax
  int v13; // eax
  int v14; // edi
  int v15; // eax
  float *v16; // edi
  int v17; // eax
  int v18; // ebx
  double v19; // st4
  double v20; // st6
  double v21; // st4
  double v22; // st5
  double v23; // st6
  int v24; // eax
  int v25; // eax
  int v26; // eax
  float v27; // [esp+Ch] [ebp-4h]

  sub_1004B420((int (__thiscall ****)(_DWORD))this);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 52))(this);
  v2 = sub_1007DB30(100000);
  sub_10023E00(*(char **)(this + 4), v2);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 52))(this);
  v3 = sub_1007DB30(100001);
  sub_10023E00(*(char **)(this + 4), v3);
  if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 368))(*(_DWORD *)(this + 4)) )
  {
    v4 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 368))(*(_DWORD *)(this + 4));
    if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
      sub_100DAE60(v4);
    v5 = *(_DWORD *)(this + 4);
    if ( (*(_DWORD *)(v5 + 252) & 0x800) != 0 )
      sub_100DAE60(*(_DWORD *)(this + 4));
    v6 = *(float *)(v5 + 584) - *(float *)(v4 + 584);
    v7 = v6 * v6;
    v8 = *(float *)(v5 + 580) - *(float *)(v4 + 580);
    v9 = v7;
    v10 = *(float *)(v5 + 588) - *(float *)(v4 + 588);
    v11 = v8 * v8 + v9 + v10 * v10;
    if ( v11 >= 3600.0 )
    {
      if ( v11 < 90000.0 )
      {
        v13 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 368))(*(_DWORD *)(this + 4));
        v14 = *(_DWORD *)(this + 4);
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 368))(v13) == v14 )
        {
          sub_1004C1E0((char **)this, 100000);
          if ( sub_1004FC70(this) )
            goto LABEL_13;
        }
      }
    }
    else
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)this + 52))(this);
      v12 = sub_1007DB30(100001);
      sub_10023CB0(*(char **)(this + 4), v12);
      if ( -1.0 != *(float *)(this + 44) && !sub_1004FBE0((float *)(this + 32), *(_DWORD *)(this + 4)) )
LABEL_13:
        *(float *)(this + 44) = -1.0;
    }
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 52))(this);
  v15 = sub_1007DB30(100002);
  sub_10023E00(*(char **)(this + 4), v15);
  if ( *(int *)(dword_106B31C8 + 20) <= 1 )
  {
    v17 = sub_10261B20();
    v16 = (float *)v17;
    if ( v17 )
    {
      v27 = *(float *)(dword_10691FF4 + 44) * 1.5;
      if ( (*(_DWORD *)(v17 + 252) & 0x800) != 0 )
        sub_100DAE60(v17);
      v18 = *(_DWORD *)(this + 4);
      if ( (*(_DWORD *)(v18 + 252) & 0x800) != 0 )
        sub_100DAE60(*(_DWORD *)(this + 4));
      v19 = *(float *)(v18 + 584) - v16[146];
      v20 = v19 * v19;
      v21 = *(float *)(v18 + 580) - v16[145];
      v22 = v20;
      v23 = *(float *)(v18 + 588) - v16[147];
      if ( v27 * v27 <= v21 * v21 + v22 + v23 * v23 )
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)this + 52))(this);
        v24 = sub_1007DB30(100002);
        sub_10023CB0(*(char **)(this + 4), v24);
      }
    }
  }
  else
  {
    v16 = 0;
  }
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD, float *, int, _DWORD))(**(_DWORD **)(this + 4) + 548))(
         *(_DWORD *)(this + 4),
         v16,
         16449,
         0) )
  {
    *(float *)(this + 24) = *(float *)(dword_106B31C8 + 12);
  }
  else if ( *(float *)(dword_106B31C8 + 12) - *(float *)(this + 24) >= 2.0 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 52))(this);
    v25 = sub_1007DB30(100002);
    sub_10023CB0(*(char **)(this + 4), v25);
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 52))(this);
  v26 = sub_1007DB30(100002);
  if ( sub_10023D10(*(_DWORD **)(this + 4), v26)
    && -1.0 != *(float *)(this + 44)
    && !sub_1004FBE0((float *)(this + 32), *(_DWORD *)(this + 4)) )
  {
    *(float *)(this + 44) = -1.0;
  }
}
