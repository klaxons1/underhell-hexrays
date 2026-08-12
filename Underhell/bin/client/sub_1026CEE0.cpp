int __thiscall sub_1026CEE0(int this)
{
  int v2; // eax
  int v3; // edi
  bool v4; // bl
  int v5; // eax
  int v6; // ecx
  int v7; // ebp
  int i; // edi
  int v9; // ecx
  int v10; // ebp
  int j; // edi
  int v12; // edx
  int v13; // eax
  int v14; // eax
  int v15; // ebp
  bool v16; // cc
  int v17; // ebx
  int (__thiscall ***v18)(void *, int, int); // edi
  int v19; // eax
  int v20; // eax
  int v21; // edx
  int v22; // eax
  _DWORD *v23; // ecx
  int (__thiscall ***v24)(void *, int, int); // edi
  int v25; // eax
  bool v26; // zf
  int v27; // eax
  int v28; // ecx
  int v29; // eax
  int v30; // edi
  int v31; // eax
  int v32; // edi
  bool v34; // [esp+24h] [ebp-26h]
  bool v35; // [esp+25h] [ebp-25h]
  int v36; // [esp+26h] [ebp-24h]
  int v37; // [esp+2Ah] [ebp-20h] BYREF
  int v38; // [esp+2Eh] [ebp-1Ch]
  int v39; // [esp+32h] [ebp-18h] BYREF
  int v40; // [esp+36h] [ebp-14h] BYREF
  int v41; // [esp+3Ah] [ebp-10h] BYREF
  int v42; // [esp+3Eh] [ebp-Ch] BYREF
  char v43[4]; // [esp+42h] [ebp-8h] BYREF
  char v44[4]; // [esp+46h] [ebp-4h] BYREF

  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 144))(this);
  v35 = __RTDynamicCast(
          v2,
          0,
          (struct _s_RTTICompleteObjectLocator *)&vgui::Panel `RTTI Type Descriptor',
          (int)&vgui::MenuItem `RTTI Type Descriptor',
          0) != 0;
  (*(void (__thiscall **)(int, char *, char *, int *, int *))(*(_DWORD *)this + 24))(this, v44, v43, &v40, &v41);
  sub_1026A800((void *)this, (int)&v42, &v37);
  v3 = sub_1026BB60((_DWORD *)this);
  v4 = v3 >= v37;
  v34 = v3 >= v37;
  v5 = sub_1026B630((_DWORD *)this);
  v6 = *(_DWORD *)(this + 224);
  if ( v6 > 0 && v5 > v6 )
  {
    v34 = 1;
LABEL_5:
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 948))(this);
    if ( v3 >= v37 )
      v3 = v37;
    (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)this + 964))(this, *(_DWORD *)(this + 224), v3);
    goto LABEL_17;
  }
  if ( v4 )
    goto LABEL_5;
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 952))(this);
  *(_DWORD *)(this + 280) = 0;
  v7 = *(_DWORD *)(this + 300);
  for ( i = 0; i < v7; ++i )
  {
    v9 = *(_DWORD *)(*(_DWORD *)(this + 232) + 12 * *(_DWORD *)(*(_DWORD *)(this + 288) + 4 * i));
    v39 = *(_DWORD *)(*(_DWORD *)(this + 288) + 4 * i);
    if ( v9 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v9 + 128))(v9) )
      sub_100C2010((int *)(this + 268), *(_DWORD *)(this + 280), &v39);
  }
  v10 = *(_DWORD *)(this + 340);
  for ( j = 0; j < v10; ++j )
  {
    v12 = *(_DWORD *)(this + 328);
    if ( *(_DWORD *)(v12 + 4 * j) )
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(v12 + 4 * j) + 124))(*(_DWORD *)(v12 + 4 * j), 0);
  }
