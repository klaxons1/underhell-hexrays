int __thiscall sub_10267220(int this, int a2, char *Source, const char *a4, int a5, int a6, int a7, unsigned int a8)
{
  int *v9; // esi
  unsigned __int8 v10; // bl
  int v11; // esi
  int v12; // esi
  int (__thiscall ***v13)(void *, int); // ebp
  int v14; // eax
  int v15; // ebp
  int v16; // edx
  _DWORD *v17; // eax
  unsigned int v18; // ebx
  int v20; // [esp+0h] [ebp-20h]
  unsigned __int8 v21; // [esp+1Bh] [ebp-5h] BYREF
  int v22; // [esp+1Ch] [ebp-4h]

  v9 = (int *)(this + 216);
  v10 = sub_10267070((int *)(this + 216), 0xFFu);
  v20 = *(_DWORD *)(this + 252);
  v21 = v10;
  sub_10265530((int *)(this + 240), v20, &v21);
  sub_10265530((int *)(this + 260), a2, &v21);
  v11 = *v9;
  v22 = 72 * v10;
  v12 = v22 + v11;
  v13 = (int (__thiscall ***)(void *, int))sub_100DDA40(364);
  if ( v13 )
  {
    sub_1025C5C0((int)v13, (int (__thiscall ***)(_DWORD))this, Source, a4, 0, 0);
    *v13 = (int (__thiscall **)(void *, int))&ColumnButton::`vftable';
    sub_10238E80(v13, 1);
  }
  else
  {
    v13 = 0;
  }
  sub_10236050(v13);
  sub_102361A0((int (__thiscall ***)(void *, int, int))v13, a5, 24);
  (*v13)[43](v13, this);
  (*v13)[197](v13, 3);
  ((void (__thiscall *)(int (__thiscall ***)(void *, int), int, _DWORD))(*v13)[198])(v13, 5, 0);
  *(_DWORD *)(v12 + 4) = a6;
  *(_DWORD *)(v12 + 8) = a7;
  *(_DWORD *)v12 = v13;
  *(_BYTE *)(v12 + 12) = (a8 & 2) != 0;
  *(_BYTE *)(v12 + 24) = (a8 & 4) == 0;
  *(_BYTE *)(v12 + 25) = 0;
  *(_BYTE *)(v12 + 26) = (a8 & 0x10) != 0;
  *(_DWORD *)(v12 + 64) = 3;
  v14 = sub_100DDA40(220);
  if ( v14 )
    v15 = sub_102610F0(v14, a2);
  else
    v15 = 0;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v15 + 156))(v15, this);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v15 + 172))(v15, this);
  (*(void (__thiscall **)(int))(*(_DWORD *)v15 + 212))(v15);
  if ( a6 == a7 || (a8 & 1) != 0 )
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v15 + 768))(v15, 0);
  v16 = v22;
  *(_DWORD *)(v12 + 16) = v15;
  *(_DWORD *)(v12 + 20) = 0;
  v17 = (_DWORD *)(v16 + *(_DWORD *)(this + 216) + 28);
  if ( !*v17 )
    *v17 = sub_10261500;
  sub_10261E70((_DWORD *)this);
  sub_10266930((_DWORD *)this, a2);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 368) + 212))(*(_DWORD *)(this + 368));
  v18 = a8 >> 3;
  LOBYTE(v18) = ~(unsigned __int8)(a8 >> 3);
  (*(void (__thiscall **)(int, int, unsigned int))(*(_DWORD *)this + 832))(this, a2, v18 & 0xFFFFFF01);
  return (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)this + 244))(this, 0, 0);
}
