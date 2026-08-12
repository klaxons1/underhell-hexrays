int __thiscall sub_101E3BA0(void *this, void *a2, int a3)
{
  int result; // eax

  result = (int)this;
  if ( a2 != this )
    return (*(int (__thiscall **)(int, void *, void *, int))(*(_DWORD *)off_10627F88 + 92))(off_10627F88, this, a2, a3);
  return result;
}
