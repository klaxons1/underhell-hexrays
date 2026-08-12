int __thiscall sub_1042C710(
        void *this,
        int a2,
        const char *a3,
        int a4,
        char *a5,
        char a6,
        float a7,
        char a8,
        float a9,
        int a10)
{
  const char *v10; // eax
  unsigned int v12; // kr00_4
  void *v13; // eax
  double v14; // st7
  char *v15; // eax
  int result; // eax
  const char *v17; // [esp-14h] [ebp-18h]
  const void *v18; // [esp-Ch] [ebp-10h]
  size_t v19; // [esp-8h] [ebp-Ch]

  v10 = a3;
  *((_DWORD *)this + 7) = this;
  if ( !a3 )
    v10 = (const char *)off_1068E2FC[0];
  *((_DWORD *)this + 8) = v10;
  v12 = strlen(v10);
  *((_DWORD *)this + 10) = v12 + 1;
  v13 = (void *)sub_10184390(v12 + 1);
  v19 = *((_DWORD *)this + 10);
  v18 = (const void *)*((_DWORD *)this + 8);
  *((_DWORD *)this + 9) = v13;
  memcpy_0(v13, v18, v19);
  *((float *)this + 14) = a7;
  *((float *)this + 16) = a9;
  *((_BYTE *)this + 52) = a6;
  v17 = (const char *)*((_DWORD *)this + 9);
  *((_BYTE *)this + 60) = a8;
  *((_DWORD *)this + 17) = a10;
  v14 = atof(v17);
  *((float *)this + 11) = v14;
  *((_DWORD *)this + 12) = (int)v14;
  v15 = a5;
  *((_BYTE *)this + 8) = 0;
  *((_DWORD *)this + 3) = a2;
  if ( !a5 )
    v15 = (char *)off_1068E2AC[0];
  *((_DWORD *)this + 4) = v15;
  result = a4;
  *((_DWORD *)this + 5) = a4;
  if ( (a4 & 1) != 0 )
  {
    *((_DWORD *)this + 1) = 0;
  }
  else
  {
    *((_DWORD *)this + 1) = dword_106FE528;
    dword_106FE528 = (int)this;
  }
  if ( dword_106FE52C )
    return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 36))(this);
  return result;
}
