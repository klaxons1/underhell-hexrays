int __thiscall sub_10264650(_DWORD *this, int a2, int a3)
{
  int v3; // ebp
  int v5; // edi
  int (__thiscall **v6)(int, int); // ebx
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // ebp
  int v12; // eax
  int v13; // ecx
  _DWORD *v14; // ebx
  void (__thiscall *v15)(int, _BYTE *, _DWORD); // eax
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  _DWORD *v19; // edx
  void (__stdcall **v20)(int); // edi
  int v21; // eax
  int v22; // ebp
  int v23; // ebx
  int (__thiscall **v24)(int, int, int); // edi
  int v25; // eax
  char v26; // al
  int v27; // edi
  _DWORD *v28; // eax
  void (__stdcall **v29)(int); // edi
  int v30; // edx
  int v31; // eax
  int v32; // ecx
  int v33; // eax
  int v34; // ecx
  int v35; // eax
  int v36; // edi
  int v37; // edi
  int v39; // ecx
  int v40; // eax
  _DWORD *v41; // edx
  int v42; // eax
  int v43; // ebp
  int v44; // ebx
  unsigned __int8 (__thiscall **v45)(int, int, int); // edi
  int v46; // eax
  int v47; // edi
  _DWORD *v48; // eax
  const char *v49; // [esp+38h] [ebp-22Ch]
  const char *v50; // [esp+38h] [ebp-22Ch]
  int v51; // [esp+3Ch] [ebp-228h]
  int v52; // [esp+3Ch] [ebp-228h]
  char v53; // [esp+53h] [ebp-211h]
  int v54; // [esp+54h] [ebp-210h] BYREF
  int v55; // [esp+58h] [ebp-20Ch]
  int v56; // [esp+5Ch] [ebp-208h] BYREF
  int v57; // [esp+60h] [ebp-204h] BYREF
  _BYTE v58[512]; // [esp+64h] [ebp-200h] BYREF

  v3 = dword_1047CA7C;
  v5 = this[54] + 72 * *(unsigned __int8 *)(this[65] + a3);
  v6 = (int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA7C + 32);
  v7 = (*(int (__thiscall **)(_DWORD *))(*this + 80))(this);
  v8 = (*v6)(v3, v7);
  v9 = this[90];
  v10 = *(_DWORD *)(v5 + 64);
  v55 = v8;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 788))(v9, v10);
  if ( *(_BYTE *)(v5 + 24) )
  {
    v11 = a2;
    (*(void (__thiscall **)(_DWORD *, int, int, _BYTE *, int))(*this + 900))(this, a2, a3, v58, 256);
    v12 = (*(int (__thiscall **)(_DWORD *, int))(*this + 848))(this, a2);
    v13 = this[88];
    v14 = (_DWORD *)v12;
    v15 = *(void (__thiscall **)(int, _BYTE *, _DWORD))(*(_DWORD *)v13 + 104);
    v54 = (int)v14;
    v15(v13, v58, 0);
    (*(void (__thiscall **)(_DWORD, int *, int *))(*(_DWORD *)this[88] + 8))(this[88], &v57, &v56);
    v16 = sub_102374C0(*(int (__thiscall ****)(void *, int *, _BYTE *))v5) - 5;
    if ( v57 < v16 )
      v16 = v57;
    (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)this[88] + 16))(this[88], v16, v56);
    (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)this[90] + 868))(this[90], 0);
    (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, int))(*(_DWORD *)this[90] + 836))(this[90], 0, this[88], 3);
    v17 = this[100];
    v18 = 0;
    v53 = 0;
    if ( v17 <= 0 )
      goto LABEL_8;
    v19 = (_DWORD *)this[97];
    while ( *v19 != a2 )
    {
      ++v18;
      ++v19;
      if ( v18 >= v17 )
        goto LABEL_8;
    }
    if ( v18 < 0 || (this[94] & 8) != 0 && a3 != this[93] )
    {
LABEL_8:
      if ( sub_1022AEB0(v14, "cellcolor") )
      {
        v33 = sub_1022A800(v14, "disabled", 0);
        v34 = this[88];
        if ( v33 )
          (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v34 + 20))(this[106]);
        else
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v34 + 20))(v34, this[105]);
      }
      else
      {
        v20 = (void (__stdcall **)(int))(*(_DWORD *)this[88] + 20);
        v21 = *(_DWORD *)sub_1022AA10(v14, &v54, "cellcolor");
        (*v20)(v21);
      }
      (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)this[90] + 264))(this[90], 0);
    }
    else
    {
      v53 = 1;
      v22 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA68 + 16))(dword_1047CA68);
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 240))(this)
        || v22
        && (v23 = dword_1047CA70,
            v24 = (int (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA70 + 88),
            v25 = (*(int (__thiscall **)(_DWORD *))(*this + 148))(this),
            v26 = (*v24)(v23, v22, v25),
            v14 = (_DWORD *)v54,
            v26) )
      {
        v27 = *(_DWORD *)this[90];
        v51 = v55;
        v49 = "ListPanel.SelectedBgColor";
      }
      else
      {
        v27 = *(_DWORD *)this[90];
        v51 = v55;
        v49 = "ListPanel.SelectedOutOfFocusBgColor";
      }
      v28 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int *, const char *, int))(*this + 328))(this, &v54, v49, v51);
      (*(void (__thiscall **)(_DWORD, _DWORD))(v27 + 216))(this[90], *v28);
      if ( sub_1022AEB0(v14, "cellcolor") )
      {
        v31 = sub_1022A800(v14, "disabled", 0);
        v32 = this[88];
        if ( v31 )
          (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v32 + 20))(this[108]);
        else
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v32 + 20))(v32, this[107]);
      }
      else
      {
        v29 = (void (__stdcall **)(int))(*(_DWORD *)this[88] + 20);
        v30 = *(_DWORD *)sub_1022AA10(v14, &v54, "cellcolor");
        (*v29)(v30);
      }
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)this[90] + 264))(this[90], 1);
      v11 = a2;
    }
    v35 = *(_DWORD *)(this[72] + 12 * v11);
    if ( !a3 && *(_BYTE *)(v35 + 12) && this[109] )
    {
      v36 = *(_DWORD *)(v35 + 24);
      if ( v36
        || (!v53 ? (v37 = *(_DWORD *)(v35 + 16)) : (v37 = *(_DWORD *)(v35 + 20)),
            (unsigned __int8)sub_10279000(v37) && (v36 = sub_10279020(v37)) != 0) )
      {
        (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)this[90] + 868))(this[90], 1);
        (*(void (__thiscall **)(_DWORD, _DWORD, int, _DWORD))(*(_DWORD *)this[90] + 836))(this[90], 0, v36, 0);
        (*(void (__thiscall **)(_DWORD, int, _DWORD, int))(*(_DWORD *)this[90] + 836))(this[90], 1, this[88], 3);
        return this[90];
      }
    }
  }
  else
  {
    v39 = this[100];
    v40 = 0;
    if ( v39 <= 0 )
      goto LABEL_42;
    v41 = (_DWORD *)this[97];
    while ( *v41 != a2 )
    {
      ++v40;
      ++v41;
      if ( v40 >= v39 )
        goto LABEL_42;
    }
    if ( v40 < 0 || (this[94] & 8) != 0 && a3 != this[93] )
    {
LABEL_42:
      (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)this[90] + 264))(this[90], 0);
    }
    else
    {
      v43 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA68 + 16))(dword_1047CA68);
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 240))(this)
        || v43
        && (v44 = dword_1047CA70,
            v45 = (unsigned __int8 (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA70 + 88),
            v46 = (*(int (__thiscall **)(_DWORD *))(*this + 148))(this),
            (*v45)(v44, v43, v46)) )
      {
        v47 = *(_DWORD *)this[90];
        v52 = v55;
        v50 = "ListPanel.SelectedBgColor";
      }
      else
      {
        v47 = *(_DWORD *)this[90];
        v52 = v55;
        v50 = "ListPanel.SelectedOutOfFocusBgColor";
      }
      v48 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int *, const char *, int))(*this + 328))(this, &v56, v50, v52);
      (*(void (__thiscall **)(_DWORD, _DWORD))(v47 + 216))(this[90], *v48);
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)this[90] + 264))(this[90], 1);
    }
    v42 = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 904))(this, a2, a3);
    (*(void (__thiscall **)(_DWORD, _DWORD, int, _DWORD))(*(_DWORD *)this[90] + 836))(this[90], 0, v42, 0);
  }
  return this[90];
}
