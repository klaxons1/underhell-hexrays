void __thiscall sub_10214A10(int this, __int64 a2, int a3, int a4)
{
  unsigned int v5; // eax
  int *v6; // ecx
  unsigned int v7; // eax
  int *v8; // ecx
  int v9; // eax
  unsigned int v10; // eax
  int v11; // eax
  int v12; // edi

  v5 = *(_DWORD *)(this + 1724);
  if ( v5 != -1 )
  {
    v6 = &off_1061BE18[4 * (*(_DWORD *)(this + 1724) & 0xFFF) + 1];
    if ( v6[1] == v5 >> 12 && *v6 && *(_DWORD *)(this + 1672) == 3 )
    {
      if ( (_DWORD)a2 )
        *(_DWORD *)(this + 1716) = *(_DWORD *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)a2 + 8))(a2);
      else
        *(_DWORD *)(this + 1716) = -1;
      v7 = *(_DWORD *)(this + 1724);
      if ( v7 != -1 )
      {
        v8 = &off_1061BE18[4 * (*(_DWORD *)(this + 1724) & 0xFFF) + 1];
        if ( off_1061BE18[4 * (*(_DWORD *)(this + 1724) & 0xFFF) + 2] == v7 >> 12 )
        {
LABEL_10:
          sub_102141C0((_DWORD *)this, *v8);
          return;
        }
      }
      goto LABEL_24;
    }
  }
  v9 = *(_DWORD *)(this + 1672);
  if ( !v9 || v9 == 2 && (*(_DWORD *)(this + 248) & 0x2000) != 0 )
  {
    if ( *(_BYTE *)(this + 1720) )
    {
      v11 = sub_100BDCE0(this, dword_106C1B70);
      sub_1020D850(this, v11);
      sub_1011FE20(this, this + 1676, 1, 0);
      sub_1010DD80((_DWORD *)(this + 1896), a2, 0.0);
    }
    else
    {
      if ( (_DWORD)a2 )
        *(_DWORD *)(this + 1716) = *(_DWORD *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)a2 + 8))(a2);
      else
        *(_DWORD *)(this + 1716) = -1;
      sub_1011FE20(this, this + 1676, 0, 0);
      v12 = sub_100BDCE0(this, dword_106C1B6C);
      sub_1020D850(this, v12);
      if ( v12 == -1 || !sub_100BE700(this, v12, 1) )
        sub_102144B0((_DWORD *)this);
    }
  }
  else
  {
    if ( v9 == 1 && (*(_DWORD *)(this + 248) & 0x2000) != 0 )
    {
      sub_10019680((_DWORD *)(this + 1716), a2);
      sub_10210260((_DWORD *)this);
      return;
    }
    if ( v9 == 3 || v9 == 4 )
    {
      if ( (_DWORD)a2 )
        *(_DWORD *)(this + 1716) = *(_DWORD *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)a2 + 8))(a2);
      else
        *(_DWORD *)(this + 1716) = -1;
      v10 = *(_DWORD *)(this + 1716);
      if ( v10 != -1 )
      {
        v8 = &off_1061BE18[4 * (*(_DWORD *)(this + 1716) & 0xFFF) + 1];
        if ( off_1061BE18[4 * (*(_DWORD *)(this + 1716) & 0xFFF) + 2] == v10 >> 12 )
          goto LABEL_10;
      }
LABEL_24:
      sub_102141C0((_DWORD *)this, 0);
    }
  }
}
