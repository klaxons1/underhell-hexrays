void __thiscall sub_1025D700(int this)
{
  bool v2; // zf
  char v3; // al
  int v4; // eax
  int (__thiscall ***v5)(void *, _DWORD, int, int, int, int); // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // esi
  int v10; // edi
  int v11; // eax
  int v12; // esi
  int v13; // ebp
  int *v14; // eax
  int v15; // edi
  int v16; // ebx
  _DWORD *v17; // eax
  _DWORD *v18; // eax
  int v19; // ebp
  int *v20; // eax
  int v21; // edi
  int v22; // ebx
  _DWORD *v23; // eax
  _DWORD *v24; // eax
  _DWORD *v25; // ebx
  void (__thiscall **v26)(_DWORD *, int); // edi
  int v27; // eax
  int (__thiscall ***v28)(void *, int, int); // eax
  bool v29; // cc
  int (__thiscall ***v30)(void *, int, int); // eax
  int (__thiscall ***v31)(void *, int, int); // eax
  int (__thiscall ***v32)(void *, int, int); // eax
  int v33; // [esp+58h] [ebp-2Ch] BYREF
  int v34; // [esp+5Ch] [ebp-28h] BYREF
  int v35; // [esp+60h] [ebp-24h] BYREF
  int v36; // [esp+64h] [ebp-20h] BYREF
  int v37; // [esp+68h] [ebp-1Ch] BYREF
  int *v38; // [esp+6Ch] [ebp-18h]
  int *v39; // [esp+70h] [ebp-14h]
  int v40; // [esp+74h] [ebp-10h]
  int v41; // [esp+78h] [ebp-Ch] BYREF
  _BYTE v42[4]; // [esp+7Ch] [ebp-8h] BYREF
  _BYTE v43[4]; // [esp+80h] [ebp-4h] BYREF

  v2 = (*(_BYTE *)(this + 32) & 1) == 0;
  v40 = this;
  if ( !v2 && *(_DWORD *)(this + 24) <= (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA80 + 24))(dword_1047CA80) )
  {
    if ( sub_10237C80(dword_103FD3B0) )
    {
      v3 = *(_BYTE *)(this + 32);
      if ( (v3 & 4) != 0 )
      {
        *(_BYTE *)(this + 32) = v3 & 0xFB;
        v4 = sub_10237C80(dword_103FD3B0);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 124))(v4, 1);
        v5 = (int (__thiscall ***)(void *, _DWORD, int, int, int, int))sub_10237C80(dword_103FD3B0);
        sub_10237000(v5, 0, 1);
        v6 = sub_10237C80(dword_103FD3B0);
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 524))(v6, 0);
        v7 = sub_10237C80(dword_103FD3B0);
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 520))(v7, 0);
        v8 = sub_10237C80(dword_103FD3B0);
        v9 = dword_1047CA7C;
        v10 = *(_DWORD *)dword_1047CA7C;
        v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 80))(v8);
        v12 = (*(int (__thiscall **)(int, int))(v10 + 32))(v9, v11);
        v13 = sub_10237C80(dword_103FD3B0);
        v38 = (int *)sub_10237C80(dword_103FD3B0);
        v14 = (int *)sub_10237C80(dword_103FD3B0);
        v15 = *v14;
        v16 = *v38;
        v39 = v14;
        v17 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v13 + 224))(v13, v42);
        v18 = (_DWORD *)(*(int (__thiscall **)(int *, _BYTE *, const char *, _DWORD, int))(v16 + 324))(
                          v38,
                          v43,
                          "Tooltip.BgColor",
                          *v17,
                          v12);
        (*(void (__thiscall **)(int *, _DWORD))(v15 + 216))(v39, *v18);
        v19 = sub_10237C80(dword_103FD3B0);
        v39 = (int *)sub_10237C80(dword_103FD3B0);
        v20 = (int *)sub_10237C80(dword_103FD3B0);
        v21 = *v20;
        v22 = *v39;
        v38 = v20;
        v23 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v19 + 228))(v19, v43);
        v24 = (_DWORD *)(*(int (__thiscall **)(int *, _BYTE *, const char *, _DWORD, int))(v22 + 324))(
                          v39,
                          v42,
                          "Tooltip.TextColor",
                          *v23,
                          v12);
        (*(void (__thiscall **)(int *, _DWORD))(v21 + 220))(v38, *v24);
        v25 = (_DWORD *)sub_10237C80(dword_103FD3B0);
        v26 = (void (__thiscall **)(_DWORD *, int))(*v25 + 252);
        v27 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v12 + 8))(v12, "ToolTipBorder");
        (*v26)(v25, v27);
        (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)dword_1047CA68 + 28))(dword_1047CA68, &v34, &v33);
        sub_1025D4D0(v40, (int)v25);
        v28 = (int (__thiscall ***)(void *, int, int))sub_10237C80(dword_103FD3B0);
        sub_102361D0(v28, (int)&v36, (int)&v35);
        (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)dword_1047CA6C + 148))(dword_1047CA6C, &v41, &v37);
        if ( v41 - v36 <= v34 )
        {
          if ( v37 - v35 <= v33 )
          {
            v32 = (int (__thiscall ***)(void *, int, int))sub_10237C80(dword_103FD3B0);
            sub_10236140(v32, v34 - v36, v33 - v35 - 20);
          }
          else
          {
            v31 = (int (__thiscall ***)(void *, int, int))sub_10237C80(dword_103FD3B0);
            sub_10236140(v31, v34 - v36, v33);
          }
        }
        else
        {
          v29 = v37 - v35 <= v33 + 20;
          v33 += 20;
          v30 = (int (__thiscall ***)(void *, int, int))sub_10237C80(dword_103FD3B0);
          if ( v29 )
            sub_10236140(v30, v34, v33 - v35 - 20);
          else
            sub_10236140(v30, v34, v33);
        }
      }
    }
  }
}
