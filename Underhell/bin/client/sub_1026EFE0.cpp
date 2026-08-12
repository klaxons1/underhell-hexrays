_BYTE *__thiscall sub_1026EFE0(int *this, int a2)
{
  int v4; // ebx
  void (__thiscall **v5)(int *, _DWORD, _DWORD); // ebp
  _DWORD *v6; // eax
  int v7; // eax
  int v8; // ebx
  _DWORD *v9; // eax
  _DWORD *v10; // eax
  int v11; // ebx
  void (__thiscall **v12)(int *, _DWORD, _DWORD); // ebp
  _DWORD *v13; // eax
  int v14; // eax
  int v15; // ebx
  _DWORD *v16; // eax
  _DWORD *v17; // eax
  int v18; // ebx
  void (__thiscall **v19)(int *, _DWORD, _DWORD); // ebp
  _DWORD *v20; // eax
  int v21; // eax
  int v22; // ebx
  _DWORD *v23; // eax
  _DWORD *v24; // eax
  int v25; // ebx
  const char *v26; // eax
  int v27; // eax
  int v28; // ebx
  int v29; // ebp
  int v30; // eax
  int v31; // eax
  int v32; // ebx
  int v33; // ebp
  int v34; // eax
  int v35; // eax
  int v36; // ebx
  int v37; // ebp
  int v38; // eax
  int v39; // eax
  _BYTE *result; // eax
  int v41; // [esp+78h] [ebp-10h] BYREF
  _BYTE v42[4]; // [esp+7Ch] [ebp-Ch] BYREF
  _BYTE v43[4]; // [esp+80h] [ebp-8h] BYREF
  _BYTE v44[4]; // [esp+84h] [ebp-4h] BYREF
  _DWORD *v45; // [esp+8Ch] [ebp+4h]
  _DWORD *v46; // [esp+8Ch] [ebp+4h]
  _DWORD *v47; // [esp+8Ch] [ebp+4h]

  sub_1025BC50(this, a2);
  v4 = *this;
  v5 = (void (__thiscall **)(int *, _DWORD, _DWORD))(*this + 992);
  v6 = (_DWORD *)(*(int (__thiscall **)(int *, int *))(*this + 224))(this, &v41);
  v7 = (*(int (__thiscall **)(int *, _BYTE *, const char *, _DWORD, int))(v4 + 324))(this, v42, "Menu.BgColor", *v6, a2);
  v8 = *this;
  v45 = (_DWORD *)v7;
  v9 = (_DWORD *)(*(int (__thiscall **)(int *, _BYTE *))(*this + 228))(this, v43);
  v10 = (_DWORD *)(*(int (__thiscall **)(int *, _BYTE *, const char *, _DWORD, int))(v8 + 324))(
                    this,
                    v44,
                    "Menu.TextColor",
                    *v9,
                    a2);
  (*v5)(this, *v10, *v45);
  v11 = *this;
  v12 = (void (__thiscall **)(int *, _DWORD, _DWORD))(*this + 996);
  v13 = (_DWORD *)(*(int (__thiscall **)(int *, _BYTE *))(*this + 224))(this, v44);
  v14 = (*(int (__thiscall **)(int *, _BYTE *, const char *, _DWORD, int))(v11 + 324))(
          this,
          v43,
          "Menu.ArmedBgColor",
          *v13,
          a2);
  v15 = *this;
  v46 = (_DWORD *)v14;
  v16 = (_DWORD *)(*(int (__thiscall **)(int *, _BYTE *))(*this + 228))(this, v42);
  v17 = (_DWORD *)(*(int (__thiscall **)(int *, int *, const char *, _DWORD, int))(v15 + 324))(
                    this,
                    &v41,
                    "Menu.ArmedTextColor",
                    *v16,
                    a2);
  (*v12)(this, *v17, *v46);
  v18 = *this;
  v19 = (void (__thiscall **)(int *, _DWORD, _DWORD))(*this + 1000);
  v20 = (_DWORD *)(*(int (__thiscall **)(int *, _BYTE *))(*this + 224))(this, v44);
  v21 = (*(int (__thiscall **)(int *, _BYTE *, const char *, _DWORD, int))(v18 + 324))(
          this,
          v43,
          "Menu.ArmedBgColor",
          *v20,
          a2);
  v22 = *this;
  v47 = (_DWORD *)v21;
  v23 = (_DWORD *)(*(int (__thiscall **)(int *, _BYTE *))(*this + 228))(this, v42);
  v24 = (_DWORD *)(*(int (__thiscall **)(int *, int *, const char *, _DWORD, int))(v22 + 324))(
                    this,
                    &v41,
                    "Menu.ArmedTextColor",
                    *v23,
                    a2);
  (*v19)(this, *v24, *v47);
  v25 = *this;
  v26 = (const char *)(*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)a2 + 4))(a2, "Menu.TextInset", 0);
  v27 = atoi(v26);
  (*(void (__thiscall **)(int *, int))(v25 + 792))(this, v27);
  if ( this[95] )
  {
    v28 = *(_DWORD *)this[95];
    v29 = *(_DWORD *)a2;
    v30 = (*(int (__thiscall **)(int *))(*this + 84))(this);
    v31 = (*(int (__thiscall **)(int, const char *, int))(v29 + 12))(a2, "Marlett", v30);
    (*(void (__thiscall **)(int, int))(v28 + 128))(this[95], v31);
    sub_1027CE60(this[95]);
    (*(void (__thiscall **)(int *, int, _DWORD))(*this + 832))(this, this[95], 0);
  }
  else if ( *((_BYTE *)this + 376) )
  {
    v32 = *(_DWORD *)this[96];
    v33 = *(_DWORD *)a2;
    v34 = (*(int (__thiscall **)(int *))(*this + 84))(this);
    v35 = (*(int (__thiscall **)(int, const char *, int))(v33 + 12))(a2, "Marlett", v34);
    (*(void (__thiscall **)(int, int))(v32 + 128))(this[96], v35);
    (*(void (__thiscall **)(int *, _DWORD, int, int))(*this + 836))(this, 0, this[96], 6);
    sub_1027CE60(this[96]);
  }
  if ( this[98] )
  {
    v36 = *(_DWORD *)this[98];
    v37 = *(_DWORD *)a2;
    v38 = (*(int (__thiscall **)(int *))(*this + 84))(this);
    v39 = (*(int (__thiscall **)(int, const char *, int))(v37 + 12))(a2, "Default", v38);
    (*(void (__thiscall **)(int, int))(v36 + 128))(this[98], v39);
    sub_1027CE60(this[98]);
  }
  result = (_BYTE *)(*(int (__thiscall **)(int *))(*this + 144))(this);
  if ( result )
    return (_BYTE *)sub_1026C7A0(result);
  return result;
}
