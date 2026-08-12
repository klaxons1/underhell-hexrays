int *__thiscall sub_1002F7B0(float *this)
{
  int *result; // eax
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  int v5; // eax

  sub_10043CE0();
  (*(void (__thiscall **)(_DWORD *))(**((_DWORD **)this + 647) + 32))(*((_DWORD **)this + 647));
  this[640] = 0.0;
  sub_1004AF00(this);
  sub_10081C10(*((_DWORD *)this + 647));
  result = (int *)*((_DWORD *)this + 602);
  if ( result[4] )
  {
    result[4] = 0;
    result = (int *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 1440))(this);
  }
  if ( ((_DWORD)this[679] & 0x400) != 0 )
  {
    v3 = *((_DWORD *)this + 722);
    if ( v3 != -1 )
    {
      result = &off_1061BE18[4 * ((_DWORD)this[722] & 0xFFF) + 1];
      v4 = v3 >> 12;
      if ( off_1061BE18[4 * ((_DWORD)this[722] & 0xFFF) + 2] == v4 )
      {
        if ( *result )
        {
          if ( off_1061BE18[4 * ((_DWORD)this[722] & 0xFFF) + 2] == v4 )
            v5 = *result;
          else
            v5 = 0;
          (*(void (__thiscall **)(float *, _DWORD))(*(_DWORD *)this + 2064))(this, *(__int16 *)(v5 + 816));
          sub_10070510(0.0);
          return (int *)sub_100448D0(0);
        }
      }
    }
  }
  return result;
}