LABEL_17:
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 960))(this);
  v38 = sub_102374C0((int (__thiscall ***)(void *, int *, _BYTE *))this);
  if ( v34 )
  {
    v13 = sub_102374C0(*(int (__thiscall ****)(void *, int *, _BYTE *))(this + 228));
    v38 -= v13;
  }
  v14 = 0;
  v15 = 0;
  v16 = *(_DWORD *)(this + 280) <= 0;
  v36 = v41 + v40;
  v39 = 0;
  if ( !v16 )
  {
    do
    {
      v17 = *(_DWORD *)(*(_DWORD *)(this + 268) + 4 * v14);
      v18 = *(int (__thiscall ****)(void *, int, int))(*(_DWORD *)(this + 232) + 12 * v17);
      if ( v18 && ((unsigned __int8 (__thiscall *)(int (__thiscall ***)(void *, int, int)))(*v18)[32])(v18) )
      {
        if ( v36 >= v37 )
          break;
        if ( *(_DWORD *)(this + 384) )
          ((void (__thiscall *)(int (__thiscall ***)(void *, int, int), _DWORD))(*v18)[204])(
            v18,
            *(_DWORD *)(this + 384));
        sub_10236140(v18, 0, v15);
        sub_10237520((int (__thiscall ***)(void *, int *, _BYTE *))v18, *(_BYTE **)(this + 212));
        v19 = *(_DWORD *)(this + 212);
        v36 += v19;
        v15 += v19;
        if ( (unsigned __int8)sub_1026F330(v18) || (v20 = *(_DWORD *)(this + 364), v20 <= 0) )
        {
          if ( (unsigned __int8)sub_1026F330(v18) )
            (*v18)[198](v18, 0, 0);
        }
        else
        {
          (*v18)[198](v18, v20, 0);
        }
        v21 = *(_DWORD *)(this + 320);
        v22 = 0;
        if ( v21 > 0 )
        {
          v23 = *(_DWORD **)(this + 308);
          while ( *v23 != v17 )
          {
            ++v22;
            ++v23;
            if ( v22 >= v21 )
              goto LABEL_37;
          }
          if ( v22 != -1 )
          {
            v24 = *(int (__thiscall ****)(void *, int, int))(*(_DWORD *)(this + 328) + 4 * v22);
            ((void (__thiscall *)(int (__thiscall ***)(void *, int, int), int))(*v24)[31])(v24, 1);
            sub_10236200(v24, 0, v15, v38, 3);
            v15 += 3;
            v36 += 3;
          }
        }
      }
LABEL_37:
      v14 = v39 + 1;
      v16 = ++v39 < *(_DWORD *)(this + 280);
    }
    while ( v16 );
  }
  v25 = *(_DWORD *)(this + 216);
  if ( v25 )
  {
    v26 = (*(_BYTE *)(this + 348) & 1) == 0;
    *(_DWORD *)(this + 352) = v25;
    if ( !v26 )
      *(_DWORD *)(this + 352) -= sub_102374C0(*(int (__thiscall ****)(void *, int *, _BYTE *))(this + 228));
  }
  else
  {
    *(_BYTE *)(this + 348) |= 4u;
    sub_1026BC10(this);
  }
  sub_1026BCB0((_DWORD *)this);
  v27 = 0;
  if ( (*(_BYTE *)(this + 348) & 1) != 0 )
    v27 = sub_102374C0(*(int (__thiscall ****)(void *, int *, _BYTE *))(this + 228));
  v28 = v27 + *(_DWORD *)(this + 352);
  if ( v28 > v42 )
    v28 = v42;
  v29 = v41 + v40 + v15;
  if ( v29 > v37 )
    v29 = v37;
  sub_102361A0((int (__thiscall ***)(void *, int, int))this, v28, v29);
  if ( v35 )
    sub_1026AA30((void *)this);
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 228) + 128))(*(_DWORD *)(this + 228)) )
    sub_1026B690(this);
  v30 = *(_DWORD *)(this + 244);
  if ( v30 != -1 )
  {
    v31 = *(_DWORD *)(this + 232);
    do
    {
      v32 = 12 * v30;
      (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(v32 + v31) + 244))(*(_DWORD *)(v32 + v31), 0, 0);
      v31 = *(_DWORD *)(this + 232);
      v30 = *(_DWORD *)(v32 + v31 + 8);
    }
    while ( v30 != -1 );
  }
  return (*(int (__thiscall **)(int))(*(_DWORD *)this + 16))(this);
}
