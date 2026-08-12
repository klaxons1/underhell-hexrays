char __thiscall sub_1038E060(unsigned int this, int a2, char **a3, int a4)
{
  double v5; // st7
  char result; // al

  if ( a2 == dword_106E9D48 )
  {
    v5 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           dword_106B31E4,
           1.0,
           1.2);
    result = 1;
    *(float *)(this + 4300) = v5 + *(float *)(dword_106B31C8 + 12);
  }
  else if ( a2 == dword_106E9D4C )
  {
    *(_DWORD *)(this + 4336) = a3;
    return 1;
  }
  else if ( a2 == dword_106E9D50 )
  {
    sub_100AC120((_DWORD *)(this + 5160));
    return 1;
  }
  else if ( a2 == dword_106C1B60 )
  {
    if ( *(_BYTE *)(this + 2680) || *(_DWORD *)(this + 2324) == 4 )
      sub_1038B180((float *)this);
    else
      sub_10023CB0((char *)this, 77);
    if ( a3 )
    {
      if ( sub_100013F0(a3, "cupcop_can") )
        sub_1010DD80((_DWORD *)(this + 4396), this, 0.0);
    }
    return 1;
  }
  else
  {
    return sub_1001E230((void *)this, a2, (int)a3, a4);
  }
  return result;
}
