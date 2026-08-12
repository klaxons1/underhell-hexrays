void __thiscall sub_10249390(int *this, int a2)
{
  _DWORD *v3; // ebp
  _DWORD *v4; // ecx
  bool v5; // al
  int v6; // eax
  _BYTE *v7; // eax
  const char *v8; // eax
  char *v9; // edi
  unsigned int v10; // kr00_4
  char *v11; // eax
  int v12; // eax
  int v13; // ebx
  int (__thiscall *v14)(int *); // eax
  int v15; // eax
  int v16; // eax
  int (__thiscall *v17)(int, int *, char *, _DWORD); // edx
  _BYTE *v18; // ebx
  int v19; // edi
  int (__thiscall *v20)(int *); // eax
  int v21; // eax
  int v22; // eax
  int v23; // edi
  int v24; // eax
  int v25; // [esp+0h] [ebp-24h]
  int v26; // [esp+14h] [ebp-10h] BYREF
  int v27; // [esp+18h] [ebp-Ch] BYREF
  int v28; // [esp+1Ch] [ebp-8h] BYREF
  int v29; // [esp+20h] [ebp-4h] BYREF

  sub_10034930(this[53]);
  sub_10034930(this[54]);
  v3 = (_DWORD *)a2;
  v4 = (_DWORD *)a2;
  this[53] = 0;
  this[54] = 0;
  *((_BYTE *)this + 220) = sub_1022A800(v4, "scaleImage", 0) != 0;
  *((float *)this + 56) = sub_1022A940(v3, "scaleAmount", 0.0);
  v5 = sub_1022A800(v3, "tileImage", 0) != 0;
  *((_BYTE *)this + 221) = v5;
  v6 = sub_1022A800(v3, "tileHorizontally", v5);
  v25 = *((unsigned __int8 *)this + 221);
  *((_BYTE *)this + 222) = v6 != 0;
  *((_BYTE *)this + 223) = sub_1022A800(v3, "tileVertically", v25) != 0;
  v7 = (_BYTE *)sub_1022B4C0(v3, "image", (int)Locale);
  if ( *v7 )
    (*(void (__thiscall **)(int *, _BYTE *))(*this + 768))(this, v7);
  v8 = (const char *)sub_1022B4C0(v3, "fillcolor", (int)Locale);
  v9 = (char *)v8;
  if ( *v8 )
  {
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v29 = 255;
    v10 = strlen(v8);
    v11 = (char *)sub_100DDA40(v10 + 1);
    this[54] = (int)v11;
    sub_102282F0(v11, v9, v10 + 1);
    if ( sscanf(v9, "%d %d %d %d", &v26, &v27, &v28, &v29) < 3 )
    {
      v13 = dword_1047CA7C;
      v14 = *(int (__thiscall **)(int *))(*this + 80);
      a2 = *(_DWORD *)dword_1047CA7C;
      v15 = v14(this);
      v16 = (*(int (__thiscall **)(int, int))(a2 + 32))(v13, v15);
      v17 = *(int (__thiscall **)(int, int *, char *, _DWORD))(*(_DWORD *)v16 + 20);
      a2 = 0;
      v12 = *(_DWORD *)v17(v16, &a2, v9, 0);
    }
    else
    {
      LOBYTE(a2) = v26;
      BYTE1(a2) = v27;
      BYTE2(a2) = v28;
      HIBYTE(a2) = v29;
      v12 = a2;
    }
    this[57] = v12;
  }
  v18 = (_BYTE *)sub_1022B4C0(v3, "border", (int)Locale);
  if ( *v18 )
  {
    v19 = dword_1047CA7C;
    v20 = *(int (__thiscall **)(int *))(*this + 80);
    a2 = *(_DWORD *)dword_1047CA7C;
    v21 = v20(this);
    v22 = (*(int (__thiscall **)(int, int))(a2 + 32))(v19, v21);
    v23 = *this;
    v24 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v22 + 8))(v22, v18);
    (*(void (__thiscall **)(int *, int))(v23 + 252))(this, v24);
  }
  sub_10241C00(this, v3);
}
