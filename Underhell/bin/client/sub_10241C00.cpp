void __thiscall sub_10241C00(int *this, _DWORD *a2)
{
  _DWORD *v3; // eax
  int v5; // eax
  int v6; // ebx
  void (__thiscall **v7)(int, int); // ebp
  int v8; // eax
  const char *v9; // ebx
  const char *v10; // ebp
  char v11; // al
  int v12; // ebp
  int (__thiscall **v13)(int, int); // ebx
  int v14; // eax
  int v15; // eax
  __int16 v16; // ax
  char v17; // al
  int v18; // eax
  int v19; // edx
  int v20; // ebp
  int (__thiscall **v21)(int, int); // ebx
  int v22; // eax
  __int16 v23; // ax
  int v24; // ebp
  void (__thiscall **v25)(int, int); // ebx
  int v26; // eax
  int v27; // eax
  int v28; // ebp
  void (__thiscall **v29)(int, int); // ebx
  int v30; // eax
  int v31; // ebp
  void (__thiscall **v32)(int, int); // ebx
  int v33; // eax
  const char *v34; // eax
  int v35; // ebx
  int (__thiscall **v36)(int, int); // ebp
  int v37; // eax
  int v38; // eax
  int v39; // edx
  int v40; // ebp
  int (__thiscall **v41)(int, int); // ebx
  int v42; // eax
  int v43; // ebp
  void (__thiscall **v44)(int, int); // ebx
  int v45; // eax
  int v46; // ebp
  int v47; // eax
  void (__thiscall **v48)(int *, int); // ebx
  int v49; // eax
  void (__thiscall **v50)(int *, int); // ebx
  int v51; // eax
  _BYTE *v52; // eax
  _BYTE *v53; // ebx
  int v54; // eax
  int v55; // eax
  int v56; // eax
  char *v57; // eax
  int v58; // ebx
  _DWORD *v59; // [esp+4Ch] [ebp-2Ch]
  int v60; // [esp+5Ch] [ebp-1Ch] BYREF
  int v61; // [esp+60h] [ebp-18h] BYREF
  int v62; // [esp+64h] [ebp-14h] BYREF
  int v63; // [esp+68h] [ebp-10h] BYREF
  int v64; // [esp+6Ch] [ebp-Ch]
  int v65; // [esp+70h] [ebp-8h] BYREF
  int v66; // [esp+74h] [ebp-4h] BYREF
  const char *v67; // [esp+7Ch] [ebp+4h]
  int i; // [esp+7Ch] [ebp+4h]

  if ( (this[20] & 0x200) != 0 )
  {
    v3 = (_DWORD *)(*(int (__thiscall **)(int *))(*this + 112))(this);
    sub_10241830(this, v3);
  }
  v5 = (*(int (__thiscall **)(int *, _DWORD *))(*this + 112))(this, a2);
  sub_10241790(this, v5, v59);
  *((_WORD *)this + 74) &= 0xFF83u;
  (*(void (__thiscall **)(int, int *))(*(_DWORD *)dword_1047CA6C + 148))(dword_1047CA6C, &v65);
  v6 = dword_1047CA70;
  v7 = (void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 12);
  v8 = (*(int (__thiscall **)(int *, int *, int *))*this)(this, &v61, &v60);
  (*v7)(v6, v8);
  v9 = (const char *)sub_1022B4C0(a2, "xpos", 0);
  v10 = (const char *)sub_1022B4C0(a2, "ypos", 0);
  v67 = v10;
  if ( v9 )
  {
    v11 = *v9;
    if ( *v9 == 114 || v11 == 82 )
    {
      *((_WORD *)this + 74) |= 4u;
    }
    else
    {
      if ( v11 != 99 && v11 != 67 )
        goto LABEL_11;
      *((_WORD *)this + 74) |= 8u;
    }
    ++v9;
LABEL_11:
    v61 = atoi(v9);
    if ( (*(unsigned __int8 (__thiscall **)(int *))(*this + 84))(this) )
    {
      v12 = dword_1047CA7C;
      v13 = (int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA7C + 52);
      v14 = (*(int (__thiscall **)(int *, int))(*this + 80))(this, v61);
      v15 = (*v13)(v12, v14);
      v10 = v67;
      v61 = v15;
    }
    v16 = *((_WORD *)this + 74);
    if ( (v16 & 4) != 0 )
    {
      v61 = v64 - v61;
    }
    else if ( (v16 & 8) != 0 )
    {
      v61 += v64 / 2;
    }
  }
  if ( !v10 )
    goto LABEL_31;
  v17 = *v10;
  if ( *v10 == 114 || v17 == 82 )
  {
    *((_WORD *)this + 74) |= 0x10u;
  }
  else
  {
    if ( v17 != 99 && v17 != 67 )
      goto LABEL_25;
    *((_WORD *)this + 74) |= 0x20u;
  }
  ++v10;
LABEL_25:
  v18 = atoi(v10);
  v19 = *this;
  v60 = v18;
  if ( (*(unsigned __int8 (__thiscall **)(int *))(v19 + 84))(this) )
  {
    v20 = dword_1047CA7C;
    v21 = (int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA7C + 52);
    v22 = (*(int (__thiscall **)(int *, int))(*this + 80))(this, v60);
    v60 = (*v21)(v20, v22);
  }
  v23 = *((_WORD *)this + 74);
  if ( (v23 & 0x10) != 0 )
  {
    v60 = v65 - v60;
  }
  else if ( (v23 & 0x20) != 0 )
  {
    v60 += v65 / 2;
  }
LABEL_31:
  v24 = dword_1047CA70;
  v25 = (void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 8);
  v26 = (*(int (__thiscall **)(int *, int, int))*this)(this, v61, v60);
  (*v25)(v24, v26);
  if ( sub_1022A6A0(a2, "zpos", 0) )
  {
    v27 = sub_1022A800(a2, "zpos", 0);
    v28 = dword_1047CA70;
    v29 = (void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 32);
    v30 = (*(int (__thiscall **)(int *, int))*this)(this, v27);
    (*v29)(v28, v30);
  }
  v31 = dword_1047CA70;
  v32 = (void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 20);
  v33 = (*(int (__thiscall **)(int *, int *, int *))*this)(this, &v62, &v63);
  (*v32)(v31, v33);
  v34 = (const char *)sub_1022B4C0(a2, "wide", 0);
  if ( v34 )
  {
    if ( *v34 == 102 || *v34 == 70 )
    {
      *((_WORD *)this + 74) |= 0x40u;
      ++v34;
    }
    v62 = atoi(v34);
    if ( (*(unsigned __int8 (__thiscall **)(int *))(*this + 84))(this) )
    {
      v35 = dword_1047CA7C;
      v36 = (int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA7C + 52);
      v37 = (*(int (__thiscall **)(int *, int))(*this + 80))(this, v62);
      v62 = (*v36)(v35, v37);
    }
    if ( (this[37] & 0x40) != 0 )
      v62 = v64 - v62;
  }
  v38 = sub_1022A800(a2, "tall", v63);
  v39 = *this;
  v63 = v38;
  if ( (*(unsigned __int8 (__thiscall **)(int *))(v39 + 84))(this) )
  {
    v40 = dword_1047CA7C;
    v41 = (int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA7C + 52);
    v42 = (*(int (__thiscall **)(int *, int))(*this + 80))(this, v63);
    v63 = (*v41)(v40, v42);
  }
  v43 = dword_1047CA70;
  v44 = (void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 16);
  v45 = (*(int (__thiscall **)(int *, int, int))*this)(this, v62, v63);
  (*v44)(v43, v45);
  sub_102376C0(this, a2);
  v46 = 0;
  if ( sub_1022A800(a2, "IgnoreScheme", 0) )
    (*(void (__thiscall **)(int *))(*this + 8))(this);
  v47 = sub_1022A800(a2, "visible", 1);
  if ( v47 )
  {
    if ( v47 == 1 )
      (*(void (__thiscall **)(int *, int))(*this + 124))(this, 1);
  }
  else
  {
    (*(void (__thiscall **)(int *, _DWORD))(*this + 124))(this, 0);
  }
  v48 = (void (__thiscall **)(int *, int))(*this + 200);
  v49 = sub_1022A800(a2, "enabled", 1);
  LOBYTE(v49) = v49 != 0;
  (*v48)(this, v49);
  v50 = (void (__thiscall **)(int *, int))(*this + 248);
  v51 = sub_1022A800(a2, "tabPosition", 0);
  (*v50)(this, v51);
  v52 = (_BYTE *)sub_1022B4C0(a2, "tooltiptext", 0);
  v53 = v52;
  if ( v52 && *v52 )
  {
    if ( !this[12] )
    {
      if ( sub_100DDA40(36) )
        v54 = sub_1025DC00(this, 0);
      else
        v54 = 0;
      this[12] = v54;
    }
    sub_1025DAD0(v53);
  }
  v55 = sub_1022A800(a2, "paintbackground", -1);
  if ( v55 >= 0 )
  {
    LOBYTE(v55) = v55 != 0;
    (*(void (__thiscall **)(int *, int))(*this + 264))(this, v55);
  }
  v56 = sub_1022A800(a2, "paintborder", -1);
  if ( v56 >= 0 )
  {
    LOBYTE(v56) = v56 != 0;
    (*(void (__thiscall **)(int *, int))(*this + 260))(this, v56);
  }
  v57 = (char *)sub_1022B4C0(a2, "fieldName", 0);
  if ( v57 )
    sub_10236070(this, v57);
  for ( i = 0; i < this[29]; ++i )
  {
    if ( sub_1022A6A0(a2, *(char **)(v46 + this[26]), 0) )
    {
      v58 = this[26] + v46;
      *(_DWORD *)(v58 + 8) = *(_DWORD *)sub_1022AA10(a2, &v66, *(char **)v58);
      **(_DWORD **)(this[26] + v46 + 4) = *(_DWORD *)(this[26] + v46 + 8);
      *(_BYTE *)(this[26] + v46 + 12) = 1;
    }
    v46 += 16;
  }
}
