int __thiscall sub_10287920(int *this, int a2, int a3)
{
  int v4; // edi
  int v5; // ebp
  int *v6; // eax
  int v8; // [esp-8h] [ebp-18h]

  if ( a2 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a2 + 156))(a2, this[67]);
  v4 = a3;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)a3 + 156))(a3, this[67]);
  v5 = sub_102878D0(this + 52);
  v6 = (int *)(this[52] + 16 * v5);
  v6[1] = a2;
  *v6 = v4;
  v8 = this[64];
  a3 = v5;
  sub_100C2010(this + 61, v8, &a3);
  (*(void (__thiscall **)(int *, _DWORD, _DWORD))(*this + 244))(this, 0, 0);
  return v5;
}
