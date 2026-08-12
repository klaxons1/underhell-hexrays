_DWORD *__thiscall sub_102A0250(int *this, const char *a2)
{
  int v2; // eax

  v2 = this[4];
  if ( v2 == 1 || v2 == 3 )
    return (_DWORD *)Warning("ClearSchedule rejected due to transitioning passenger: %s\n", a2);
  else
    return sub_10044510(this[1], (int)a2);
}
