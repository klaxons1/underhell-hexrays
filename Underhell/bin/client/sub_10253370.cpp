int *__thiscall sub_10253370(_DWORD *this, int a2, int *a3, int *a4)
{
  int (__thiscall *v5)(_DWORD *, int *); // edx
  int i; // edi
  wint_t v7; // bx
  int v8; // eax
  int v9; // ebp
  int v10; // eax
  int *result; // eax
  int v12; // ecx
  int v13; // [esp+14h] [ebp-18h] BYREF
  int v14; // [esp+18h] [ebp-14h] BYREF
  int v15; // [esp+1Ch] [ebp-10h] BYREF
  int v16; // [esp+20h] [ebp-Ch] BYREF
  int v17; // [esp+24h] [ebp-8h] BYREF
  int v18; // [esp+28h] [ebp-4h] BYREF

  v15 = (*(int (__thiscall **)(_DWORD *))(*this + 1016))(this);
  this[80] = 0;
  v14 = 0;
  v5 = *(int (__thiscall **)(_DWORD *, int *))(*this + 1032);
  v13 = 3;
  for ( i = v5(this, &v14); i < this[58]; ++i )
  {
    v7 = *(_WORD *)(this[55] + 2 * i);
    if ( *((_BYTE *)this + 293) )
      v7 = 42;
    if ( a2 == i )
      break;
    v8 = this[68];
    if ( v8 && v14 < v8 && *(_DWORD *)(this[65] + 4 * v14) == i )
    {
      (*(void (__thiscall **)(_DWORD *, int *, int *))(*this + 1012))(this, &v13, &v15);
      ++v14;
    }
    v9 = this[83];
    if ( iswcntrl(v7) )
    {
      v10 = 0;
    }
    else
    {
      (*(void (__thiscall **)(int, int, _DWORD, int *, int *, int *))(*(_DWORD *)dword_1047CA6C + 280))(
        dword_1047CA6C,
        v9,
        v7,
        &v17,
        &v18,
        &v16);
      v10 = v18 + v17 + v16;
    }
    v13 += v10;
  }
  result = (int *)v13;
  if ( *((_BYTE *)this + 928) )
  {
    v12 = v15;
    *a3 = this[233] + v13;
    result = a4;
    *a4 = v12;
  }
  else
  {
    *a3 = v13;
    *a4 = v15;
  }
  return result;
}
