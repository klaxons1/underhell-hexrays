void *__thiscall sub_100EB510(void *this)
{
  int v2; // eax

  if ( (dword_10435BA0 & 1) == 0 )
    dword_10435BA0 |= 1u;
  sub_101EE350(&unk_10435B70);
  v2 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 4))(this);
  sub_101EDA20(v2, 3, &unk_10435B70);
  return &unk_10435B70;
}
