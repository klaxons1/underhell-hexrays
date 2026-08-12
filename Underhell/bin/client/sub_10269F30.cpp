int __thiscall sub_10269F30(int this, _DWORD *a2, char a3, char a4)
{
  int v5; // eax
  _DWORD *v6; // edi
  void *v7; // ecx
  int v8; // edi
  void (__thiscall *v9)(int, int); // eax
  _DWORD *v11; // [esp+8h] [ebp-4h] BYREF

  v5 = sub_100DDA40(324);
  if ( v5 )
    v6 = (_DWORD *)sub_102681A0(v5, (int (__thiscall ***)(_DWORD))this);
  else
    v6 = 0;
  v7 = (void *)v6[78];
  v11 = v6;
  if ( v7 )
    sub_1022AF00(v7);
  v6[78] = sub_1022AD00(a2);
  if ( *(_DWORD *)(this + 276) )
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*v6 + 816))(v6, *(_DWORD *)(this + 276));
  v8 = sub_10269ED0((_DWORD *)(this + 212), &v11);
  v9 = *(void (__thiscall **)(int, int))(*(_DWORD *)this + 780);
  a2 = (_DWORD *)v8;
  v9(this, v8);
  sub_100C2010((int *)(this + 248), *(_DWORD *)(this + 260), &a2);
  if ( a4 )
    *(_BYTE *)(this + 316) = 1;
  (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)this + 244))(this, 0, 0);
  if ( a3 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 804))(this, v8);
  return v8;
}
