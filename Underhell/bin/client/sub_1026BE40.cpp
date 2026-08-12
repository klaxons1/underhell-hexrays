int __thiscall sub_1026BE40(int this, int a2)
{
  int v2; // edi
  unsigned int v4; // ebx
  _DWORD *v5; // eax
  unsigned int v6; // ebx
  _DWORD *v7; // eax
  int i; // eax
  int v9; // edi
  int v10; // eax
  _BYTE v12[4]; // [esp+2Ch] [ebp-4h] BYREF

  v2 = a2;
  sub_10241570((unsigned int *)this, a2);
  v4 = *(_DWORD *)this;
  v5 = (_DWORD *)(*(int (__thiscall **)(int, int *, const char *, int))(*(_DWORD *)this + 328))(
                   this,
                   &a2,
                   "Menu.TextColor",
                   v2);
  (*(void (__thiscall **)(int, _DWORD))(v4 + 220))(this, *v5);
  v6 = *(_DWORD *)this;
  v7 = (_DWORD *)(*(int (__thiscall **)(int, int *, const char *, int))(*(_DWORD *)this + 328))(
                   this,
                   &a2,
                   "Menu.BgColor",
                   v2);
  (*(void (__thiscall **)(int, _DWORD))(v6 + 216))(this, *v7);
  a2 = 0xFFFFFF;
  *(_DWORD *)(this + 376) = *(_DWORD *)(*(int (__thiscall **)(int, int *, const char *, int))(*(_DWORD *)v2 + 20))(
                                         v2,
                                         &a2,
                                         "BorderDark",
                                         0xFFFFFF);
  for ( i = *(_DWORD *)(this + 244); i != -1; i = *(_DWORD *)(*(_DWORD *)(this + 232) + v9 + 8) )
  {
    v9 = 12 * i;
    if ( (unsigned __int8)sub_1026F330(*(_DWORD *)(*(_DWORD *)(this + 232) + 12 * i)) )
    {
      sub_1026F280(&a2, v12);
      v10 = *(_DWORD *)(this + 364);
      if ( v10 <= a2 )
        v10 = a2;
      *(_DWORD *)(this + 364) = v10;
    }
  }
  *(_BYTE *)(this + 348) |= 4u;
  sub_1026BC10(this);
  return (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)this + 244))(this, 0, 0);
}
