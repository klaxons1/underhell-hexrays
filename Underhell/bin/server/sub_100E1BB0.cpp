void __thiscall sub_100E1BB0(void *this)
{
  unsigned int v2; // eax
  unsigned int v3; // edi
  int *v4; // ecx
  int v5; // edx

  if ( (*((_BYTE *)this + 192) & 1) != 0 && !*((_BYTE *)this + 306) )
  {
    v2 = *((_DWORD *)this + 77);
    if ( v2 != -1
      && off_1061BE18[4 * (*((_DWORD *)this + 77) & 0xFFF) + 2] == v2 >> 12
      && off_1061BE18[4 * (*((_DWORD *)this + 77) & 0xFFF) + 1] )
    {
      (*(void (__thiscall **)(void *, _DWORD, int))(*(_DWORD *)this + 140))(this, 0, -1);
      v3 = *((_DWORD *)this + 48) & 0xFFFFFFFE;
      if ( *((_DWORD *)this + 48) != v3 )
      {
        if ( *((_BYTE *)this + 84) )
        {
          *((_BYTE *)this + 88) |= 1u;
        }
        else
        {
          v4 = (int *)*((_DWORD *)this + 6);
          if ( v4 )
            sub_100194B0(v4, 192);
        }
        *((_DWORD *)this + 48) = v3;
      }
      sub_101129A0(*((_WORD *)this + 178) & 0xFFFB);
      sub_100E0970((int)this, v5, 0, 0);
      sub_100E8D20(this);
    }
  }
}
