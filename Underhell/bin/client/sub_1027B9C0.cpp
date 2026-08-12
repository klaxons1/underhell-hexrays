int __thiscall sub_1027B9C0(_BYTE *this)
{
  int v2; // eax
  bool v3; // zf
  int v4; // edi
  int i; // ebp
  _DWORD *v6; // ebx
  void (__thiscall **v7)(_DWORD *, int); // edi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // ebx
  int v12; // ebx
  char *v13; // eax
  int v14; // ecx
  int (__thiscall *v15)(int, int, int); // edx
  char *v16; // ebp
  int v17; // eax
  int v18; // ecx
  int v19; // edx
  int v20; // edi
  int v21; // ebp
  int v22; // eax
  _DWORD *v23; // eax
  void (__thiscall **v24)(int, int); // ebp
  int v25; // eax
  char *v26; // eax
  char *v27; // ebp
  int v28; // ebp
  int v29; // edx
  int v30; // eax
  void (__thiscall *v31)(int, _DWORD); // edx
  int v32; // ebp
  int v33; // eax
  void (__thiscall **v34)(int, _DWORD); // ebp
  _DWORD *v35; // eax
  int v36; // ebp
  int v37; // edi
  int v39; // [esp+50h] [ebp-40h]
  int v40; // [esp+50h] [ebp-40h]
  int v41; // [esp+68h] [ebp-28h]
  int v42; // [esp+6Ch] [ebp-24h] BYREF
  char *Str; // [esp+70h] [ebp-20h]
  int v44; // [esp+74h] [ebp-1Ch] BYREF
  int v45; // [esp+78h] [ebp-18h]
  int v46; // [esp+7Ch] [ebp-14h]
  int v47; // [esp+80h] [ebp-10h]
  int v48; // [esp+84h] [ebp-Ch] BYREF
  int v49; // [esp+88h] [ebp-8h]
  char v50[4]; // [esp+8Ch] [ebp-4h] BYREF

  v2 = (*(int (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 72) + 832))(
         *((_DWORD *)this + 72),
         *((_DWORD *)this + 74));
  v3 = *((_DWORD *)this + 75) == 0;
  v4 = v2;
  v46 = v2;
  if ( v3 || v2 < 1 )
  {
    (*(void (__thiscall **)(_BYTE *, const char *))(*(_DWORD *)this + 772))(this, "< unset >");
  }
  else
  {
    if ( v2 != (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 848))(this) )
    {
      for ( i = 0; i < v4; ++i )
      {
        if ( ((*(int (__thiscall **)(_DWORD, _DWORD, int))(**((_DWORD **)this + 72) + 844))(
                *((_DWORD *)this + 72),
                *((_DWORD *)this + 74),
                i)
            & 2) == 0 )
        {
          if ( sub_100DDA40(100) )
            v6 = (_DWORD *)sub_1027D150(Locale);
          else
            v6 = 0;
          v39 = *((_DWORD *)this + 86);
          v42 = (int)v6;
          sub_10258C50((int *)this + 83, v39, &v42);
          v7 = (void (__thiscall **)(_DWORD *, int))(*v6 + 128);
          v8 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 820))(this);
          (*v7)(v6, v8);
          v9 = (*(int (__thiscall **)(_DWORD, _DWORD, int))(**((_DWORD **)this + 72) + 852))(
                 *((_DWORD *)this + 72),
                 *((_DWORD *)this + 74),
                 i);
          if ( v9 )
            sub_1027D090(1, v9);
          (*(void (__thiscall **)(_BYTE *, int, _DWORD *, _DWORD))(*(_DWORD *)this + 836))(this, i, v6, 0);
          v4 = v46;
        }
      }
      v10 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 848))(this);
      if ( v10 < v4 )
      {
        v11 = v4 - v10;
        do
        {
          (*(void (__thiscall **)(_BYTE *, _DWORD, _DWORD))(*(_DWORD *)this + 832))(this, 0, 0);
          --v11;
        }
        while ( v11 );
      }
    }
    v12 = 0;
    v41 = 0;
    if ( v4 > 0 )
    {
      do
      {
        v13 = (char *)(*(int (__thiscall **)(_DWORD, _DWORD, int))(**((_DWORD **)this + 72) + 836))(
                        *((_DWORD *)this + 72),
                        *((_DWORD *)this + 74),
                        v12);
        v14 = *((_DWORD *)this + 72);
        v15 = *(int (__thiscall **)(int, int, int))(*(_DWORD *)v14 + 844);
        v16 = v13;
        v40 = *((_DWORD *)this + 74);
        Str = v13;
        v17 = v15(v14, v40, v12);
        v18 = *((_DWORD *)this + 72);
        v19 = *((_DWORD *)this + 74);
        v42 = v17;
        v45 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v18 + 848))(v18, v19, v12);
        v20 = 0;
        v49 = v42 & 2;
        if ( (v42 & 2) != 0 )
        {
          if ( *(_DWORD *)(*((_DWORD *)this + 72) + 348) )
          {
            v21 = sub_1022A800(*((_DWORD **)this + 75), v16, 0);
            if ( sub_10279000(*(_DWORD **)(*((_DWORD *)this + 72) + 348), v21) )
            {
              if ( v21 > 0 )
              {
                v20 = sub_10279020(*(_DWORD **)(*((_DWORD *)this + 72) + 348), v21);
                (*(void (__thiscall **)(_BYTE *, int, int, _DWORD))(*(_DWORD *)this + 836))(this, v12, v20, 0);
              }
            }
          }
          goto LABEL_39;
        }
        v22 = (*(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 844))(this, v12);
        v23 = (_DWORD *)__RTDynamicCast(
                          v22,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&vgui::IImage `RTTI Type Descriptor',
                          (int)&vgui::TextImage `RTTI Type Descriptor',
                          0);
        v20 = (int)v23;
        if ( v23 )
        {
          v24 = (void (__thiscall **)(int, int))(*v23 + 108);
          v25 = sub_1022B4C0(*((_DWORD **)this + 75), Str, (int)Locale);
          (*v24)(v20, v25);
          sub_1027D580(v45);
          v26 = (char *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA68 + 16))(dword_1047CA68);
          v3 = this[353] == 0;
          v27 = v26;
          Str = v26;
          if ( !v3 )
          {
            if ( !this[352]
              || !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)this + 240))(this)
              && (!v27
               || (v32 = *(_DWORD *)dword_1047CA70,
                   v47 = dword_1047CA70,
                   v33 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 148))(this),
                   !(*(unsigned __int8 (__thiscall **)(int, char *, int))(v32 + 88))(v47, Str, v33))) )
            {
              v34 = (void (__thiscall **)(int, _DWORD))(*(_DWORD *)v20 + 20);
              v35 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, char *))(*(_DWORD *)this + 228))(this, v50);
              (*v34)(v20, *v35);
              goto LABEL_39;
            }
