void __thiscall sub_10378310(int this, _DWORD *a2)
{
  int v3; // esi
  _DWORD *v4; // eax
  int v5; // ebx
  int v6; // eax
  bool v7; // al
  _DWORD *v8; // ecx
  bool v9; // bl
  int (__thiscall *v10)(int); // eax
  int v11; // eax
  int v12; // ebx
  double v13; // st6
  double v14; // st5
  _DWORD *v15; // eax
  int v16; // ebx
  float *v17; // eax
  _DWORD *v18; // ecx
  int *v19; // eax
  double v20; // st7
  double (__thiscall *v21)(int, _DWORD, _DWORD); // eax
  double v22; // st7
  double v23; // st7
  bool v24; // zf
  _DWORD v25[3]; // [esp+30h] [ebp-14h] BYREF
  float v26; // [esp+3Ch] [ebp-8h]
  bool v27; // [esp+43h] [ebp-1h]

  if ( *a2 != 100002 )
  {
    sub_100546C0((float *)this, a2);
    return;
  }
  if ( !sub_10050FC0((_DWORD *)this) )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 8))(this, 1);
    return;
  }
  if ( !(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 368))(*(_DWORD *)(this + 4)) )
    goto LABEL_25;
  v3 = *(_DWORD *)(this + 4);
  v4 = (_DWORD *)sub_100217F0((void *)v3);
  v25[0] = *v4;
  v25[1] = v4[1];
  v25[2] = v4[2];
  v5 = *(_DWORD *)v3;
  v6 = (*(int (__thiscall **)(int, _DWORD *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v3 + 368))(
         v3,
         v25,
         1.0,
         0.80000001,
         0.0);
  (*(void (__thiscall **)(int, int))(v5 + 1704))(v3, v6);
  v7 = sub_1004AEC0((_DWORD *)v3, 10);
  v8 = *(_DWORD **)(this + 4);
  v9 = v7;
  v27 = v7;
  if ( !sub_10023D10(v8, 10) )
  {
    v24 = !v9;
LABEL_22:
    if ( v24 )
      goto LABEL_25;
    goto LABEL_23;
  }
  v10 = *(int (__thiscall **)(int))(*(_DWORD *)v3 + 368);
  v26 = *(float *)(dword_106E864C + 44) * 3.0;
  v11 = v10(v3);
  v12 = v11;
  if ( (*(_DWORD *)(v11 + 252) & 0x800) != 0 )
    sub_100DAE60(v11);
  if ( (*(_DWORD *)(v3 + 252) & 0x800) != 0 )
    sub_100DAE60(v3);
  v13 = *(float *)(v3 + 584) - *(float *)(v12 + 584);
  v14 = *(float *)(v3 + 580) - *(float *)(v12 + 580);
  if ( v26 * v26 <= v14 * v14 + v13 * v13 )
  {
    v24 = !v27;
    goto LABEL_22;
  }
  if ( *(float *)(v3 + 4552) <= (double)*(float *)(dword_106B31C8 + 12) )
  {
    if ( v27 )
    {
LABEL_17:
      v19 = (int *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 368))(*(_DWORD *)(this + 4));
      sub_10378020(v3, v19, 1);
      if ( (int)--*(_DWORD *)(v3 + 4540) > 0 )
      {
        *(float *)(v3 + 4552) = *(float *)(dword_106E888C + 44) + *(float *)(dword_106B31C8 + 12);
        goto LABEL_25;
      }
      v20 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              0.0,
              0.25);
      v21 = *(double (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_106B31E4 + 4);
      v26 = v20 + *(float *)(dword_106B31C8 + 12) + 1.0;
      v22 = v21(dword_106B31E4, 0.0, 0.25);
      v23 = v22 + v26;
      *(_DWORD *)(v3 + 4540) = 4;
      *(_DWORD *)(v3 + 4544) = 0;
      *(float *)(v3 + 4552) = v23;
LABEL_23:
      v18 = (_DWORD *)v3;
      goto LABEL_24;
    }
    if ( sub_1004AFF0(*(_DWORD **)(this + 4), 10) )
    {
      v15 = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 368))(*(_DWORD *)(this + 4));
      v16 = *(_DWORD *)(this + 4);
      v26 = *(float *)(v16 + 2796);
      v17 = (float *)sub_10019640(v15);
      if ( sub_100B1370((_DWORD *)LODWORD(v26), v17) != v16 )
      {
        v18 = *(_DWORD **)(this + 4);
LABEL_24:
        sub_1004AF00(v18);
        goto LABEL_25;
      }
      goto LABEL_17;
    }
  }
LABEL_25:
  if ( *(float *)(dword_106B31C8 + 12) - *(float *)(this + 240) > -0.001 && sub_10051CA0(this, 0.80000001) )
  {
    sub_100925F0((float *)(this + 240), 8.0, 24.0);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 12))(this, 0);
  }
  else
  {
    sub_100546C0((float *)this, a2);
  }
}
