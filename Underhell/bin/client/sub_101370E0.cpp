void *__thiscall sub_101370E0(void *this)
{
  int v2; // eax

  if ( (dword_1043A104 & 1) == 0 )
    dword_1043A104 |= 1u;
  sub_101EE350(&unk_1043A0D4);
  v2 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 4))(this);
  sub_101EDA20(v2, 3, &unk_1043A0D4);
  return &unk_1043A0D4;
}
