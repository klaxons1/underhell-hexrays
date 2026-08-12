void __thiscall sub_100C9650(float *this)
{
  int v2; // edi
  _DWORD *v3; // eax
  int i; // ebx
  int v5; // edi
  int (__thiscall *v6)(float *, char *); // edx
  _DWORD *v7; // eax
  bool v8; // al
  char v9[4]; // [esp+Ch] [ebp-8h] BYREF
  int v10; // [esp+10h] [ebp-4h] BYREF

  v2 = **((_DWORD **)this + 65);
  v3 = (_DWORD *)(*(int (__thiscall **)(float *, int *))(*(_DWORD *)this + 228))(this, &v10);
  (*(void (__thiscall **)(_DWORD *, _DWORD))(v2 + 220))(*((_DWORD **)this + 65), *v3);
  for ( i = 0; i < *((_DWORD *)this + 69); ++i )
  {
    v5 = **(_DWORD **)(*((_DWORD *)this + 66) + 4 * i);
    v6 = *(int (__thiscall **)(float *, char *))(*(_DWORD *)this + 228);
    v10 = *(_DWORD *)(*((_DWORD *)this + 66) + 4 * i);
    v7 = (_DWORD *)v6(this, v9);
    (*(void (__thiscall **)(int, _DWORD))(v5 + 220))(v10, *v7);
  }
  if ( 0.0 != this[80] && 1.0 != this[80] || *((_BYTE *)this + 316) )
  {
    v8 = this[80] != 0.0 && this[80] != 1.0;
    *((_BYTE *)this + 316) = v8;
    (*(void (__thiscall **)(float *, _DWORD, _DWORD))(*(_DWORD *)this + 244))(this, 0, 0);
  }
}
