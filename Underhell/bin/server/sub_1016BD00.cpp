char __thiscall sub_1016BD00(void *this, int a2, char a3, char a4)
{
  int v6; // edx
  float v7; // ecx
  char *v8; // ebx
  int *v9; // ecx
  _DWORD *v10; // eax

  if ( a4 && *(float *)(dword_106B31C8 + 12) - *((float *)this + 1) < 11.0 )
    return 0;
  if ( !a3 && ((1 << (a2 & 0x1F)) & *(_DWORD *)(*((_DWORD *)this + 5) + 4 * (a2 >> 5))) != 0 )
    return 0;
  v6 = *((_DWORD *)this + 6);
  v7 = *(float *)this;
  *((float *)this + 1) = *(float *)(dword_106B31C8 + 12);
  v8 = *(char **)(v6 + 4 * a2);
  if ( (*(unsigned __int8 (__thiscall **)(float))(*(_DWORD *)LODWORD(v7) + 324))(COERCE_FLOAT(LODWORD(v7))) )
  {
    v9 = (int *)*((_DWORD *)this + 7);
    if ( v9 )
    {
      if ( *((_BYTE *)this + 8) )
        sub_1016B940(v9, v8, 6.0, 0);
    }
  }
  v10 = (_DWORD *)(*((_DWORD *)this + 5) + 4 * (a2 >> 5));
  *v10 |= 1 << (a2 & 0x1F);
  return 1;
}