LABEL_37:
            (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v20 + 20))(v20, *((_DWORD *)this + 79));
            goto LABEL_39;
          }
          if ( !this[352]
            || (*(unsigned __int8 (__thiscall **)(_DWORD))(**((_DWORD **)this + 72) + 912))(*((_DWORD *)this + 72)) )
          {
            v31 = *(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v20 + 20);
            if ( (v42 & 4) != 0 )
              v31(v20, *((_DWORD *)this + 78));
            else
              v31(v20, *((_DWORD *)this + 76));
            goto LABEL_39;
          }
          if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)this + 240))(this) )
            goto LABEL_37;
          if ( v27 )
          {
            v28 = *(_DWORD *)dword_1047CA70;
            v29 = *(_DWORD *)this;
            v47 = dword_1047CA70;
            v30 = (*(int (__thiscall **)(_BYTE *))(v29 + 148))(this);
            if ( (*(unsigned __int8 (__thiscall **)(int, char *, int))(v28 + 88))(v47, Str, v30) )
              goto LABEL_37;
          }
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v20 + 20))(v20, *((_DWORD *)this + 80));
        }
LABEL_39:
        v36 = 0;
        v44 = 0;
        v48 = 0;
        if ( v20 )
        {
          (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)v20 + 8))(v20, &v44, &v48);
          v36 = v44;
        }
        v37 = v45;
        if ( v45 < 0 )
          v37 = v36;
        if ( v12 || v49 )
        {
          if ( (v42 & 8) != 0 )
          {
            (*(void (__thiscall **)(_BYTE *, int, int, int))(*(_DWORD *)this + 860))(
              this,
              v12,
              v41 + v37 / 2 - v36 / 2,
              v37 - (v37 / 2 - v36 / 2) - 2);
          }
          else if ( (v42 & 0x10) != 0 )
          {
            (*(void (__thiscall **)(_BYTE *, int, int, int))(*(_DWORD *)this + 860))(
              this,
              v12,
              v41 + v37 - v36,
              v37 - 2);
          }
          else
          {
            (*(void (__thiscall **)(_BYTE *, int, int, int))(*(_DWORD *)this + 860))(this, v12, v41, v37 - 2);
          }
        }
        else
        {
          (*(void (__thiscall **)(_BYTE *, _DWORD, int, int))(*(_DWORD *)this + 860))(this, 0, v41 + 6, v37 - 8);
        }
        v41 += v37;
        ++v12;
      }
      while ( v12 < v46 );
    }
  }
  return sub_1024AD80((int)this);
}
