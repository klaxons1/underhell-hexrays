int __thiscall sub_1014BE60(float *this)
{
  int v2; // edi
  int v3; // edx
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  _DWORD v8[4]; // [esp+34h] [ebp-18h] BYREF
  _DWORD v9[2]; // [esp+44h] [ebp-8h] BYREF

  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  if ( v2 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 8))(v2);
  (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413168 + 120))(dword_10413168, *((_DWORD *)this - 7), 1);
  (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v2 + 208))(v2, v9);
  (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)v2 + 292))(
    v2,
    v9[0],
    *(_DWORD *)((char *)v9 + 1),
    *(_DWORD *)((char *)v9 + 2),
    255);
  sub_1014B3A0(this, v2, *(this - 10), *((_DWORD *)this + 33), COERCE_INT(*(this - 9)), -1);
  sub_10149570();
  sub_1014B480((int *)this, *(this - 10), 4, *(this - 9));
  v3 = *((_DWORD *)this + 3);
  v4 = *((_DWORD *)this + 4);
  *(float *)v8 = this[2];
  v5 = *((_DWORD *)this + 5);
  v8[1] = v3;
  v8[2] = v4;
  v8[3] = v5;
  v6 = sub_101164B0();
  (*(void (__thiscall **)(int, int, _DWORD, _DWORD *, _DWORD))(*(_DWORD *)v2 + 444))(v2, v6, 0, v8, 0);
  (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 4))(v2);
}
