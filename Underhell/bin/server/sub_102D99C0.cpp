void __thiscall sub_102D99C0(void *this, int a2)
{
  int v2; // eax
  int v3; // eax

  if ( (*(_DWORD *)(a2 + 64) & 0x40024021) == 0 )
  {
    v2 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 176))(this) - 1;
    if ( v2 )
    {
      v3 = v2 - 1;
      if ( v3 )
      {
        if ( v3 == 1 )
          *(float *)(a2 + 52) = *(float *)(dword_106DECDC + 44) * *(float *)(a2 + 52);
      }
      else
      {
        *(float *)(a2 + 52) = *(float *)(dword_106DEC94 + 44) * *(float *)(a2 + 52);
      }
    }
    else
    {
      *(float *)(a2 + 52) = *(float *)(dword_106DEC4C + 44) * *(float *)(a2 + 52);
    }
  }
}
