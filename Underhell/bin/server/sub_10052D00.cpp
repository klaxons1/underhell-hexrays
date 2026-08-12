void __thiscall sub_10052D00(unsigned __int16 *this, int a2, char a3)
{
  int v4; // ecx
  int v5; // edi
  int v6; // ecx
  _DWORD *v7; // eax
  int v8; // eax
  void *v9; // eax
  int v10; // edx
  int v11; // eax

  v4 = this[1];
  v5 = (a2 + 31) / 32;
  if ( v5 != v4 )
  {
    if ( *((_DWORD *)this + 2) )
    {
      sub_10051390((int)this, (a2 + 31) / 32);
      if ( !a3 )
      {
        v6 = *this;
        if ( a2 >= v6 )
        {
          v7 = (_DWORD *)(*((_DWORD *)this + 2) + 4 * this[1] - 4);
          *v7 &= dword_10603BC0[v6 & 0x1F];
          memset((void *)(*((_DWORD *)this + 2) + 4 * this[1]), 0, 4 * (v5 - this[1]));
        }
      }
    }
    else
    {
      if ( v5 )
      {
        if ( v5 == 1 )
          v8 = (int)(this + 2);
        else
          v8 = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 4 * v5);
        *((_DWORD *)this + 2) = v8;
      }
      a3 = 1;
    }
    this[1] = v5;
    if ( !a3 )
      goto LABEL_15;
    goto LABEL_13;
  }
  if ( a3 )
  {
LABEL_13:
    v9 = (void *)*((_DWORD *)this + 2);
    if ( v9 )
      memset(v9, 0, 4 * v5);
LABEL_15:
    *this = a2;
    return;
  }
  v10 = *this;
  if ( a2 < v10 )
    goto LABEL_15;
  v11 = *((_DWORD *)this + 2);
  if ( !v11 )
    goto LABEL_15;
  *(_DWORD *)(v11 + 4 * v4 - 4) &= dword_10603BC0[v10 & 0x1F];
  *this = a2;
}
