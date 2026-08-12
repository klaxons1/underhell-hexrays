void *__thiscall sub_10179180(void *this)
{
  int v2; // eax

  if ( (dword_10445290 & 1) == 0 )
    dword_10445290 |= 1u;
  sub_101EE350(&unk_10445260);
  v2 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 4))(this);
  sub_101EDA20(v2, 3, &unk_10445260);
  return &unk_10445260;
}
