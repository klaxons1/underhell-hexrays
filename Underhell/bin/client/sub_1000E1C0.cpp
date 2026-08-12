int __thiscall sub_1000E1C0(_DWORD *this, int *a2, int a3, int a4)
{
  int v5; // edi
  int v6; // ecx
  int v7; // eax
  int v8; // edx
  int result; // eax
  int v10; // eax
  int v11; // eax
  int v12; // [esp-4h] [ebp-28h]
  int v13; // [esp-4h] [ebp-28h]
  int v14[3]; // [esp+18h] [ebp-Ch] BYREF

  v5 = (*(int (__thiscall **)(_DWORD *))(*this + 116))(this);
  v6 = *a2;
  v7 = a2[2];
  v14[1] = a2[1];
  v8 = *this;
  v14[0] = v6;
  v14[2] = v7;
  result = (*(int (__thiscall **)(_DWORD *))(v8 + 108))(this);
  if ( a4 == 1 )
  {
    v13 = result;
    v11 = (*(int (__thiscall **)(_DWORD *))(this[2] + 36))(this + 2);
    return sub_1012D0B0((int)v14, a3 + 12, v11, v13, 0.0, 0, v5, 0);
  }
  else if ( a4 == 4 )
  {
    v12 = result;
    v10 = (*(int (**)(void))(this[2] + 36))();
    return sub_1012D0B0((int)v14, a3 + 12, v10, v12, 0.0, 1, v5, 0);
  }
  return result;
}
