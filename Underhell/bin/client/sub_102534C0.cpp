int __thiscall sub_102534C0(int this, int a2, int a3)
{
  int v4; // ecx
  int v5; // eax
  int v6; // edi
  int (__thiscall *v7)(int, int *); // edx
  int v8; // ebx
  wint_t v9; // bp
  int v10; // edi
  int v11; // edi
  int result; // eax
  char v13; // [esp+13h] [ebp-2Dh]
  int v14; // [esp+14h] [ebp-2Ch] BYREF
  int v15; // [esp+18h] [ebp-28h] BYREF
  int v16; // [esp+1Ch] [ebp-24h] BYREF
  int v17; // [esp+20h] [ebp-20h]
  int v18; // [esp+24h] [ebp-1Ch]
  int v19; // [esp+28h] [ebp-18h] BYREF
  int v20; // [esp+2Ch] [ebp-14h] BYREF
  int v21; // [esp+30h] [ebp-10h]
  int v22; // [esp+34h] [ebp-Ch] BYREF
  int v23; // [esp+38h] [ebp-8h] BYREF
  int v24; // [esp+3Ch] [ebp-4h] BYREF
  int v25; // [esp+44h] [ebp+4h]
  int v26; // [esp+48h] [ebp+8h]

  sub_102361D0((int (__thiscall ***)(void *, int, int))this, (int)&v19, (int)&v20);
  if ( a2 <= v19 + 100 )
    v25 = a2 < 0 ? 0 : a2;
  else
    v25 = v19 + 100;
  v4 = v20;
  if ( a3 <= v20 )
    v4 = a3 < 0 ? 0 : a3;
  v5 = *(_DWORD *)(this + 332);
  *(_BYTE *)(this + 285) = 0;
  v26 = v4;
  v21 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 268))(dword_1047CA6C, v5);
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 1016))(this);
  *(_DWORD *)(this + 320) = 0;
  v15 = 0;
  v13 = 0;
  v7 = *(int (__thiscall **)(int, int *))(*(_DWORD *)this + 1032);
  v17 = v6;
  v14 = 3;
  v16 = v6;
  v8 = v7(this, &v15);
  if ( v8 >= *(_DWORD *)(this + 232) )
    return v8;
  while ( 1 )
  {
    v9 = *(_WORD *)(*(_DWORD *)(this + 220) + 2 * v8);
    if ( *(_BYTE *)(this + 293) )
      v9 = 42;
    if ( *(_DWORD *)(*(_DWORD *)(this + 260) + 4 * v15) == v8 )
    {
      (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)this + 1012))(this, &v14, &v16);
      ++v15;
      if ( v13 )
      {
        *(_BYTE *)(this + 285) = 1;
        return v8;
      }
    }
    if ( v26 < v6 )
    {
      *(_BYTE *)(this + 285) = 1;
LABEL_17:
      v13 = 1;
      goto LABEL_18;
    }
    if ( v26 >= v16 && v26 < v16 + v21 + 1 )
      goto LABEL_17;
LABEL_18:
    v10 = *(_DWORD *)(this + 332);
    if ( iswcntrl(v9) )
    {
      v11 = 0;
    }
    else
    {
      (*(void (__thiscall **)(int, int, _DWORD, int *, int *, int *))(*(_DWORD *)dword_1047CA6C + 280))(
        dword_1047CA6C,
        v10,
        v9,
        &v23,
        &v22,
        &v24);
      v11 = v24 + v23 + v22;
    }
    v18 = v11;
    if ( v13 )
    {
      if ( v25 <= sub_102374C0((int (__thiscall ***)(void *, int *, _BYTE *))this)
        && (v25 < *(_DWORD *)(this + 320) + 3 || v26 < v17) )
      {
        return v8;
      }
      if ( v25 >= v14 && v25 < v11 + v14 )
        break;
    }
    v14 += v11;
    if ( ++v8 >= *(_DWORD *)(this + 232) )
      return v8;
    v6 = v17;
  }
  result = v8 + 1;
  if ( (double)v18 * 0.5 + (double)v14 > (double)v25 )
    return v8;
  return result;
}
