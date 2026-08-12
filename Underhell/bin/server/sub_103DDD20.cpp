void __thiscall sub_103DDD20(void *this)
{
  int *v2; // ecx

  (*(void (__thiscall **)(void *))(*(_DWORD *)this + 100))(this);
  nullsub_4();
  if ( *((_BYTE *)this + 800) )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
      *((_BYTE *)this + 800) = 0;
    }
    else
    {
      v2 = (int *)*((_DWORD *)this + 6);
      if ( v2 )
        sub_100194B0(v2, 800);
      *((_BYTE *)this + 800) = 0;
    }
  }
}
