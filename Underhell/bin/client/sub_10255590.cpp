int __thiscall sub_10255590(_DWORD *this)
{
  int v2; // eax
  int v3; // edx
  int (__thiscall *v4)(_DWORD *); // eax
  int v5; // eax
  bool v6; // zf
  signed int v7; // kr00_4
  signed int v8; // edi
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // edx
  int (__thiscall *v13)(_DWORD *, int *); // edx
  int v14; // eax
  int v15; // ecx
  int v16; // edx
  char *v17; // eax
  __int16 v18; // cx
  _WORD *v19; // ebx
  int *v20; // edi
  int v21; // eax
  int v22; // ecx
  int v23; // ebp
  int v24; // ecx
  int v25; // eax
  _WORD *v26; // ebp
  int v27; // eax
  int v28; // ebp
  unsigned __int8 (__thiscall *v29)(_DWORD *); // edx
  int v30; // edi
  char v31; // bl
  void (__thiscall *v32)(int, int); // eax
  int v33; // eax
  int v34; // ebp
  int k; // edi
  int v36; // ecx
  int v37; // edi
  int v38; // ebx
  int v39; // ebp
  int v40; // ecx
  int (__thiscall *v41)(_DWORD *, int, int, int, int, int); // eax
  int v42; // edi
  int v43; // eax
  int j; // edi
  int v45; // ebx
  int v46; // ebp
  int v47; // eax
  int v48; // edi
  int v49; // ebx
  int (__thiscall *v50)(_DWORD *); // eax
  int result; // eax
  int v52; // ebx
  int v53; // eax
  int v54; // ecx
  void (__thiscall *v55)(int, int); // eax
  int v56; // edi
  int v57; // ebp
  char v58; // [esp+D1h] [ebp-53h]
  char v59; // [esp+D2h] [ebp-52h]
  char v60; // [esp+D3h] [ebp-51h]
  int v61; // [esp+D4h] [ebp-50h] BYREF
  int v62; // [esp+D8h] [ebp-4Ch] BYREF
  int v63; // [esp+DCh] [ebp-48h]
  int v64; // [esp+E0h] [ebp-44h] BYREF
  int v65; // [esp+E4h] [ebp-40h]
  int v66; // [esp+E8h] [ebp-3Ch]
  int v67; // [esp+ECh] [ebp-38h] BYREF
  int v68; // [esp+F0h] [ebp-34h] BYREF
  int v69; // [esp+F4h] [ebp-30h]
  int v70; // [esp+F8h] [ebp-2Ch] BYREF
  int v71; // [esp+FCh] [ebp-28h]
  int v72; // [esp+100h] [ebp-24h]
  int v73; // [esp+104h] [ebp-20h]
  int v74; // [esp+108h] [ebp-1Ch]
  int i; // [esp+10Ch] [ebp-18h]
  int v76; // [esp+110h] [ebp-14h]
  int v77; // [esp+114h] [ebp-10h] BYREF
  wchar_t String1[6]; // [esp+118h] [ebp-Ch] BYREF

  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 204))(this) )
    v2 = *(_DWORD *)(*(int (__thiscall **)(_DWORD *, int *))(*this + 224))(this, &v77);
  else
    v2 = this[89];
  v3 = *(_DWORD *)dword_1047CA6C;
  v66 = v2;
  (*(void (__thiscall **)(int, int))(v3 + 40))(dword_1047CA6C, v2);
  sub_102361D0((int (__thiscall ***)(void *, int, int))this, (int)&v67, (int)&v64);
  (*(void (__thiscall **)(int, _DWORD, _DWORD, int, int))(*(_DWORD *)dword_1047CA6C + 48))(
    dword_1047CA6C,
    0,
    0,
    v67,
    v64);
  v4 = *(int (__thiscall **)(_DWORD *))(*this + 1016);
  v61 = this[80] + 3;
  v5 = v4(this);
  v6 = *((_BYTE *)this + 403) == 0;
  v62 = v5;
  this[233] = 0;
  i = 0;
  String1[0] = 0;
  if ( !v6 )
  {
    (*(void (__thiscall **)(int, wchar_t *, int))(*(_DWORD *)dword_1047CA68 + 112))(dword_1047CA68, String1, 10);
    if ( String1[0] )
    {
      if ( _wcsicmp(String1, L"EN") )
      {
        this[233] = 0;
        v7 = wcslen(String1);
        v8 = 0;
        for ( i = v7; v8 < v7; ++v8 )
          this[233] += sub_10250EE0(this[84], String1[v8]);
        this[233] += 4;
        v9 = this[233];
        if ( *((_BYTE *)this + 928) )
          v61 += v9;
        v67 -= v9;
      }
    }
  }
  v10 = *(_DWORD *)dword_1047CA6C;
  v63 = this[83];
  (*(void (__thiscall **)(int, int))(v10 + 68))(dword_1047CA6C, v63);
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 204))(this) )
    v11 = *(_DWORD *)(*(int (__thiscall **)(_DWORD *, int *))(*this + 228))(this, &v77);
  else
    v11 = this[88];
  v12 = *(_DWORD *)dword_1047CA6C;
  v65 = v11;
  (*(void (__thiscall **)(int, int))(v12 + 72))(dword_1047CA6C, v11);
  v13 = *(int (__thiscall **)(_DWORD *, int *))(*this + 1032);
  this[80] = 0;
  v70 = 0;
  v14 = v13(this, &v70);
  v15 = this[58];
  v16 = this[70];
  v73 = v14;
  v77 = v62;
  v6 = *((_BYTE *)this + 403) == 0;
  v76 = v15;
  v74 = v16;
  v71 = -1;
  v72 = -1;
  if ( v6 )
    goto LABEL_19;
  v17 = (char *)this + 406;
  do
  {
    v18 = *(_WORD *)v17;
    v17 += 2;
  }
  while ( v18 );
  v59 = 1;
  if ( !((v17 - (char *)(this + 102)) >> 1) )
