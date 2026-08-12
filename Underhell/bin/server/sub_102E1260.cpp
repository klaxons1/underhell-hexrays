char __thiscall sub_102E1260(void *this, int a2)
{
  char result; // al
  int (*v4)(void); // edx
  int v5; // edi
  int *v6; // ecx

  result = *((_BYTE *)this + 5061);
  if ( !result )
  {
    if ( *((_BYTE *)this + 2172) )
      goto LABEL_6;
    goto LABEL_5;
  }
  if ( !*((_BYTE *)this + 5040) )
  {
LABEL_5:
    v4 = *(int (**)(void))(*(_DWORD *)this + 1304);
    v5 = *((_DWORD *)this + 1038);
    *((_DWORD *)this + 1038) = 100;
    result = v4();
    *((_DWORD *)this + 1038) = v5;
  }
LABEL_6:
  if ( *((_BYTE *)this + 5040) != 1 )
  {
    result = (char)this;
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
      *((_BYTE *)this + 5040) = 1;
    }
    else
    {
      v6 = (int *)*((_DWORD *)this + 6);
      if ( v6 )
        result = sub_100194B0(v6, 5040);
      *((_BYTE *)this + 5040) = 1;
    }
  }
  return result;
}
