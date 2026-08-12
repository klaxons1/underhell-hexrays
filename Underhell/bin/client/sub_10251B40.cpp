void __thiscall sub_10251B40(_DWORD **this, int a2)
{
  int v3; // eax

  if ( this[86] )
  {
    v3 = (*(int (__thiscall **)(_DWORD *))(*this[86] + 772))(this[86]);
    (*(void (__thiscall **)(_DWORD *, int))(*this[86] + 768))(this[86], v3 - 3 * a2);
  }
}
