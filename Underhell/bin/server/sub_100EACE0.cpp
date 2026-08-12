void __thiscall sub_100EACE0(unsigned __int16 *this, int a2, char a3)
{
  int v4; // edx
  int v5; // ebx
  int *v6; // ecx

  if ( a2 )
  {
    (*(void (__thiscall **)(unsigned __int16 *, int, int))(*(_DWORD *)this + 140))(this, a2, -1);
    sub_100E0970((int)this, v4, 0, 0);
    if ( a3 )
    {
      v5 = *((_DWORD *)this + 48) | 1;
      if ( *((_DWORD *)this + 48) != v5 )
      {
        if ( *((_BYTE *)this + 84) )
        {
          *((_BYTE *)this + 88) |= 1u;
        }
        else
        {
          v6 = (int *)*((_DWORD *)this + 6);
          if ( v6 )
            sub_100194B0(v6, 192);
        }
        *((_DWORD *)this + 48) = v5;
      }
    }
    sub_101129A0(this[178] | 4);
    sub_100E10C0((int)this, &flt_106F1CA8);
    sub_100E11A0((int)this, &flt_106F1CB4);
  }
  else
  {
    sub_100E1BB0(this);
  }
}
