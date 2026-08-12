int __thiscall sub_100427C0(_DWORD *this, int a2, _DWORD *a3, int a4)
{
  int v5; // eax
  int v6; // ecx
  int v7; // edx
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
  if ( (a3[63] & 0x800) != 0 )
    sub_100DAE60(a3);
  v5 = a3[145];
  v6 = a3[146];
  *(float *)&v11[7] = -1.0;
  v7 = a3[147];
  *(float *)&v11[8] = -1.0;
  v11[0] = v5;
  v11[1] = v6;
  v11[4] = a4;
  v11[2] = v7;
  v8 = *(void (__thiscall **)(_DWORD *, _DWORD *, _DWORD *))(*this + 2040);
  v11[10] = dword_10601B78;
  v10 = 4;
  v11[3] = -1;
  v11[5] = -1;
  v11[6] = -1;
  v11[9] = 1;
  v8(this, a3, v11);
  return (*(int (__thiscall **)(_DWORD, int *, _DWORD))(*(_DWORD *)this[647] + 20))(this[647], &v10, 0);
}
