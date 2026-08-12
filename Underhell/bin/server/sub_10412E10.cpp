_DWORD *__thiscall sub_10412E10(void *this, _DWORD *a2, int a3, int a4)
{
  _DWORD *v5; // eax

  if ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 240))(dword_106B3CDC) == 2 )
  {
    v5 = (_DWORD *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 576))(this);
    *a2 = *v5;
    a2[1] = v5[1];
    a2[2] = v5[2];
  }
  else
  {
    sub_10381D20(this, a2, a3, a4);
  }
  return a2;
}
