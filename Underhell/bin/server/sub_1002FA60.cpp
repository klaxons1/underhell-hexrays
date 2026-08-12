_DWORD *__thiscall sub_1002FA60(float *this)
{
  int (__thiscall *v2)(float *); // edx
  _DWORD *result; // eax
  unsigned int v4; // eax
  int (__thiscall *v5)(float *); // eax
  bool v6; // al
  const char *v7; // eax

  sub_10081C10(*((_DWORD *)this + 647));
  sub_10044510("Restoring NPC");
  v2 = *(int (__thiscall **)(float *))(*(_DWORD *)this + 368);
  this[593] = 0.0;
  result = (_DWORD *)v2(this);
  if ( !result )
  {
    result = this + 548;
    if ( this != (float *)-2192 )
    {
      *result = 0;
      this[549] = 0.0;
      this[550] = 0.0;
      this[551] = 0.0;
      this[552] = 0.0;
      this[553] = 0.0;
      this[554] = 0.0;
      this[555] = 0.0;
    }
  }
  if ( *((_DWORD *)this + 581) == 4 )
  {
    v4 = *((_DWORD *)this + 672);
    if ( v4 == -1
      || (result = (_DWORD *)(v4 >> 12), (_DWORD *)off_1061BE18[4 * ((_DWORD)this[672] & 0xFFF) + 2] != result)
      || !off_1061BE18[4 * ((_DWORD)this[672] & 0xFFF) + 1] )
    {
      v5 = *(int (__thiscall **)(float *))(*(_DWORD *)this + 368);
      this[582] = *(float *)(dword_106B31C8 + 12);
      if ( v5(this) )
      {
        sub_100285C0(this, 0, 1);
        DevMsg(2, "Stripped\n");
      }
      v6 = *((_DWORD *)this + 581) != 1;
      *((_DWORD *)this + 581) = 1;
      if ( *((_DWORD *)this + 584) != 1 )
        *((_DWORD *)this + 584) = 1;
      if ( v6 )
        (*(void (__thiscall **)(float *, int, int))(*(_DWORD *)this + 1404))(this, 4, 1);
      if ( *((_DWORD *)this + 584) != 1 )
        *((_DWORD *)this + 584) = 1;
      v7 = (const char *)sub_100D6390(this);
      return (_DWORD *)DevMsg(1, "Scripted Sequence stripped on level transition for %s\n", v7);
    }
  }
  return result;
}
