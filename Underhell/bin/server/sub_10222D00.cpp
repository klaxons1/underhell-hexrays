int __thiscall sub_10222D00(_DWORD *this, int a2)
{
  int v2; // edi
  int i; // esi

  v2 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  sub_10170090();
  this[2] = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106BAFE8 + 32))(dword_106BAFE8);
  for ( i = sub_1012BC10(&dword_1069E3E0, 0); i; i = sub_1012BC10(&dword_1069E3E0, i) )
    (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)i + 180))(i, this + 1);
  sub_10222850(a2);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 104))(v2);
}
