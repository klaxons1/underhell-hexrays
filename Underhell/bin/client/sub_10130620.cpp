int __thiscall sub_10130620(void *this, int a2, char a3, char a4, char a5)
{
  BYTE1(a2) = a3;
  BYTE2(a2) = a4;
  HIBYTE(a2) = a5;
  return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 220))(this, a2);
}
