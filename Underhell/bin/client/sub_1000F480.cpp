int __thiscall sub_1000F480(_DWORD *this, int a2, int a3, char a4, int a5)
{
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // edi
  int v11; // [esp-Ch] [ebp-18h]
  int v12; // [esp-8h] [ebp-14h]

  (*(void (__thiscall **)(_DWORD *))(*this + 232))(this);
  sub_1008FA90(a2);
  sub_1008FB60(a3);
  if ( !a2 )
    return 0;
  v12 = (*(int (__thiscall **)(_DWORD *))(*this + 40))(this);
  v7 = (*(int (__thiscall **)(_DWORD *))(*this + 36))(this);
  v8 = sub_10034480(this, v7);
  v9 = sub_10101C50(this, v8, v11, v12, a5);
  v10 = v9;
  if ( v9 )
  {
    sub_1000F430(this, v9);
    sub_10035C70(6, 0);
    if ( !a4 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 96))(v10);
  }
  return v10;
}
