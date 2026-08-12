int __thiscall sub_10135700(char *this, int a2, int a3, float a4, int a5, float a6)
{
  float *v7; // edi
  int result; // eax
  int *v9; // edi
  int v10; // ecx
  float *v11; // edi
  double v12; // st7

  *((float *)this + 34) = 1.0;
  *((float *)this + 33) = 1.0;
  *((_DWORD *)this + 35) = a2;
  v7 = (float *)(this + 4);
  *((float *)this + 28) = a4;
  *((float *)this + 30) = a4;
  *((float *)this + 29) = a4;
  if ( *((_DWORD *)this + 1) != *((_DWORD *)this + 29) )
  {
    (**(void (__thiscall ***)(void *, int))this)(this, (int)(this + 4));
    *v7 = *((float *)this + 29);
  }
  if ( *((_DWORD *)this + 2) != a3 )
  {
    (**(void (__thiscall ***)(void *, int))this)(this, (int)(this + 8));
    *((_DWORD *)this + 2) = a3;
  }
  (**((void (__thiscall ***)(int, int))this + 36))((int)(this + 144), a3);
  result = (**((int (__thiscall ***)(int, int))this + 73))((int)(this + 292), a3);
  v9 = (int *)(this + 56);
  if ( *((_DWORD *)this + 14) != a5 )
  {
    result = (**(int (__thiscall ***)(void *, int))this)(this, (int)(this + 56));
    *v9 = a5;
  }
  v10 = *v9;
  v11 = (float *)(this + 60);
  *((_DWORD *)this + 12) = v10;
  if ( *((_DWORD *)this + 15) != LODWORD(a6) )
  {
    result = (**(int (__thiscall ***)(void *, int))this)(this, (int)(this + 60));
    *v11 = a6;
  }
  v12 = *v11;
  *((float *)this + 13) = *v11;
  this[128] = 1;
  *((float *)this + 31) = v12;
  return result;
}
