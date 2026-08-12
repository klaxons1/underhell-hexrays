double __thiscall sub_10189350(void *this, int a2)
{
  double result; // st7

  if ( !a2
    || ((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 1244))(a2) & 8) == 0
    || sub_1012BC00(&dword_1069E3E0) < *(_DWORD *)(dword_106B31C8 + 80) - 100 )
  {
    return 0.0;
  }
  (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 328))(this, a2);
  return result;
}
