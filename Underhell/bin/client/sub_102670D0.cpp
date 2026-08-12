int __thiscall sub_102670D0(int this, _DWORD *a2, _DWORD *a3, char a4, char a5)
{
  int v6; // eax
  int *v7; // esi
  int v8; // ebp
  int v10; // [esp-8h] [ebp-1Ch]
  int *v11; // [esp+10h] [ebp-4h] BYREF

  v6 = sub_100DDA40(60);
  if ( v6 )
  {
    *(_DWORD *)v6 = 0;
    *(_DWORD *)(v6 + 4) = 0;
    *(_DWORD *)(v6 + 8) = 0;
    *(_BYTE *)(v6 + 12) = 0;
    *(_DWORD *)(v6 + 24) = 0;
    *(_DWORD *)(v6 + 16) = -1;
    *(_DWORD *)(v6 + 20) = -1;
    *(_DWORD *)(v6 + 28) = 0;
    *(_DWORD *)(v6 + 32) = 0;
    *(_DWORD *)(v6 + 36) = 0;
    *(_DWORD *)(v6 + 40) = 0;
    *(_DWORD *)(v6 + 44) = 0;
    v7 = (int *)v6;
  }
  else
  {
    v7 = 0;
  }
  v11 = v7;
  *v7 = sub_1022AD00(a2);
  v7[1] = (int)a3;
  v7[2] = 0;
  *((_BYTE *)v7 + 12) = sub_1022A800((_DWORD *)*v7, "image", 0) != 0;
  v7[4] = sub_1022A800((_DWORD *)*v7, "image", 0);
  v7[5] = sub_1022A800((_DWORD *)*v7, "imageSelected", 0);
  v7[6] = sub_1022A910((_DWORD *)*v7, "iconImage", 0);
  v8 = sub_10269ED0(&v11);
  v10 = *(_DWORD *)(this + 336);
  a2 = (_DWORD *)v8;
  a2 = (_DWORD *)sub_100C2010((int *)(this + 324), v10, &a2);
  *((_BYTE *)v7 + 48) = 1;
  sub_10266B30((_DWORD *)this, v8);
  if ( a5 )
    *(_BYTE *)(this + 376) |= 1u;
  (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)this + 244))(this, 0, 0);
  if ( a4 )
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(this + 368) + 768))(*(_DWORD *)(this + 368), a2);
  return v8;
}
