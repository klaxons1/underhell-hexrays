char *__thiscall sub_10372C70(int this)
{
  char *result; // eax
  int v3; // eax
  int v4; // eax

  result = (char *)sub_1001E3F0((_DWORD *)this);
  if ( !*(_BYTE *)(this + 224) )
  {
    if ( sub_100697A0((_DWORD *)this, 89, 0) && *(float *)(this + 4200) > (double)*(float *)(dword_106B31C8 + 12) )
    {
      sub_1002ACE0((_DWORD *)this);
      sub_10024230((char *)this, 18);
    }
    else if ( sub_100697A0((_DWORD *)this, 89, 0) && *(_DWORD *)(this + 2372) == 2 )
    {
      sub_10024290((char *)this, 21);
      sub_10024290((char *)this, 22);
    }
    else if ( !*(_BYTE *)(this + 4597)
           && sub_100697A0((_DWORD *)this, 95, 0)
           && (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this)
           && sub_10023D10((_DWORD *)this, 22)
           && -1.0 != *(float *)(this + 4600)
           && *(float *)(dword_106B31C8 + 12) - *(float *)(this + 4600) >= 2.0 )
    {
      sub_10024230((char *)this, 22);
    }
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
    if ( !v3 || (v4 = *(_DWORD *)(v3 + 92), v4 != dword_106E8514) && v4 != dword_106E8510 )
      sub_10024230((char *)this, 80);
    if ( !(*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) )
      sub_10024230((char *)this, 84);
    if ( !sub_100697A0((_DWORD *)this, 91, 0)
      && !sub_100697A0((_DWORD *)this, 101, 0)
      && !sub_100697A0((_DWORD *)this, 6, 0) )
    {
      sub_10024230((char *)this, 81);
      sub_10024230((char *)this, 57);
      sub_10024230((char *)this, 75);
    }
    sub_10024230((char *)this, 74);
    sub_10024230((char *)this, 78);
    return sub_10024230((char *)this, 77);
  }
  return result;
}