LABEL_19:
    v59 = 0;
  v60 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA68 + 196))(dword_1047CA68);
  if ( !v59 )
    goto LABEL_32;
  v6 = *((_WORD *)this + 203) == 0;
  v19 = (_WORD *)this + 203;
  v71 = this[70];
  if ( !v6 )
  {
    v20 = this + 55;
    do
    {
      v21 = this[58];
      v22 = this[56];
      v23 = this[70];
      if ( v21 + 1 > v22 )
        sub_102532C0(this + 55, v21 - v22 + 1);
      ++this[58];
      v24 = *v20;
      v25 = this[58] - v23 - 1;
      v6 = this[58] - v23 == 1;
      this[59] = this[55];
      if ( v25 >= 0 && !v6 )
        memcpy((void *)(v24 + 2 * v23 + 2), (const void *)(v24 + 2 * v23), 2 * v25);
      v26 = (_WORD *)(*v20 + 2 * v23);
      if ( v26 )
        *v26 = *v19;
      ++this[70];
      ++v19;
    }
    while ( *v19 );
  }
  v27 = this[70];
  v72 = v27;
  if ( v71 == -1 || (v58 = 1, v27 == -1) )
LABEL_32:
    v58 = 0;
  if ( *((_BYTE *)this + 341) || *((_BYTE *)this + 380) )
  {
    for ( j = v73; j < this[58]; ++j )
    {
      v6 = *((_BYTE *)this + 293) == 0;
      v45 = *(unsigned __int16 *)(this[55] + 2 * j);
      v73 = v45;
      if ( !v6 )
      {
        v45 = 42;
        v73 = 42;
      }
      if ( *((_BYTE *)this + 341) && *(_DWORD *)(this[65] + 4 * v70) == j )
      {
        (*(void (__thiscall **)(_DWORD *, int *, int *))(*this + 1012))(this, &v61, &v62);
        ++v70;
      }
      if ( v58 && j >= v71 && j < v72 )
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 40))(dword_1047CA6C, v65);
        v46 = sub_10250EE0(v63, v45);
        if ( v60 )
        {
          (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 72))(dword_1047CA6C, v66);
          (*(void (__thiscall **)(int, int, _DWORD, int, int))(*(_DWORD *)dword_1047CA6C + 48))(
            dword_1047CA6C,
            v61,
            0,
            v61 + v46,
            v64);
          (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 40))(dword_1047CA6C, v66);
          v45 = v73;
        }
        (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 48))(
          dword_1047CA6C,
          v61,
          v64 - 2,
          v61 + v46,
          v64 - 1);
      }
      v47 = (*(int (__thiscall **)(_DWORD *, int, int, int, int, int))(*this + 984))(this, v45, v63, j, v61, v62);
      v61 += v47;
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 72))(dword_1047CA6C, v65);
    }
  }
  else
  {
    v28 = this[58];
    v29 = *(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 240);
    v69 = v28;
    if ( !v29(this) && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 924))(this)
      || !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 924))(this) )
    {
      v30 = v63;
      v68 = -1;
      v31 = sub_10253700(this, v63, &v68);
      if ( v31 )
      {
        if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 924))(this) && (this[234] & 1) != 0 && this[235] )
        {
          v32 = *(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 68);
          v63 = this[235];
          v30 = v63;
          v32(dword_1047CA6C, v63);
          v31 = sub_10253700(this, v63, &v68);
        }
        if ( v31 )
        {
          v33 = sub_10250EE0(v30, 0x2Eu);
          v34 = v68;
          for ( k = 3 * v33; k > 0; k -= sub_10250EE0(v63, *(_WORD *)(this[55] + 2 * v34--)) )
          {
            if ( v34 < 0 )
              break;
          }
          v28 = v34 + 1;
          v69 = v28;
        }
      }
      v36 = this[58];
      if ( v36 - v28 < 3 && v36 - v28 > 0 )
      {
        v28 = v36 - 3;
        v69 = v36 - 3;
      }
    }
    v37 = v73;
    if ( v73 < v28 )
    {
      do
      {
        v6 = *((_BYTE *)this + 293) == 0;
        v38 = *(unsigned __int16 *)(this[55] + 2 * v37);
        v68 = v38;
        if ( !v6 )
        {
          v38 = 42;
          v68 = 42;
        }
        if ( v58 && v37 >= v71 && v37 < v72 )
        {
          (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 40))(dword_1047CA6C, v65);
          v39 = sub_10250EE0(v63, v38);
          if ( v60 )
          {
            (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 72))(dword_1047CA6C, v66);
            (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 40))(dword_1047CA6C, v65);
            (*(void (__thiscall **)(int, int, _DWORD, int, int))(*(_DWORD *)dword_1047CA6C + 48))(
              dword_1047CA6C,
              v61,
              0,
              v61 + v39,
              v64);
            (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 40))(dword_1047CA6C, v66);
            v38 = v68;
          }
          (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 48))(
            dword_1047CA6C,
            v61,
            v64 - 2,
            v61 + v39,
            v64 - 1);
        }
        v61 += (*(int (__thiscall **)(_DWORD *, int, int, int, int, int))(*this + 984))(this, v38, v63, v37, v61, v62);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 72))(dword_1047CA6C, v65);
        ++v37;
      }
      while ( v37 < v69 );
    }
    if ( v69 < this[58] )
    {
      v40 = (*(int (__thiscall **)(_DWORD *, int, int, int, int, int))(*this + 984))(this, 46, v63, v37, v61, v62) + v61;
      v41 = *(int (__thiscall **)(_DWORD *, int, int, int, int, int))(*this + 984);
      v42 = v37 + 1;
      v61 = v40;
      v43 = v41(this, 46, v63, v42, v40, v62);
      v61 += (*(int (__thiscall **)(_DWORD *, int, int, int, int, int))(*this + 984))(
               this,
               46,
               v63,
               v42 + 1,
               v43 + v61,
               v62)
           + v43;
    }
  }
  (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 44))(dword_1047CA6C, 50, 50, 50, 255);
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 204))(this) )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 924))(this) )
    {
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 240))(this) )
      {
        (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)dword_1047CA6C + 44))(
          dword_1047CA6C,
          0,
          0,
          0,
          255);
        (*(void (__thiscall **)(_DWORD *, int, int))(*this + 988))(this, v61, v62);
        if ( v59 )
        {
          sub_10236F10((int (__thiscall ***)(void *, int *, int *))this, &v61, &v62);
          (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA68 + 192))(dword_1047CA68, v61, v62);
        }
      }
    }
  }
  v48 = this[58] - v76;
  v49 = v74;
  if ( v48 > 0 )
  {
    if ( this[58] - v48 - v74 > 0 )
      memcpy((void *)(this[55] + 2 * v74), (const void *)(this[55] + 2 * (v48 + v74)), 2 * (this[58] - v48 - v74));
    this[58] -= v48;
  }
  v50 = *(int (__thiscall **)(_DWORD *))(*this + 240);
  this[70] = v49;
  result = v50(this);
  if ( (_BYTE)result )
  {
    if ( *((_BYTE *)this + 403) )
    {
      v52 = i;
      if ( i > 0 )
      {
        v53 = this[233];
        v54 = v53 + v67;
        v6 = *((_BYTE *)this + 928) == 0;
        v67 += v53;
        if ( v6 )
          v61 = v54 - v53;
        else
          v61 = 0;
        (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 40))(dword_1047CA6C, v65);
        (*(void (__stdcall **)(int, int, int, int))(*(_DWORD *)dword_1047CA6C + 48))(
          v61,
          2,
          this[233] + v61 - 2,
          v64 - 2);
        v55 = *(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 72);
        HIBYTE(v66) = -1;
        v55(dword_1047CA6C, v66);
        ++v61;
        result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 68))(dword_1047CA6C, this[84]);
        v56 = 0;
        if ( v52 > 0 )
        {
          v57 = v77;
          do
          {
            result = (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD, int, int, int))(*this + 984))(
                       this,
                       String1[v56],
                       this[84],
                       v56,
                       v61,
                       v57);
            v61 += result;
            ++v56;
          }
          while ( v56 < v52 );
        }
      }
    }
  }
  return result;
}
