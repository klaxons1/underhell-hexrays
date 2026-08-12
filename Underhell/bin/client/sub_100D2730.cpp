int __thiscall sub_100D2730(_DWORD *this, _DWORD *a2, int a3)
{
  int v4; // edi
  int v5; // eax
  int v6; // eax
  int result; // eax
  char v8; // [esp+48h] [ebp-8h]
  char v9; // [esp+4Ch] [ebp-4h]

  v8 = 1;
  v9 = 1;
  if ( sub_10034D10(a2) )
  {
    v4 = sub_10034F80(a2);
    v5 = sub_10034F40(a2, a3 - 1);
  }
  else
  {
    v4 = (int)a2;
    v8 = 0;
    v5 = (int)a2;
    v9 = 0;
  }
  this[66] = 0;
  sub_101096C0(0, v4, v8, v5, v9, 1, 1, 0, 1, sub_100D26F0);
  v6 = (*(int (__thiscall **)(_DWORD *))(*a2 + 60))(a2);
  sub_1010AF80(Locale, -1, v6);
  result = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*a2 + 8))(a2);
  this[68] = result;
  return result;
}
