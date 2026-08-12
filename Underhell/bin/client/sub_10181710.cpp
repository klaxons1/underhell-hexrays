bool __thiscall sub_10181710(int this, int a2)
{
  bool result; // al

  sub_10236550(a2);
  sub_1023A780(1);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 272) + 152))(*(_DWORD *)(this + 272), a2);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 312) + 516))(*(_DWORD *)(this + 312), 1);
  result = a2 != 0;
  *(_BYTE *)(this + 296) = a2 != 0;
  return result;
}
