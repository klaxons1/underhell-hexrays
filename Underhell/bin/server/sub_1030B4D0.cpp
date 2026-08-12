char *__thiscall sub_1030B4D0(int this)
{
  char *result; // eax
  int v3; // eax
  int v4; // edi

  sub_100397D0((int *)this);
  if ( *(_BYTE *)(this + 3630)
    && *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(this + 3632)
    && *(int *)(this + 3636) < 2 )
  {
    sub_10023CB0((char *)this, 76);
  }
  else
  {
    sub_10023E00((char *)this, 76);
  }
  sub_1030B240(this);
  if ( sub_100697A0((_DWORD *)this, 91, 1) && *(float *)(this + 2820) < (double)*(float *)(dword_106B31C8 + 12) )
  {
    sub_10023E00((char *)this, 73);
    sub_10023CB0((char *)this, 74);
    *(_DWORD *)(this + 3716) = -1;
  }
  result = (char *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
  if ( result )
  {
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
    v4 = v3;
    if ( (*(_DWORD *)(v3 + 252) & 0x800) != 0 )
      sub_100DAE60(v3);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    if ( sub_103098D0(this, (float *)(this + 580), (float *)(v4 + 580), COERCE_FLOAT(1), 0) )
      return sub_10023CB0((char *)this, 77);
    else
      return sub_10023E00((char *)this, 77);
  }
  return result;
}
