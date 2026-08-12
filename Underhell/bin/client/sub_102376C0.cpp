char __thiscall sub_102376C0(void *this, _DWORD *a2)
{
  int v2; // edi
  int v3; // ebx
  int v5; // eax
  int v6; // edi
  int v7; // ebx
  int v8; // eax
  int v9; // ebp
  int v10; // eax
  int (__thiscall **v11)(void *, int *, int *); // edx
  int (__thiscall *v12)(void *, int *, int *); // eax
  int (__thiscall ***v13)(_DWORD, int *, int *); // eax
  int v14; // edi
  int v15; // ebx
  int v16; // eax
  int v17; // ebx
  int v18; // edi
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // edi
  int v27; // eax
  int v28; // eax
  __int16 v29; // ax
  char v30; // al
  char v31; // cl
  char result; // al
  int v33; // [esp+34h] [ebp-28h]
  int v34; // [esp+38h] [ebp-24h] BYREF
  int v35; // [esp+3Ch] [ebp-20h] BYREF
  int v36; // [esp+40h] [ebp-1Ch] BYREF
  int v37; // [esp+44h] [ebp-18h] BYREF
  int v38; // [esp+48h] [ebp-14h] BYREF
  int v39; // [esp+4Ch] [ebp-10h] BYREF
  int v40; // [esp+50h] [ebp-Ch]
  int v41; // [esp+54h] [ebp-8h]
  int v42; // [esp+58h] [ebp-4h]

  v2 = dword_1047CA70;
  v3 = *(_DWORD *)dword_1047CA70;
  v5 = (**(int (__thiscall ***)(void *, int *, int *))this)(this, &v38, &v39);
  (*(void (__thiscall **)(int, int))(v3 + 12))(v2, v5);
  v6 = dword_1047CA70;
  v7 = *(_DWORD *)dword_1047CA70;
  v8 = (**(int (__thiscall ***)(void *, int *, int *))this)(this, &v34, &v36);
  (*(void (__thiscall **)(int, int))(v7 + 20))(v6, v8);
  v9 = 0;
  v42 = sub_1022A800(a2, "AutoResize", 0);
  v10 = sub_1022A800(a2, "PinCorner", 0);
  v11 = *(int (__thiscall ***)(void *, int *, int *))this;
  v40 = v10;
  v35 = v34;
  v12 = v11[36];
  v37 = v36;
  if ( ((int (__thiscall *)(void *))v12)(this) )
  {
    v13 = (int (__thiscall ***)(_DWORD, int *, int *))(*(int (__thiscall **)(void *))(*(_DWORD *)this + 144))(this);
    v14 = dword_1047CA70;
    v15 = *(_DWORD *)dword_1047CA70;
    v16 = (**v13)(v13, &v35, &v37);
    (*(void (__thiscall **)(int, int))(v15 + 20))(v14, v16);
  }
  v17 = 0;
  v18 = 0;
  v33 = 0;
  switch ( v40 )
  {
    case 0:
      v17 = v38;
      v19 = v39;
      v9 = v38 + v34 - v35;
      v18 = v39 + v36 - v37;
      goto LABEL_8;
    case 1:
      v9 = v38;
      v19 = v39;
      v17 = v38 + v34 - v35;
      v18 = v39 + v36 - v37;
      goto LABEL_8;
    case 2:
      v18 = v39;
      v17 = v38;
      v19 = v39 + v36 - v37;
      v9 = v38 + v34 - v35;
      goto LABEL_8;
    case 3:
      v9 = v38;
      v18 = v39;
      v17 = v38 + v34 - v35;
      v19 = v39 + v36 - v37;
LABEL_8:
      v33 = v19;
      break;
    default:
      break;
  }
  if ( !(*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 84))(this) )
  {
    LOWORD(v17) = sub_1022A800(a2, "PinnedCornerOffsetX", v17);
    LOWORD(v33) = sub_1022A800(a2, "PinnedCornerOffsetY", v33);
    LOWORD(v9) = sub_1022A800(a2, "UnpinnedCornerOffsetX", v9);
    v29 = sub_1022A800(a2, "UnpinnedCornerOffsetY", v18);
    goto LABEL_19;
  }
  if ( sub_1022A6A0(a2, "PinnedCornerOffsetX", 0) )
  {
    v17 = dword_1047CA7C;
    v41 = *(_DWORD *)dword_1047CA7C;
    v20 = sub_1022A800(a2, "PinnedCornerOffsetX", 0);
    v21 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 80))(this, v20);
    LOWORD(v17) = (*(int (__thiscall **)(int, int))(v42 + 52))(v17, v21);
  }
  if ( sub_1022A6A0(a2, "PinnedCornerOffsetY", 0) )
  {
    v41 = dword_1047CA7C;
    v22 = sub_1022A800(a2, "PinnedCornerOffsetY", 0);
    v23 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 80))(this, v22);
    LOWORD(v33) = (*(int (__thiscall **)(int, int))(v34 + 52))(v42, v23);
  }
  if ( sub_1022A6A0(a2, "UnpinnedCornerOffsetX", 0) )
  {
    v9 = dword_1047CA7C;
    v41 = *(_DWORD *)dword_1047CA7C;
    v24 = sub_1022A800(a2, "UnpinnedCornerOffsetX", 0);
    v25 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 80))(this, v24);
    LOWORD(v9) = (*(int (__thiscall **)(int, int))(v42 + 52))(v9, v25);
  }
  if ( sub_1022A6A0(a2, "UnpinnedCornerOffsetY", 0) )
  {
    v26 = dword_1047CA7C;
    v41 = *(_DWORD *)dword_1047CA7C;
    v27 = sub_1022A800(a2, "UnpinnedCornerOffsetY", 0);
    v28 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 80))(this, v27);
    v29 = (*(int (__thiscall **)(int, int))(v42 + 52))(v26, v28);
LABEL_19:
    LOWORD(v18) = v29;
  }
  v30 = v42;
  if ( !v42 )
  {
    LOWORD(v18) = 0;
    LOWORD(v9) = 0;
  }
  v31 = v40 & 0xF;
  *((_WORD *)this + 71) = v18;
  result = v31 | (16 * v30);
  *((_WORD *)this + 68) = v17;
  *((_WORD *)this + 70) = v9;
  *((_BYTE *)this + 150) = result;
  *((_WORD *)this + 69) = v33;
  return result;
}
