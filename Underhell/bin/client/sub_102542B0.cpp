int __thiscall sub_102542B0(_DWORD *this, int a2, int a3)
{
  int v3; // ebx
  int v5; // eax
  int v6; // eax
  int v7; // ebp
  bool v8; // zf
  bool v9; // cc
  wint_t v10; // di
  int v11; // ebp
  int v12; // ecx
  int v14; // [esp+10h] [ebp-18h] BYREF
  int v15; // [esp+14h] [ebp-14h]
  int v16; // [esp+18h] [ebp-10h] BYREF
  int v17; // [esp+1Ch] [ebp-Ch] BYREF
  int v18; // [esp+20h] [ebp-8h] BYREF
  int v19; // [esp+24h] [ebp-4h] BYREF

  v3 = 0;
  if ( a2 < 0 )
    a2 = 0;
  v5 = this[68];
  if ( a2 >= v5 )
    a2 = v5 - 1;
  v6 = (*(int (__thiscall **)(_DWORD *))(*this + 1016))(this);
  v7 = 0;
  v8 = this[58] == 0;
  v9 = this[58] > 0;
  v14 = 3;
  v16 = v6;
  v15 = 0;
  this[80] = 0;
  if ( !v9 )
    goto LABEL_23;
  while ( 1 )
  {
    v10 = *(_WORD *)(this[55] + 2 * v3);
    if ( *((_BYTE *)this + 293) )
      v10 = 42;
    if ( *(_DWORD *)(this[65] + 4 * v7) == v3 )
      break;
LABEL_13:
    v11 = this[83];
    if ( iswcntrl(v10) )
    {
      v12 = 0;
    }
    else
    {
      (*(void (__thiscall **)(int, int, _DWORD, int *, int *, int *))(*(_DWORD *)dword_1047CA6C + 280))(
        dword_1047CA6C,
        v11,
        v10,
        &v18,
        &v17,
        &v19);
      v12 = v19 + v18 + v17;
    }
    if ( a2 == v15 && v14 + v12 / 2 > a3 )
      goto LABEL_21;
    v14 += v12;
    if ( ++v3 >= this[58] )
      goto LABEL_22;
    v7 = v15;
  }
  if ( v7 != a2 )
  {
    (*(void (__thiscall **)(_DWORD *, int *, int *))(*this + 1012))(this, &v14, &v16);
    v15 = v7 + 1;
    goto LABEL_13;
  }
  *((_BYTE *)this + 285) = 1;
LABEL_21:
  this[70] = v3;
LABEL_22:
  v8 = v3 == this[58];
LABEL_23:
  if ( v8 )
    (*(void (__thiscall **)(_DWORD *))(*this + 828))(this);
  (*(void (__thiscall **)(_DWORD *))(*this + 976))(this);
  (*(void (__thiscall **)(_DWORD *))(*this + 980))(this);
  return (*(int (__thiscall **)(_DWORD *))(*this + 16))(this);
}
