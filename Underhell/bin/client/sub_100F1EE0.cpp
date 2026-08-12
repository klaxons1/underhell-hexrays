void *__thiscall sub_100F1EE0(void *this)
{
  int v2; // eax

  if ( (dword_10435D58 & 1) == 0 )
    dword_10435D58 |= 1u;
  sub_101EE350(&unk_10435D28);
  v2 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 4))(this);
  sub_101EDA20(v2, 3, &unk_10435D28);
  return &unk_10435D28;
}
