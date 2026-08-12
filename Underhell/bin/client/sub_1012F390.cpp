int __thiscall sub_1012F390(int this, int a2, int a3, int a4)
{
  int v5; // eax
  int result; // eax

  v5 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 144))(dword_1047CA6C, 1);
  *(_DWORD *)(this + 8) = v5;
  (*(void (__thiscall **)(int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)dword_1047CA6C + 124))(
    dword_1047CA6C,
    v5,
    a2,
    a3,
    a4,
    0,
    0);
  *(_DWORD *)(this + 20) = (int)((double)sub_10076740() * 0.0015625 * (double)a3);
  result = (int)((double)sub_10076720() * 0.002083333333333333 * (double)a4);
  *(_DWORD *)(this + 24) = result;
  *(_DWORD *)(this + 4) = -1;
  *(_BYTE *)(this + 28) = 1;
  return result;
}
