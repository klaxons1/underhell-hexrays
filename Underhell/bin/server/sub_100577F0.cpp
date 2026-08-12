char __thiscall sub_100577F0(int this, int a2, int a3)
{
  unsigned int v4; // eax
  int *v5; // ecx
  int v6; // ecx
  int v7; // edi
  unsigned int v8; // eax
  int v9; // ecx
  int v10; // eax

  v4 = *(_DWORD *)(this + 20);
  if ( v4 == -1 || (v5 = &off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 1], v4 >>= 12, v5[1] != v4) )
    v6 = 0;
  else
    v6 = *v5;
  v7 = a2;
  if ( a2 != v6 )
  {
    LOBYTE(v4) = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 264))(*(_DWORD *)(this + 4));
    if ( (_BYTE)v4 )
    {
      *(float *)(this + 80) = 0.0;
      v8 = *(_DWORD *)(this + 20);
      if ( v8 != -1
        && off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 2] == v8 >> 12
        && off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 1] )
      {
        sub_10057770(dword_106921E0, this + 216);
        *(_DWORD *)(this + 20) = -1;
        v9 = *(_DWORD *)(this + 4);
        *(_DWORD *)(this + 216) = 0;
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 1364))(v9) == this )
        {
          if ( sub_1007E000(*(_DWORD *)(*(_DWORD *)(this + 4) + 2588)) == 1 )
            sub_10082A70(1);
          if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 368))(*(_DWORD *)(this + 4)) )
          {
            v10 = *(_DWORD *)(this + 4);
            if ( *(_DWORD *)(v10 + 2336) != 3 )
              *(_DWORD *)(v10 + 2336) = 3;
          }
        }
        v7 = a2;
      }
      if ( v7 && sub_10057680(dword_106921E0, v7, *(_DWORD *)(this + 4), *(_DWORD *)(this + 224), (int **)(this + 216)) )
      {
        sub_10019680((_DWORD *)(this + 20), v7);
        *(float *)(this + 88) = 0.0;
        *(_BYTE *)(this + 84) = 1;
        sub_1004C1E0((char **)this, 100000);
        *(float *)(this + 104) = -1.0;
        sub_10051DF0(this);
      }
      LOBYTE(v4) = sub_1004BA00((int *)this, a3);
    }
  }
  return v4;
}
