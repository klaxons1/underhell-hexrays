void __thiscall sub_1026D460(int *this, int a2)
{
  int (__thiscall ***v2)(_DWORD); // ebp
  int v4; // ebx
  int v5; // edi
  int v6; // edi
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  bool v10; // zf
  int *v11; // edi

  v2 = (int (__thiscall ***)(_DWORD))a2;
  if ( a2 )
  {
    v4 = this[3];
    v5 = 0;
    if ( v4 <= 0 )
    {
LABEL_5:
      a2 = -1;
      sub_102393F0(&a2, v2);
      v6 = this[3];
      v7 = this[1];
      if ( v6 + 1 > v7 )
        sub_102AA460(v6 - v7 + 1);
      ++this[3];
      v8 = *this;
      v9 = this[3] - v6 - 1;
      v10 = this[3] - v6 == 1;
      this[4] = *this;
      if ( v9 >= 0 && !v10 )
        memcpy((void *)(v8 + 4 * v6 + 4), (const void *)(v8 + 4 * v6), 4 * v9);
      v11 = (int *)(*this + 4 * v6);
      if ( v11 )
        *v11 = a2;
    }
    else
    {
      while ( (int (__thiscall ***)(_DWORD))sub_10237C80((_DWORD *)(*this + 4 * v5)) != v2 )
      {
        if ( ++v5 >= v4 )
          goto LABEL_5;
      }
    }
  }
}
