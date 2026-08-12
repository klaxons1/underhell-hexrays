void __thiscall sub_1023B700(char *this, _DWORD *a2, int a3)
{
  _DWORD *v4; // ebp
  int v5; // esi
  char v6; // bl
  int v7; // ecx
  int v8; // eax
  int v9; // esi
  int v10; // eax
  int v11; // eax
  _DWORD *v12; // ebx
  _DWORD *v13; // ebp
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // ebx
  int v25; // eax
  int v26; // eax
  int v27; // ebx
  int v28; // eax
  int v29; // ebx
  void (**v30)(int, const char *, ...); // esi
  int v31; // eax
  _DWORD *v32; // ecx
  void (__thiscall *v33)(char *, int); // ebx
  int v34; // ebp
  int v35; // eax
  void (__thiscall *v36)(char *, _DWORD, _DWORD); // ebx
  int v37; // ebp
  __int64 v38; // rax
  int v39; // ebp
  int (__thiscall **v40)(int, int); // ebx
  int v41; // eax
  int v42; // eax
  void (__thiscall *v43)(char *, _DWORD); // ebx
  int v44; // ebp
  void (__thiscall *v45)(char *, int); // ebx
  int v46; // ebp
  int v47; // eax
  void (__thiscall *v48)(char *, int); // ebx
  int v49; // ebp
  int v50; // eax
  void (__thiscall *v51)(char *, int); // ebx
  int v52; // ebp
  int v53; // eax
  int v54; // [esp+0h] [ebp-C4h]
  int v55; // [esp+0h] [ebp-C4h]
  int v56; // [esp+0h] [ebp-C4h]
  int v57; // [esp+0h] [ebp-C4h]
  int v58; // [esp+0h] [ebp-C4h]
  int v59; // [esp+0h] [ebp-C4h]
  int v60; // [esp+0h] [ebp-C4h]
  int v61; // [esp+0h] [ebp-C4h]
  float v62; // [esp+0h] [ebp-C4h]
  int v63; // [esp+24h] [ebp-A0h]
  int (__thiscall **v64)(int, int); // [esp+24h] [ebp-A0h]
  int (__thiscall **v65)(int, int); // [esp+28h] [ebp-9Ch]
  int v66; // [esp+28h] [ebp-9Ch]
  int *v67; // [esp+2Ch] [ebp-98h]
  int v68; // [esp+30h] [ebp-94h]
  void (__thiscall *v69)(char *, int, int); // [esp+34h] [ebp-90h]
  int v70; // [esp+38h] [ebp-8Ch]
  void (__thiscall *v71)(char *, int, int); // [esp+44h] [ebp-80h]
  int v72; // [esp+48h] [ebp-7Ch]
  void (__thiscall *v73)(char *, int, int); // [esp+54h] [ebp-70h]
  int v74; // [esp+58h] [ebp-6Ch]
  void (__thiscall *v75)(char *, int, int); // [esp+64h] [ebp-60h]
  int v76; // [esp+68h] [ebp-5Ch]
  void (__thiscall *v77)(char *, int, int); // [esp+74h] [ebp-50h]
  int v78; // [esp+78h] [ebp-4Ch]
  void (__thiscall *v79)(char *, int, int); // [esp+84h] [ebp-40h]
  int v80; // [esp+88h] [ebp-3Ch]
  void (__thiscall *v81)(char *, int, int); // [esp+94h] [ebp-30h]
  int v82; // [esp+98h] [ebp-2Ch]
  void (__thiscall *v83)(char *, int, int); // [esp+A4h] [ebp-20h]
  int v84; // [esp+A8h] [ebp-1Ch]
  void (__thiscall *v85)(char *, int, int); // [esp+B4h] [ebp-10h]
  int v86; // [esp+B8h] [ebp-Ch]

  v4 = a2;
  v5 = (*(int (__thiscall **)(char *))(*(_DWORD *)this + 108))(this);
  v67 = (int *)v5;
  v6 = 0;
  v68 = sub_10229A20(a2);
  if ( !*(_BYTE *)(v5 + 20) )
    sub_1023B630(v5);
  while ( !v6 )
  {
    v7 = v67[3];
    v8 = 0;
    if ( v7 > 0 )
    {
      v9 = *v67;
      while ( v68 != *(_DWORD *)(v9 + 52) )
      {
        ++v8;
        v9 += 64;
        if ( v8 >= v7 )
          goto LABEL_55;
      }
      v10 = *(_DWORD *)(v9 + 32);
      if ( !v10 )
      {
        (*(void (__thiscall **)(char *))(v9 + 16))(&this[*(_DWORD *)(v9 + 20)]);
        goto LABEL_54;
      }
      v11 = v10 - 1;
      if ( !v11 )
      {
        v32 = sub_10229C00(v4, *(_DWORD *)(v9 + 56));
        if ( !v32 )
          v32 = v4;
        switch ( *(_DWORD *)(v9 + 36) )
        {
          case 1:
            v45 = *(void (__thiscall **)(char *, int))(v9 + 16);
            v46 = *(_DWORD *)(v9 + 20);
            v47 = sub_1022B4C0(v32, 0, (int)Locale);
            v45(&this[v46], v47);
            break;
          case 2:
            v33 = *(void (__thiscall **)(char *, int))(v9 + 16);
            v34 = *(_DWORD *)(v9 + 20);
            v35 = sub_1022A800(v32, 0, 0);
            v33(&this[v34], v35);
            break;
          case 3:
            v43 = *(void (__thiscall **)(char *, _DWORD))(v9 + 16);
            v44 = *(_DWORD *)(v9 + 20);
            v62 = sub_1022A940(v32, 0, 0.0);
            v43(&this[v44], LODWORD(v62));
            break;
          case 4:
            goto LABEL_51;
          case 6:
            if ( *(_DWORD *)(v9 + 40) )
            {
LABEL_51:
              v51 = *(void (__thiscall **)(char *, int))(v9 + 16);
              v52 = *(_DWORD *)(v9 + 20);
              v53 = sub_1022A910(v32, 0, 0);
              v51(&this[v52], v53);
            }
            else
            {
              (*(void (__thiscall **)(char *, _DWORD *))(v9 + 16))(&this[*(_DWORD *)(v9 + 20)], v4);
            }
            break;
          case 7:
            v48 = *(void (__thiscall **)(char *, int))(v9 + 16);
            v49 = *(_DWORD *)(v9 + 20);
            v50 = sub_1022B600(v32, 0, (int)&unk_10302674);
            v48(&this[v49], v50);
            break;
          case 8:
            v36 = *(void (__thiscall **)(char *, _DWORD, _DWORD))(v9 + 16);
            v37 = *(_DWORD *)(v9 + 20);
            v38 = sub_1022A880(v32, 0, 0);
            v36(&this[v37], v38, HIDWORD(v38));
            break;
          case 9:
            v39 = dword_1047CA74;
            v40 = (int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA74 + 64);
            v41 = sub_1022A800(v32, 0, 0);
            v42 = (*v40)(v39, v41);
            (*(void (__thiscall **)(char *, int))(v9 + 16))(&this[*(_DWORD *)(v9 + 20)], v42);
            break;
          default:
            goto LABEL_54;
        }
        goto LABEL_54;
      }
      if ( v11 == 1 )
      {
        v12 = sub_10229C00(v4, *(_DWORD *)(v9 + 56));
        if ( !v12 )
          v12 = v4;
        v13 = sub_10229C00(v4, *(_DWORD *)(v9 + 60));
        if ( !v13 )
          v13 = a2;
        v14 = *(_DWORD *)(v9 + 36);
        if ( v14 == 2 && *(_DWORD *)(v9 + 44) == 2 )
        {
          v79 = *(void (__thiscall **)(char *, int, int))(v9 + 16);
          v80 = *(_DWORD *)(v9 + 20);
          v54 = sub_1022A800(v13, 0, 0);
          v15 = sub_1022A800(v12, 0, 0);
          v79(&this[v80], v15, v54);
        }
        else if ( v14 == 4 && *(_DWORD *)(v9 + 44) == 2 )
        {
          v85 = *(void (__thiscall **)(char *, int, int))(v9 + 16);
          v86 = *(_DWORD *)(v9 + 20);
          v55 = sub_1022A800(v13, 0, 0);
          v16 = sub_1022A910(v12, 0, 0);
          v85(&this[v86], v16, v55);
        }
        else
        {
          if ( v14 == 1 )
          {
            if ( *(_DWORD *)(v9 + 44) == 2 )
            {
              v69 = *(void (__thiscall **)(char *, int, int))(v9 + 16);
              v70 = *(_DWORD *)(v9 + 20);
              v56 = sub_1022A800(v13, 0, 0);
              v17 = sub_1022B4C0(v12, 0, (int)Locale);
              v69(&this[v70], v17, v56);
              goto LABEL_54;
            }
            if ( *(_DWORD *)(v9 + 44) == 1 )
            {
              v75 = *(void (__thiscall **)(char *, int, int))(v9 + 16);
              v76 = *(_DWORD *)(v9 + 20);
              v57 = sub_1022B4C0(v13, 0, (int)Locale);
              v18 = sub_1022B4C0(v12, 0, (int)Locale);
              v75(&this[v76], v18, v57);
              goto LABEL_54;
            }
          }
          if ( v14 != 2 || *(_DWORD *)(v9 + 44) != 1 )
          {
            if ( v14 == 4 )
            {
              if ( *(_DWORD *)(v9 + 44) == 1 )
              {
                v71 = *(void (__thiscall **)(char *, int, int))(v9 + 16);
                v72 = *(_DWORD *)(v9 + 20);
                v59 = sub_1022B4C0(v13, 0, (int)Locale);
                v20 = sub_1022A910(v12, 0, 0);
                v71(&this[v72], v20, v59);
                goto LABEL_54;
              }
              if ( *(_DWORD *)(v9 + 44) == 7 )
              {
                v73 = *(void (__thiscall **)(char *, int, int))(v9 + 16);
                v74 = *(_DWORD *)(v9 + 20);
                v60 = sub_1022B600(v13, 0, (int)&unk_10302674);
                v21 = sub_1022A910(v12, 0, 0);
                v73(&this[v74], v21, v60);
                goto LABEL_54;
              }
            }
            if ( v14 == 9 )
            {
              if ( *(_DWORD *)(v9 + 44) == 1 )
              {
                v63 = dword_1047CA74;
                v65 = (int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA74 + 64);
                v22 = sub_1022A800(v12, 0, 0);
                v23 = (*v65)(v63, v22);
                v77 = *(void (__thiscall **)(char *, int, int))(v9 + 16);
                v24 = v23;
                v78 = *(_DWORD *)(v9 + 20);
                v25 = sub_1022B4C0(v13, 0, (int)Locale);
                v77(&this[v78], v24, v25);
                goto LABEL_54;
              }
              if ( *(_DWORD *)(v9 + 44) == 7 )
              {
                v66 = dword_1047CA74;
                v64 = (int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA74 + 64);
                v26 = sub_1022A800(v12, 0, 0);
                v27 = (*v64)(v66, v26);
                v81 = *(void (__thiscall **)(char *, int, int))(v9 + 16);
                v82 = *(_DWORD *)(v9 + 20);
                v28 = sub_1022B600(v13, 0, (int)&unk_10302674);
                v81(&this[v82], v27, v28);
                goto LABEL_54;
              }
            }
            v29 = dword_1047CA74;
            v30 = (void (**)(int, const char *, ...))(*(_DWORD *)dword_1047CA74 + 48);
            v61 = (*(int (__thiscall **)(char *))(*(_DWORD *)this + 72))(this);
            v31 = sub_10229A00(a2);
            (*v30)(v29, "Message '%s', sent to '%s', has invalid parameter types\n", v31, v61);
            goto LABEL_54;
          }
          v83 = *(void (__thiscall **)(char *, int, int))(v9 + 16);
          v84 = *(_DWORD *)(v9 + 20);
          v58 = sub_1022B4C0(v13, 0, (int)Locale);
          v19 = sub_1022A800(v12, 0, 0);
          v83(&this[v84], v19, v58);
        }
      }
LABEL_54:
      v4 = a2;
      v6 = 1;
    }
LABEL_55:
    v67 = (int *)v67[6];
    if ( !v67 )
    {
      if ( !v6 )
        sub_10239F80(this, v4, a3);
      return;
    }
  }
}
