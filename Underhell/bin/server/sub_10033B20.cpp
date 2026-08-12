void __thiscall sub_10033B20(char *this)
{
  int *v2; // ecx
  float v3; // [esp+8h] [ebp-4h]

  *((float *)this + 685) = *(float *)(dword_106B31C8 + 12);
  sub_100B8D90(this + 2760);
  if ( (unsigned __int8)sub_100B8D10(this + 2760) )
    (*(void (__thiscall **)(char *))(*(_DWORD *)this + 1900))(this);
  v3 = sub_100B8D40(this + 2760);
  if ( *((_DWORD *)this + 418) != LODWORD(v3) )
  {
    if ( this[84] )
    {
      this[88] |= 1u;
      *((float *)this + 418) = v3;
    }
    else
    {
      v2 = (int *)*((_DWORD *)this + 6);
      if ( v2 )
        sub_100194B0(v2, 1672);
      *((float *)this + 418) = v3;
    }
  }
}
