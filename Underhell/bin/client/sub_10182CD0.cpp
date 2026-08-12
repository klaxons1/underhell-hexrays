int __thiscall sub_10182CD0(_DWORD *this, int a2, int a3)
{
  int result; // eax
  int v5; // edi
  int v6; // ebx
  int v7; // eax
  _BYTE *v8; // eax
  int v9; // ebx
  int v10; // eax
  int v11; // edi
  int v12; // eax
  int v13; // edi
  int v14; // ebx
  int v15; // eax
  int v16; // eax
  int v17; // edx
  int v18; // edi
  int v19; // ebx
  int v20; // eax
  int v21; // eax
  int v22; // edi
  int v23; // ebx
  int v24; // eax
  int v25; // eax
  int v26; // edi
  int v27; // ebx
  int v28; // eax
  int v29; // edi
  int v30; // ebx
  int v31; // eax
  int v32; // eax
  int v33; // edi
  int v34; // eax
  int v35; // [esp-4h] [ebp-890h]
  _DWORD v36[512]; // [esp+Ch] [ebp-880h] BYREF
  _BYTE v37[128]; // [esp+80Ch] [ebp-80h] BYREF
  int v38; // [esp+898h] [ebp+Ch]
  int v39; // [esp+898h] [ebp+Ch]
  int v40; // [esp+898h] [ebp+Ch]
  int v41; // [esp+898h] [ebp+Ch]
  int v42; // [esp+898h] [ebp+Ch]
  int v43; // [esp+898h] [ebp+Ch]

  result = a2;
  if ( a2 == 1 )
  {
    result = sub_1005CDB0();
    v5 = result;
    if ( !result )
      return result;
    v6 = *(_DWORD *)dword_1047CA78;
    v7 = (*(int (__thiscall **)(int, int))(*(_DWORD *)result + 4))(result, a3);
    v8 = (_BYTE *)(*(int (__thiscall **)(int, int))(v6 + 8))(dword_1047CA78, v7);
    if ( !v8 )
    {
      v9 = *(_DWORD *)dword_1047CA78;
      v10 = (*(int (__thiscall **)(int, int, _BYTE *, int))(*(_DWORD *)v5 + 4))(v5, a3, v37, 128);
      (*(void (__thiscall **)(int, int))(v9 + 12))(dword_1047CA78, v10);
      v8 = v37;
    }
    v11 = *(_DWORD *)dword_1047CA78;
    v12 = (*(int (__thiscall **)(int, const char *, int, _BYTE *))(*(_DWORD *)dword_1047CA78 + 8))(
            dword_1047CA78,
            "#Player",
            2,
            v8);
    (*(void (__cdecl **)(int, _DWORD *, int, int))(v11 + 32))(dword_1047CA78, v36, 2048, v12);
    (*(void (__thiscall **)(_DWORD, _DWORD, const char *, bool (__cdecl *)(int, int, int), int))(*(_DWORD *)this[68]
                                                                                               + 772))(
      this[68],
      this[69],
      Locale,
      sub_10182810,
      v35);
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 864))(this) )
      (*(void (__thiscall **)(_DWORD, _DWORD, const char *, const char *, int, _DWORD, _DWORD))(*(_DWORD *)this[68] + 796))(
        this[68],
        this[69],
        "avatar",
        Locale,
        18,
        this[105],
        0);
    v13 = dword_1047CA7C;
    v14 = *(_DWORD *)this[68];
    v38 = *(_DWORD *)dword_1047CA7C;
    v15 = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 80))(this, 160, 0);
    v16 = (*(int (__thiscall **)(int, int))(v38 + 52))(v13, v15);
    v17 = this[69];
    v36[0] = v16 - this[105];
    (*(void (__thiscall **)(_DWORD, int, const char *, _DWORD *, _DWORD))(v14 + 792))(this[68], v17, "name", v36, 0);
    v18 = dword_1047CA7C;
    v19 = *(_DWORD *)this[68];
    v39 = *(_DWORD *)dword_1047CA7C;
    v20 = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 80))(this, 60, 0);
    v21 = (*(int (__thiscall **)(int, int))(v39 + 52))(v18, v20);
    (*(void (__thiscall **)(_DWORD, _DWORD, const char *, const char *, _DWORD, int))(v19 + 796))(
      this[68],
      this[69],
      "frags",
      Locale,
      0,
      v21);
    v22 = dword_1047CA7C;
    v23 = *(_DWORD *)this[68];
    v40 = *(_DWORD *)dword_1047CA7C;
    v24 = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 80))(this, 60, 0);
    v25 = (*(int (__thiscall **)(int, int))(v40 + 52))(v22, v24);
    (*(void (__thiscall **)(_DWORD, _DWORD, const char *, const char *, _DWORD, int))(v23 + 796))(
      this[68],
      this[69],
      "deaths",
      Locale,
      0,
      v25);
    v26 = dword_1047CA7C;
    v27 = *(_DWORD *)this[68];
    v41 = *(_DWORD *)dword_1047CA7C;
    v28 = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 80))(this, 80, 0);
    v36[0] = (*(int (__thiscall **)(int, int))(v41 + 52))(v26, v28);
  }
  else
  {
    if ( a2 != 3 )
      return result;
    (*(void (__thiscall **)(_DWORD, _DWORD, const char *, _DWORD))(*(_DWORD *)this[68] + 772))(
      this[68],
      this[69],
      Locale,
      0);
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 864))(this) )
      (*(void (__thiscall **)(_DWORD, _DWORD, const char *, const char *, int, _DWORD, _DWORD))(*(_DWORD *)this[68] + 796))(
        this[68],
        this[69],
        "avatar",
        Locale,
        18,
        this[105],
        0);
    v29 = dword_1047CA7C;
    v30 = *(_DWORD *)this[68];
    v42 = *(_DWORD *)dword_1047CA7C;
    v31 = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 80))(this, 160, 0);
    v32 = (*(int (__thiscall **)(int, int))(v42 + 52))(v29, v31);
    (*(void (__thiscall **)(_DWORD, _DWORD, const char *, const char *, _DWORD, int))(v30 + 796))(
      this[68],
      this[69],
      "name",
      "#Spectators",
      0,
      v32 - this[105]);
    v33 = dword_1047CA7C;
    v27 = *(_DWORD *)this[68];
    v43 = *(_DWORD *)dword_1047CA7C;
    v34 = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 80))(this, 60, 0);
    v36[0] = (*(int (__thiscall **)(int, int))(v43 + 52))(v33, v34);
  }
  return (*(int (__thiscall **)(_DWORD, _DWORD))(v27 + 796))(this[68], this[69]);
}
