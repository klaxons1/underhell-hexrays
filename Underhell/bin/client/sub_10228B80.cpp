_BYTE *__thiscall sub_10228B80(_BYTE *this, int a2, int a3, char *a4, int a5, int (*a6)())
{
  char v7; // al
  int (*v8)(); // edx
  char v9; // cl
  char *v10; // eax

  this[32] |= 2u;
  *((_DWORD *)this + 6) = a3;
  v7 = this[32];
  this[8] = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 1) = 0;
  *(_DWORD *)this = &ConCommand::`vftable';
  v8 = a6;
  if ( !a6 )
    v8 = sub_101915B0;
  v9 = v7 & 0xFA | (a6 != 0);
  v10 = a4;
  *((_DWORD *)this + 7) = v8;
  this[32] = v9;
  this[8] = 0;
  *((_DWORD *)this + 3) = a2;
  if ( !a4 )
    v10 = (char *)off_103FC14C[0];
  *((_DWORD *)this + 4) = v10;
  *((_DWORD *)this + 5) = a5;
  if ( (a5 & 1) != 0 )
  {
    *((_DWORD *)this + 1) = 0;
  }
  else
  {
    *((_DWORD *)this + 1) = dword_10479818;
    dword_10479818 = (int)this;
  }
  if ( dword_1047981C )
    (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 36))(this);
  return this;
}
