int __thiscall sub_1000CBC0(_WORD *this, int a2)
{
  int v3; // eax
  float *v4; // eax
  int v5; // eax
  float *v7; // eax
  int v8; // eax
  int v9[4]; // [esp+14h] [ebp-10h] BYREF

  sub_100399E0(&flt_10459240);
  sub_1008FB60(this[194] & 0xFFF7);
  sub_1000FBC0(a2, 1);
  if ( a2 )
    v3 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    v3 = -1;
  if ( *((_DWORD *)this + 490) != v3 )
    *((_DWORD *)this + 490) = v3;
  sub_10039310(this);
  sub_10038390(a2);
  *((_DWORD *)this + 28) &= ~0x100u;
  v4 = (float *)off_103DC81C;
  if ( *((_DWORD *)this + 493) != *((_DWORD *)off_103DC81C + 3) )
  {
    *((float *)this + 493) = *((float *)off_103DC81C + 3);
    v4 = (float *)off_103DC81C;
  }
  if ( *((_DWORD *)this + 494) != *((_DWORD *)v4 + 3) )
    *((float *)this + 494) = v4[3];
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = -1;
  sub_10011170((int)v9, 0, 0, 0, -1, 0.0, 0);
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 504))(a2) )
  {
    v5 = (*(int (__thiscall **)(_WORD *, _DWORD))(*(_DWORD *)this + 1116))(this, 0);
    return sub_1003B810(v5);
  }
  else
  {
    v7 = (float *)off_103DC81C;
    if ( *((_DWORD *)this + 493) != *((_DWORD *)off_103DC81C + 3) )
    {
      *((float *)this + 493) = *((float *)off_103DC81C + 3);
      v7 = (float *)off_103DC81C;
    }
    if ( *((_DWORD *)this + 494) != *((_DWORD *)v7 + 3) )
      *((float *)this + 494) = v7[3];
    v8 = (*(int (__thiscall **)(_WORD *))(*(_DWORD *)this + 1120))(this);
    return sub_1003B810(v8);
  }
}
