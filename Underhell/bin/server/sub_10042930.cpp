int __thiscall sub_10042930(_DWORD *this, int a2, _DWORD *a3, int a4)
{
  int v5; // eax
  int v6; // edx
  int v7; // ecx
  void (__thiscall *v8)(_DWORD *, _DWORD *, _DWORD *); // edx
  int v10; // [esp+Ch] [ebp-30h] BYREF
  _DWORD v11[11]; // [esp+10h] [ebp-2Ch] BYREF

  if ( !this[581] )
    this[581] = this[584];
  sub_100457E0(a2);
  if ( a3 )
    this[652] = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*a3 + 8))(a3);
  else
    this[652] = -1;
  v5 = a3[180];
  v6 = a3[179];
  *(float *)&v11[7] = -1.0;
  v7 = a3[181];
  *(float *)&v11[8] = -1.0;
  v11[1] = v5;
  v11[0] = v6;
  v11[10] = dword_10601B78;
  v11[4] = a4;
  v8 = *(void (__thiscall **)(_DWORD *, _DWORD *, _DWORD *))(*this + 2040);
  v11[2] = v7;
  v10 = 3;
  v11[3] = -1;
  v11[5] = -1;
  v11[6] = -1;
  v11[9] = 1;
  v8(this, a3, v11);
  return (*(int (__thiscall **)(_DWORD, int *, _DWORD))(*(_DWORD *)this[647] + 20))(this[647], &v10, 0);
}
