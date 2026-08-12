int __thiscall sub_100CA9A0(int *this)
{
  int result; // eax

  sub_100C9C00(this - 51, 0);
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 36))(dword_1044CC48);
  result = sub_10248C80("HintMessageHide");
  *((_BYTE *)this + 112) = 1;
  return result;
}
