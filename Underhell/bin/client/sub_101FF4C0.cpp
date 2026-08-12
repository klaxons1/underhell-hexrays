int __thiscall sub_101FF4C0(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = (*(int (__thiscall **)(_DWORD, int))(**((_DWORD **)off_103EE614 + 60) + 36))(
             *((_DWORD *)off_103EE614 + 60),
             (int)this + 81);
  this[53] = result;
  return result;
}
