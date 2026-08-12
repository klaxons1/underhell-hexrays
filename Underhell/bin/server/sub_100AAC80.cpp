char __thiscall sub_100AAC80(_DWORD **this, int a2)
{
  (*(void (__thiscall **)(_DWORD *, int))(*this[1] + 1444))(this[1], a2);
  *(_DWORD *)(a2 + 208) = this[1][52];
  this[1][52] = a2;
  return 1;
}
