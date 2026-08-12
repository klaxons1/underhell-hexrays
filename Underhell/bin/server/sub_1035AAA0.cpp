char *__thiscall sub_1035AAA0(char *this)
{
  int v2; // edx
  int *v3; // ecx
  int v5; // [esp+Ch] [ebp-4h]

  sub_103431B0((int)this);
  *((float *)this + 583) = 130.0;
  *(_DWORD *)this = &CNPC_CombineS::`vftable';
  *((_DWORD *)this + 526) = &CNPC_CombineS::`vftable';
  *((_DWORD *)this + 905) = &CNPC_CombineS::`vftable';
  *((_DWORD *)this + 913) = &CNPC_CombineS::`vftable';
  this[5012] = 1;
  this[5024] = 0;
  *(_WORD *)(this + 4993) = 0;
  *((_DWORD *)this + 427) = *(_DWORD *)(dword_106B9204 + 48);
  *((_DWORD *)this + 202) = 8;
  this[1713] = 1;
  *((_DWORD *)this + 429) = *(_DWORD *)(dword_106B91BC + 48);
  *((_DWORD *)this + 430) = *(_DWORD *)(dword_106B9174 + 48) / 2;
  *((_DWORD *)this + 431) = *(_DWORD *)(dword_106B9174 + 48) / 2;
  *((_DWORD *)this + 432) = *(_DWORD *)(dword_106B9174 + 48);
  *((_DWORD *)this + 433) = *(_DWORD *)(dword_106B9174 + 48);
  v2 = sub_10219A30() % 3;
  v5 = v2;
  if ( *((_DWORD *)this + 212) != v2 )
  {
    if ( this[84] )
    {
      this[88] |= 1u;
    }
    else
    {
      v3 = (int *)*((_DWORD *)this + 6);
      if ( v3 )
      {
        sub_100194B0(v3, 848);
        v2 = v5;
      }
    }
    *((_DWORD *)this + 212) = v2;
  }
  *((_DWORD *)this + 1249) = sub_10219A30() % 4;
  *((_DWORD *)this + 434) = 0;
  *((_DWORD *)this + 1250) = sub_10219A30() % 2;
  *((_DWORD *)this + 1251) = 0;
  *((_DWORD *)this + 1254) = 1;
  return this;
}
